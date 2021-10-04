using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyProjectile : MonoBehaviour {

	public float moveSpeed;

	Rigidbody2D rb;

	PlayerMovement target;
	Vector2 moveDirection;

	
	void Start () {
		rb = GetComponent<Rigidbody2D> ();
		target = GameObject.FindObjectOfType<PlayerMovement>();
		moveDirection = (target.transform.position - transform.position).normalized * moveSpeed;
		rb.velocity = new Vector2 (moveDirection.x, moveDirection.y);
		Destroy (gameObject, 3f);
	}



	void OnTriggerEnter2D (Collider2D col)
	{
		if (col.gameObject.name.Equals ("Player")) {
			Debug.Log ("Hit!");
		}
	}

}
