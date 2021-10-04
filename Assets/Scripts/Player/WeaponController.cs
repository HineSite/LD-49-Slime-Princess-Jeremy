using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponController : MonoBehaviour
{
    public float speed = 5f;
    public Transform firePoint;
    public GameObject bulletPrefab;

    public float GuitarCooldown = 0f;
   

    public AudioSource HeroWeapon;
    public AudioClip[] WeaponSound;

    public float BulletForce;


    private void Awake()
    {
        HeroWeapon = GetComponent<AudioSource>();
    }

    void Update()
    {
        if (!(PlayerHealth.Life < 1))
        {
            Vector2 dir = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
            float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
            Quaternion rotation = Quaternion.AngleAxis(angle - 90, Vector3.forward);
            transform.rotation = rotation;

            if(GuitarCooldown >=0)
            {
                GuitarCooldown = GuitarCooldown - Time.deltaTime;
            }

            if (Input.GetButton("Fire1"))
            {

                Shoot();
            }
        }

        void Shoot()
        {
            

            if (GuitarCooldown <= 0)
            {
                HeroWeapon.clip = WeaponSound[Random.Range(0, WeaponSound.Length)];
                HeroWeapon.Play();
                GameObject bullet = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation);
                Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
                rb.AddForce(firePoint.up * BulletForce, ForceMode2D.Impulse);
                GuitarCooldown = 2.5f;
            }
        }

       
    }
}
