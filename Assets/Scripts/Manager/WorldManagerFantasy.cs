using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldManagerFantasy : MonoBehaviour
{
    public GameObject PlayerObject;
    public GameObject FirstZone;
    public GameObject SecondZone;
    public Transform TargetSpawnPoint1;
    public Transform TargetSpawnPoint2;

    void Start()
    {
        if (DrewHealth.DrewDead && !NoahHealth.NoahDead)
        {
            PlayerObject.transform.position = TargetSpawnPoint1.transform.position;
            FirstZone.SetActive(false);
        }
    }
}
