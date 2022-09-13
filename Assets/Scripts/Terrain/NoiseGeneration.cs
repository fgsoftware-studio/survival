using System;
using UnityEngine;

public class NoiseGeneration : MonoBehaviour
{
    public float[,] GeneratePerlinNoiseMap(int mapDepth, int mapWidth, float scale, float offsetX, float offsetZ,
        Wave[] waves)
    {
        var noiseMap = new float[mapDepth, mapWidth];

        for (var zIndex = 0; zIndex < mapDepth; zIndex++)
        for (var xIndex = 0; xIndex < mapWidth; xIndex++)
        {
            var sampleX = (xIndex + offsetX) / scale;
            var sampleZ = (zIndex + offsetZ) / scale;
            var noise = 0f;
            var normalization = 0f;

            foreach (var wave in waves)
            {
                noise += wave.amplitude * Mathf.PerlinNoise(sampleX * wave.frequency + wave.seed,
                    sampleZ * wave.frequency + wave.seed);
                normalization += wave.amplitude;
            }

            noise /= normalization;
            noiseMap[zIndex, xIndex] = noise;
        }

        return noiseMap;
    }

    public float[,] GenerateUniformNoiseMap(int mapDepth, int mapWidth, float centerVertexZ, float maxDistanceZ,
        float offsetZ)
    {
        var noiseMap = new float[mapDepth, mapWidth];

        for (var zIndex = 0; zIndex < mapDepth; zIndex++)
        {
            var sampleZ = zIndex + offsetZ;
            var noise = Mathf.Abs(sampleZ - centerVertexZ) / maxDistanceZ;

            for (var xIndex = 0; xIndex < mapWidth; xIndex++) noiseMap[mapDepth - zIndex - 1, xIndex] = noise;
        }

        return noiseMap;
    }
}

[Serializable]
public class Wave
{
    public float seed;
    public float frequency;
    public float amplitude;
}