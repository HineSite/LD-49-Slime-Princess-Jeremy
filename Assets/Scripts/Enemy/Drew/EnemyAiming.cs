using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyAiming : MonoBehaviour
{
	[SerializeField]
	public GameObject arrow;

	public float fireRate;
	public float nextFire;

	public AudioSource DrewAudioSource;
	public AudioClip BowFire;

    // Use this for initialization

    private void Awake()
    {
		DrewAudioSource = GetComponent<AudioSource>();
    }

    void Start()
	{
		nextFire = Time.time;
	}

	// Update is called once per frame
	void Update()
	{
		CheckIfTimeToFire();
	}

	void CheckIfTimeToFire()
	{
		if (!EnemyHealth.Dead)
		{
			if (Time.time > nextFire)
			{
				if (!(PlayerHealth.Life < 1))
				{
					DrewAudioSource.clip = BowFire;
					DrewAudioSource.Play();

					Instantiate(arrow, transform.position, Quaternion.identity);
					nextFire = Time.time + fireRate;
				}
			}
		}

	}
}
