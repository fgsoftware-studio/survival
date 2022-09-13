using System;
using UnityEngine;

public class TileGeneration : MonoBehaviour
{
    [SerializeField] private NoiseGeneration noiseMapGeneration;

    [SerializeField] private MeshRenderer tileRenderer;

    [SerializeField] private MeshFilter meshFilter;

    [SerializeField] private MeshCollider meshCollider;

    [SerializeField] private float levelScale;

    [SerializeField] private TerrainType[] heightTerrainTypes;

    [SerializeField] private TerrainType[] heatTerrainTypes;

    [SerializeField] private TerrainType[] moistureTerrainTypes;

    [SerializeField] private float heightMultiplier;

    [SerializeField] private AnimationCurve heightCurve;

    [SerializeField] private AnimationCurve heatCurve;

    [SerializeField] private AnimationCurve moistureCurve;

    [SerializeField] private Wave[] heightWaves;

    [SerializeField] private Wave[] heatWaves;

    [SerializeField] private Wave[] moistureWaves;

    [SerializeField] private BiomeRow[] biomes;

    [SerializeField] private Color waterColor;

    [SerializeField] private VisualizationMode visualizationMode;

    public TileData GenerateTile(float centerVertexZ, float maxDistanceZ)
    {
        var meshVertices = meshFilter.mesh.vertices;
        var tileDepth = (int)Mathf.Sqrt(meshVertices.Length);
        var tileWidth = tileDepth;
        var offsetX = -gameObject.transform.position.x;
        var offsetZ = -gameObject.transform.position.z;
        var heightMap =
            noiseMapGeneration.GeneratePerlinNoiseMap(tileDepth, tileWidth, levelScale, offsetX, offsetZ, heightWaves);
        var tileDimensions = meshFilter.mesh.bounds.size;
        var distanceBetweenVertices = tileDimensions.z / tileDepth;
        var vertexOffsetZ = gameObject.transform.position.z / distanceBetweenVertices;
        var uniformHeatMap =
            noiseMapGeneration.GenerateUniformNoiseMap(tileDepth, tileWidth, centerVertexZ, maxDistanceZ,
                vertexOffsetZ);
        var randomHeatMap =
            noiseMapGeneration.GeneratePerlinNoiseMap(tileDepth, tileWidth, levelScale, offsetX, offsetZ, heatWaves);
        var heatMap = new float[tileDepth, tileWidth];

        for (var zIndex = 0; zIndex < tileDepth; zIndex++)
        for (var xIndex = 0; xIndex < tileWidth; xIndex++)
        {
            heatMap[zIndex, xIndex] = uniformHeatMap[zIndex, xIndex] * randomHeatMap[zIndex, xIndex];
            heatMap[zIndex, xIndex] += heatCurve.Evaluate(heightMap[zIndex, xIndex]) * heightMap[zIndex, xIndex];
        }

        var moistureMap =
            noiseMapGeneration.GeneratePerlinNoiseMap(tileDepth, tileWidth, levelScale, offsetX, offsetZ,
                moistureWaves);
        for (var zIndex = 0; zIndex < tileDepth; zIndex++)
        for (var xIndex = 0; xIndex < tileWidth; xIndex++)
            moistureMap[zIndex, xIndex] -=
                moistureCurve.Evaluate(heightMap[zIndex, xIndex]) * heightMap[zIndex, xIndex];

        var chosenHeightTerrainTypes = new TerrainType[tileDepth, tileWidth];
        var heightTexture = BuildTexture(heightMap, heightTerrainTypes, chosenHeightTerrainTypes);
        var chosenHeatTerrainTypes = new TerrainType[tileDepth, tileWidth];
        var heatTexture = BuildTexture(heatMap, heatTerrainTypes, chosenHeatTerrainTypes);
        var chosenMoistureTerrainTypes = new TerrainType[tileDepth, tileWidth];
        var moistureTexture = BuildTexture(moistureMap, moistureTerrainTypes, chosenMoistureTerrainTypes);
        var chosenBiomes = new Biome[tileDepth, tileWidth];
        var biomeTexture = BuildBiomeTexture(chosenHeightTerrainTypes, chosenHeatTerrainTypes,
            chosenMoistureTerrainTypes, chosenBiomes);

        switch (visualizationMode)
        {
            case VisualizationMode.Height:
                tileRenderer.material.mainTexture = heightTexture;
                break;
            case VisualizationMode.Heat:
                tileRenderer.material.mainTexture = heatTexture;
                break;
            case VisualizationMode.Moisture:
                tileRenderer.material.mainTexture = moistureTexture;
                break;
            case VisualizationMode.Biome:
                tileRenderer.material.mainTexture = biomeTexture;
                break;
        }

        UpdateMeshVertices(heightMap);

        var tileData = new TileData(heightMap, heatMap, moistureMap,
            chosenHeightTerrainTypes, chosenHeatTerrainTypes, chosenMoistureTerrainTypes, chosenBiomes,
            meshFilter.mesh, (Texture2D)tileRenderer.material.mainTexture);

        return tileData;
    }

