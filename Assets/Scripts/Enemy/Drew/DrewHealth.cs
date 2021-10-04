using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class DrewHealth : MonoBehaviour
{
    public float StartingHealth = 20;
    public float CurrentHealth;
    public Collider2D EnemyCollider;
    public AudioSource EnemyAudioSource;
    public AudioClip Deathsound;
    public static bool DrewDead;
    public float SceneCountdown = 4f;
    private SpriteRenderer EnemySpriteRenderer;

    private void Awake()
    {
        CurrentHealth = StartingHealth;
        EnemyCollider = GetComponent<BoxCollider2D>();
        EnemyAudioSource = GetComponent<AudioSource>();
        EnemySpriteRenderer = GetComponent<SpriteRenderer>();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (CurrentHealth <= 0)
        {
            DrewDead = true;
        }

        if (DrewDead)
        {
            EnemyCollider.enabled = false;
            EnemyAudioSource.clip = Deathsound;
            EnemyAudioSource.Play();
            Destroy(gameObject, 5f);

            EnemySpriteRenderer.color = new Color(1f, 0f, 0f, 1f);

        }

        if (collision.gameObject.tag == "Projectile")
        {
            CurrentHealth = CurrentHealth - Bullet.BulletDamage;
        }
    }


    private void Update()
    {
        if (DrewDead)
        {
            if (SceneCountdown >= 0)
            {
                SceneCountdown = SceneCountdown - Time.deltaTime;
            }

            else if (SceneCountdown <= 0)
            {
                SceneManager.LoadScene("FantasyOverworld");
            }


        }

    }
}
