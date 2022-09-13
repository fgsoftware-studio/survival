using UnityEngine;

public class LevelGeneration : MonoBehaviour
{
    [SerializeField] private int mapWidthInTiles, mapDepthInTiles;

    [SerializeField] private GameObject tilePrefab;

    [SerializeField] private float centerVertexZ, maxDistanceZ;

    [SerializeField] private TreeGeneration treeGeneration;

    [SerializeField] private RiverGeneration riverGeneration;

    private void Start()
    {
        GenerateMap();
    }

    private void GenerateMap()
    {
        var tileSize = tilePrefab.GetComponent<MeshRenderer>().bounds.size;
        var tileWidth = (int)tileSize.x;
        var tileDepth = (int)tileSize.z;
        var tileMeshVertices = tilePrefab.GetComponent<MeshFilter>().sharedMesh.vertices;
        var tileDepthInVertices = (int)Mathf.Sqrt(tileMeshVertices.Length);
        var tileWidthInVertices = tileDepthInVertices;
        var distanceBetweenVertices = tileDepth / (float)tileDepthInVertices;
        var levelData = new LevelData(tileDepthInVertices, tileWidthInVertices, mapDepthInTiles,
            mapWidthInTiles);

        for (var xTileIndex = 0; xTileIndex < mapWidthInTiles; xTileIndex++)
        {
            for (var zTileIndex = 0; zTileIndex < mapDepthInTiles; zTileIndex++)
            {
                var tilePosition = new Vector3(gameObject.transform.position.x + xTileIndex * tileWidth,
                    gameObject.transform.position.y,
                    gameObject.transform.position.z + zTileIndex * tileDepth);
                var tile = Instantiate(tilePrefab, tilePosition, Quaternion.identity);
                var tileData = tile.GetComponent<TileGeneration>().GenerateTile(centerVertexZ, maxDistanceZ);

                levelData.AddTileData(tileData, zTileIndex, xTileIndex);
            }

            treeGeneration.GenerateTrees(mapDepthInTiles * tileDepthInVertices,
                mapWidthInTiles * tileWidthInVertices, distanceBetweenVertices, levelData);

            riverGeneration.GenerateRivers(mapDepthInTiles * tileDepthInVertices,
                mapWidthInTiles * tileWidthInVertices, levelData);
        }
    }
}

public class LevelData
{
    private readonly int tileDepthInVertices;
    private readonly int tileWidthInVertices;

    public TileData[,] tilesData;

    public LevelData(int tileDepthInVertices, int tileWidthInVertices, int levelDepthInTiles, int levelWidthInTiles)
    {
        tilesData = new TileData[tileDepthInVertices * levelDepthInTiles, tileWidthInVertices * levelWidthInTiles];

        this.tileDepthInVertices = tileDepthInVertices;
        this.tileWidthInVertices = tileWidthInVertices;
    }

    public void AddTileData(TileData tileData, int tileZIndex, int tileXIndex)
    {
        tilesData[tileZIndex, tileXIndex] = tileData;
    }

    public TileCoordinate ConvertToTileCoordinate(int zIndex, int xIndex)
    {
        var tileZIndex = (int)Mathf.Floor(zIndex / (float)tileDepthInVertices);
        var tileXIndex = (int)Mathf.Floor(xIndex / (float)tileWidthInVertices);
        var coordinateZIndex = tileDepthInVertices - zIndex % tileDepthInVertices - 1;
        var coordinateXIndex = tileWidthInVertices - xIndex % tileDepthInVertices - 1;
        var tileCoordinate = new TileCoordinate(tileZIndex, tileXIndex, coordinateZIndex, coordinateXIndex);

        return tileCoordinate;
    }
}

public class TileCoordinate
{
    public int coordinateXIndex;
    public int coordinateZIndex;
    public int tileXIndex;
    public int tileZIndex;

    public TileCoordinate(int tileZIndex, int tileXIndex, int coordinateZIndex, int coordinateXIndex)
    {
        this.tileZIndex = tileZIndex;
        this.tileXIndex = tileXIndex;
        this.coordinateZIndex = coordinateZIndex;
        this.coordinateXIndex = coordinateXIndex;
    }
}