using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine;

public class PlayerHealth : MonoBehaviour
{

    public GameObject[] HitPoints;
    public static int Life;

    public Image OverlayImage;
    public Color hurtColor = new Color(1f, 0f, 0f, 1f);
    public Color healColor = new Color(0f, 0f, 1f, 1f);
    public float flashSpeed = 10f;

    public float RespawnTime = 5f;

    public Collider2D PlayerBoxCollider;

    public int MaxLife = 3;
    public int MinLife = 0;

    bool damaged;
    bool healed;
    public bool dead;

    public AudioClip DeathClip;
    public AudioSource PlayerAudio;

    void Awake()
    {
        Life = MaxLife;
        RespawnTime = 5f;
        PlayerAudio = GetComponent<AudioSource>();
        PlayerBoxCollider = GetComponent<BoxCollider2D>();
        
    }

    void Update()
    {


        if (Life < 1)
        {
            HitPoints[0].SetActive(false);
            dead = true;
        }
        else
        {
            HitPoints[0].SetActive(true);
        }

        if (Life < 2)
        {
            HitPoints[1].SetActive(false);
        }
        else
        {
            HitPoints[0].SetActive(true);
            HitPoints[1].SetActive(true);
        }

        if (Life < 3)
        {
            HitPoints[2].SetActive(false);
        }
        else
        {
            HitPoints[0].SetActive(true);
            HitPoints[1].SetActive(true);
            HitPoints[2].SetActive(true);
        }

        if (damaged)
        {
            OverlayImage.color = hurtColor;
        }

        else
        {
            OverlayImage.color = Color.Lerp(OverlayImage.color, Color.clear, flashSpeed * Time.deltaTime);
        }
        damaged = false;

        if (healed)
        {
            OverlayImage.color = healColor;
        }

        else
        {
            OverlayImage.color = Color.Lerp(OverlayImage.color, Color.clear, flashSpeed * Time.deltaTime);
        }

        if (dead)
        {
            if (RespawnTime >= 0)
            {
                RespawnTime = RespawnTime - Time.deltaTime;

            }
            else if (RespawnTime <= 0)
            {
                ReloadLevel();
            }
        }

        healed = false;
    }

    public void TakeDamage()
    {

        Life = Life - 1;
        if (Life < MinLife)
        {
            Life = MinLife;
        }
        damaged = true;
        if (Life < 1)
        {
            Death();

        }
        

    }

    public void Heal()
    {
        Life = Life + 1;
        if (Life > MaxLife)
        {
            Life = MaxLife;
        }
        healed = true;

    }

    private void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == "Hazard") {
            TakeDamage();
            Debug.Log("Collision Detected");
        }

        if (col.gameObject.tag == "HealthItem")
        {
            if (Life < MaxLife)
            {
                Heal();
                Debug.Log("Collision Detected");
                Destroy(col.gameObject);
            }

        }
    }
    
    public void Death()
    {
        PlayerAudio.clip = DeathClip;
        PlayerAudio.Play();
        PlayerBoxCollider.enabled = false;
    }

    public void ReloadLevel()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

}
