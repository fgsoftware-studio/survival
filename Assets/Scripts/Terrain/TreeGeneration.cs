using UnityEngine;

public class TreeGeneration : MonoBehaviour
{
    [SerializeField] private NoiseGeneration noiseMapGeneration;

    [SerializeField] private Wave[] waves;

    [SerializeField] private float levelScale;

    [SerializeField] private float[] neighborRadius;

    [SerializeField] private GameObject[] treePrefab;

    public void GenerateTrees(int levelDepth, int levelWidth, float distanceBetweenVertices, LevelData levelData)
    {
        var treeMap = noiseMapGeneration.GeneratePerlinNoiseMap(levelDepth, levelWidth, levelScale, 0, 0, waves);
        var levelSizeX = levelWidth * distanceBetweenVertices;
        var levelSizeZ = levelDepth * distanceBetweenVertices;

        for (var zIndex = 0; zIndex < levelDepth; zIndex++)
        for (var xIndex = 0; xIndex < levelWidth; xIndex++)
        {
            var tileCoordinate = levelData.ConvertToTileCoordinate(zIndex, xIndex);
            var tileData = levelData.tilesData[tileCoordinate.tileZIndex, tileCoordinate.tileXIndex];
            var tileWidth = tileData.heightMap.GetLength(1);
            var meshVertices = tileData.mesh.vertices;
            var vertexIndex = tileCoordinate.coordinateZIndex * tileWidth + tileCoordinate.coordinateXIndex;
            var terrainType =
                tileData.chosenHeightTerrainTypes[tileCoordinate.coordinateZIndex, tileCoordinate.coordinateXIndex];
            var biome = tileData.chosenBiomes[tileCoordinate.coordinateZIndex, tileCoordinate.coordinateXIndex];

            if (terrainType.name == "water") continue;
            var treeValue = treeMap[zIndex, xIndex];
            var terrainTypeIndex = terrainType.index;
            var neighborZBegin = (int)Mathf.Max(0, zIndex - neighborRadius[biome.index]);
            var neighborZEnd = (int)Mathf.Min(levelDepth - 1, zIndex + neighborRadius[biome.index]);
            var neighborXBegin = (int)Mathf.Max(0, xIndex - neighborRadius[biome.index]);
            var neighborXEnd = (int)Mathf.Min(levelWidth - 1, xIndex + neighborRadius[biome.index]);
            var maxValue = 0f;

            for (var neighborZ = neighborZBegin; neighborZ <= neighborZEnd; neighborZ++)
            for (var neighborX = neighborXBegin; neighborX <= neighborXEnd; neighborX++)
            {
                var neighborValue = treeMap[neighborZ, neighborX];

                if (neighborValue >= maxValue) maxValue = neighborValue;
            }

            if (treeValue != maxValue) continue;
            var treePosition = new Vector3(xIndex * distanceBetweenVertices, meshVertices[vertexIndex].y,
                zIndex * distanceBetweenVertices);
            var tree = Instantiate(treePrefab[biome.index], treePosition, Quaternion.identity);
            tree.transform.localScale = new Vector3(0.05f, 0.05f, 0.05f);
        }
    }
}