    private Texture2D BuildTexture(float[,] heightMap, TerrainType[] terrainTypes, TerrainType[,] chosenTerrainTypes)
    {
        var tileDepth = heightMap.GetLength(0);
        var tileWidth = heightMap.GetLength(1);

        var colorMap = new Color[tileDepth * tileWidth];
        for (var zIndex = 0; zIndex < tileDepth; zIndex++)
        for (var xIndex = 0; xIndex < tileWidth; xIndex++)
        {
            var colorIndex = zIndex * tileWidth + xIndex;
            var height = heightMap[zIndex, xIndex];
            var terrainType = ChooseTerrainType(height, terrainTypes);

            colorMap[colorIndex] = terrainType.color;
            chosenTerrainTypes[zIndex, xIndex] = terrainType;
        }

        var tileTexture = new Texture2D(tileWidth, tileDepth);
        tileTexture.wrapMode = TextureWrapMode.Clamp;
        tileTexture.SetPixels(colorMap);
        tileTexture.Apply();

        return tileTexture;
    }

    private TerrainType ChooseTerrainType(float noise, TerrainType[] terrainTypes)
    {
        foreach (var terrainType in terrainTypes)
            if (noise < terrainType.threshold)
                return terrainType;
        return terrainTypes[terrainTypes.Length - 1];
    }

    private void UpdateMeshVertices(float[,] heightMap)
    {
        var tileDepth = heightMap.GetLength(0);
        var tileWidth = heightMap.GetLength(1);
        var meshVertices = meshFilter.mesh.vertices;
        var vertexIndex = 0;

        for (var zIndex = 0; zIndex < tileDepth; zIndex++)
        for (var xIndex = 0; xIndex < tileWidth; xIndex++)
        {
            var height = heightMap[zIndex, xIndex];

            var vertex = meshVertices[vertexIndex];
            meshVertices[vertexIndex] =
                new Vector3(vertex.x, heightCurve.Evaluate(height) * heightMultiplier, vertex.z);

            vertexIndex++;
        }

        meshFilter.mesh.vertices = meshVertices;
        meshFilter.mesh.RecalculateBounds();
        meshFilter.mesh.RecalculateNormals();
        meshCollider.sharedMesh = meshFilter.mesh;
    }

    private Texture2D BuildBiomeTexture(TerrainType[,] heightTerrainTypes, TerrainType[,] heatTerrainTypes,
        TerrainType[,] moistureTerrainTypes, Biome[,] chosenBiomes)
    {
        var tileDepth = heatTerrainTypes.GetLength(0);
        var tileWidth = heatTerrainTypes.GetLength(1);
        var colorMap = new Color[tileDepth * tileWidth];

        for (var zIndex = 0; zIndex < tileDepth; zIndex++)
        for (var xIndex = 0; xIndex < tileWidth; xIndex++)
        {
            var colorIndex = zIndex * tileWidth + xIndex;

            var heightTerrainType = heightTerrainTypes[zIndex, xIndex];

            if (heightTerrainType.name != "water")
            {
                var heatTerrainType = heatTerrainTypes[zIndex, xIndex];
                var moistureTerrainType = moistureTerrainTypes[zIndex, xIndex];
                var biome = biomes[moistureTerrainType.index].biomes[heatTerrainType.index];

                colorMap[colorIndex] = biome.color;
                chosenBiomes[zIndex, xIndex] = biome;
            }
            else
            {
                colorMap[colorIndex] = waterColor;
            }
        }

        var tileTexture = new Texture2D(tileWidth, tileDepth);

        tileTexture.wrapMode = TextureWrapMode.Clamp;
        tileTexture.SetPixels(colorMap);
        tileTexture.Apply();

        return tileTexture;
    }
}

[Serializable]
public class TerrainType
{
    public string name;
    public float threshold;
    public Color color;
    public int index;
}

[Serializable]
public class Biome
{
    public string name;
    public Color color;
    public int index;
}

[Serializable]
public class BiomeRow
{
    public Biome[] biomes;
}

public class TileData
{
    public Biome[,] chosenBiomes;
    public TerrainType[,] chosenHeatTerrainTypes;
    public TerrainType[,] chosenHeightTerrainTypes;
    public TerrainType[,] chosenMoistureTerrainTypes;
    public float[,] heatMap;
    public float[,] heightMap;
    public Mesh mesh;
    public float[,] moistureMap;
    public Texture2D texture;

    public TileData(float[,] heightMap, float[,] heatMap, float[,] moistureMap,
        TerrainType[,] chosenHeightTerrainTypes, TerrainType[,] chosenHeatTerrainTypes,
        TerrainType[,] chosenMoistureTerrainTypes,
        Biome[,] chosenBiomes, Mesh mesh, Texture2D texture)
    {
        this.heightMap = heightMap;
        this.heatMap = heatMap;
        this.moistureMap = moistureMap;
        this.chosenHeightTerrainTypes = chosenHeightTerrainTypes;
        this.chosenHeatTerrainTypes = chosenHeatTerrainTypes;
        this.chosenMoistureTerrainTypes = chosenMoistureTerrainTypes;
        this.chosenBiomes = chosenBiomes;
        this.mesh = mesh;
        this.texture = texture;
    }
}

internal enum VisualizationMode
{
    Height,
    Heat,
    Moisture,
    Biome
}