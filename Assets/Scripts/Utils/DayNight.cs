using System;
using UnityEngine;

public class DayNight : MonoBehaviour
{
    [HideInInspector]
    public GameObject sun;
    [HideInInspector]
    public Light sunLight;
 
    [Range(0, 24)]
    public float timeOfDay = 12;
 
    public float secondsPerMinute = 60;
    [HideInInspector]
    public float secondsPerHour;
    [HideInInspector]
    public float secondsPerDay;
 
    public float timeMultiplier = 1;

    private void Start()
    {
        
        sun = gameObject;
        sunLight = gameObject.GetComponent<Light>();
    }

    private void Update()
    {
        //30,-30,0 = sunrise
        //90,-30,0 = High noon
        //180,-30,0 = sunset
        //-90,-30,0 = Midnight
        
        sun.transform.localEulerAngles = new Vector3(Time.time * timeMultiplier, -30,0);
    }
}