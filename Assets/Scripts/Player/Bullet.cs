using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public float BulletLifespan;
    public static float BulletDamage = 5;
    void Awake()
    {

        Destroy(gameObject, BulletLifespan);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Hazard")
        { 
            Destroy(gameObject);
        }
    }
}
