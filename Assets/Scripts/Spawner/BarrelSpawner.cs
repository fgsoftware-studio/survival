using System;
using System.Collections;
using UnityEngine;

public class BarrelSpawner : MonoBehaviour
{
    private GameObject[] barrels;
    private Array[] location;

    private void Start()
    {
        RespawnBarrels();
    }

    private void RespawnBarrels()
    {
        barrels = GameObject.FindGameObjectsWithTag("barrel");
        var barrelsNum = barrels.Length;
        
        for(var i = 0 ; i < barrels.Length ; i ++)
        {
            Destroy(barrels[i], 5.0f);
            Debug.Log(i);
        }
    }
}