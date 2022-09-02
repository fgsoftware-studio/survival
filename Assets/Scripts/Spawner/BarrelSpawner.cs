using System.Collections;
using UnityEngine;

public class BarrelSpawner : MonoBehaviour
{
    [SerializeField] private GameObject barrel;
    public int lifetime;
    private Vector3 position;
    private Quaternion rotation;

    private void Start()
    {
        var obj = GameObject.Find("barrel");

        position = obj.transform.position;
        rotation = obj.transform.rotation;

        InvokeRepeating("Spawn", 0, 7);
    }

    private void Update()
    {
        //StartCoroutine(Spawn(lifetime));
    }

    private void Spawn()
    {
        var bar = Instantiate(barrel, position, rotation);
        Destroy(bar, 5);
    }

    private IEnumerator Spawn(int secs)
    {
        yield return new WaitForSeconds(secs);

        foreach (var b in GameObject.FindGameObjectsWithTag("barrel"))
        {
            Destroy(b);
            Debug.Log("barrel destroyed");
        }

        Instantiate(barrel, position, rotation);
        Debug.Log("barrel spawned");
    }
}