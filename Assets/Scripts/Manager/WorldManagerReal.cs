using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldManagerReal : MonoBehaviour
{
    public GameObject PlayerObject;
    public GameObject FirstZone;
    public GameObject SecondZone;
    public Transform TargetSpawnPoint1;
    public Transform TargetSpawnPoint2;

    void Start()
    {
        if (TrueDrewHealth.RealDrewDead && !TrueNoahHealth.RealNoahDead)
        {
            PlayerObject.transform.position = TargetSpawnPoint1.transform.position;
            FirstZone.SetActive(false);
        }

        if (TrueDrewHealth.RealDrewDead && TrueNoahHealth.RealNoahDead)
        {
            PlayerObject.transform.position = TargetSpawnPoint2.transform.position;
            SecondZone.SetActive(false);
        }
    }
}
