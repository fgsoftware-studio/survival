using System.Collections.Generic;
using UnityEngine;

public class RiverGeneration : MonoBehaviour
{
    [SerializeField] private int numberOfRivers;

    [SerializeField] private float heightThreshold;

    [SerializeField] private Color riverColor;

    public void GenerateRivers(int levelDepth, int levelWidth, LevelData levelData)
    {
        for (var riverIndex = 0; riverIndex < numberOfRivers; riverIndex++)
        {
            var riverOrigin = ChooseRiverOrigin(levelDepth, levelWidth, levelData);

            BuildRiver(levelDepth, levelWidth, riverOrigin, levelData);
        }
    }

    private Vector3 ChooseRiverOrigin(int levelDepth, int levelWidth, LevelData levelData)
    {
        var found = false;
        var randomZIndex = 0;
        var randomXIndex = 0;

        while (!found)
        {
            randomZIndex = Random.Range(0, levelDepth);
            randomXIndex = Random.Range(0, levelWidth);
            var tileCoordinate = levelData.ConvertToTileCoordinate(randomZIndex, randomXIndex);
            var tileData = levelData.tilesData[tileCoordinate.tileZIndex, tileCoordinate.tileXIndex];
            var heightValue = tileData.heightMap[tileCoordinate.coordinateZIndex, tileCoordinate.coordinateXIndex];

            if (heightValue >= heightThreshold) found = true;
        }

        return new Vector3(randomXIndex, 0, randomZIndex);
    }

    private void BuildRiver(int levelDepth, int levelWidth, Vector3 riverOrigin, LevelData levelData)
    {
        var visitedCoordinates = new HashSet<Vector3>();
        var currentCoordinate = riverOrigin;
        var foundWater = false;

        while (!foundWater)
        {
            var tileCoordinate = levelData.ConvertToTileCoordinate((int)currentCoordinate.z, (int)currentCoordinate.x);
            var tileData = levelData.tilesData[tileCoordinate.tileZIndex, tileCoordinate.tileXIndex];

            visitedCoordinates.Add(currentCoordinate);

            if (tileData.chosenHeightTerrainTypes[tileCoordinate.coordinateZIndex, tileCoordinate.coordinateXIndex]
                    .name == "water")
            {
                foundWater = true;
            }
            else
            {
                tileData.texture.SetPixel(tileCoordinate.coordinateXIndex, tileCoordinate.coordinateZIndex, riverColor);
                tileData.texture.Apply();
                var neighbors = new List<Vector3>();

                if (currentCoordinate.z > 0)
                    neighbors.Add(new Vector3(currentCoordinate.x, 0, currentCoordinate.z - 1));
                if (currentCoordinate.z < levelDepth - 1)
                    neighbors.Add(new Vector3(currentCoordinate.x, 0, currentCoordinate.z + 1));
                if (currentCoordinate.x > 0)
                    neighbors.Add(new Vector3(currentCoordinate.x - 1, 0, currentCoordinate.z));
                if (currentCoordinate.x < levelWidth - 1)
                    neighbors.Add(new Vector3(currentCoordinate.x + 1, 0, currentCoordinate.z));

                var minHeight = float.MaxValue;
                var minNeighbor = new Vector3(0, 0, 0);

                foreach (var neighbor in neighbors)
                {
                    var neighborTileCoordinate = levelData.ConvertToTileCoordinate((int)neighbor.z, (int)neighbor.x);
                    var neighborTileData = levelData.tilesData[neighborTileCoordinate.tileZIndex,
                        neighborTileCoordinate.tileXIndex];
                    var neighborHeight = tileData.heightMap[neighborTileCoordinate.coordinateZIndex,
                        neighborTileCoordinate.coordinateXIndex];

                    if (neighborHeight < minHeight && !visitedCoordinates.Contains(neighbor))
                    {
                        minHeight = neighborHeight;
                        minNeighbor = neighbor;
                    }
                }

                currentCoordinate = minNeighbor;
            }
        }
    }
}