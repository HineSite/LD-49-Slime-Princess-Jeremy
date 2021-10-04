using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public float MovementSpeed;
    public Rigidbody2D PlayerRB;

    private bool IsFlipped;
    private SpriteRenderer PlayerSpriteRenderer;

    private Vector2 MovementDirection;

    private void Awake()
    {
        PlayerSpriteRenderer = GetComponent<SpriteRenderer>();
    }

    void Update()
    {
        ProcessInputs();

        if (PlayerHealth.Life < 1)
        {
            MovementSpeed = 0;
            PlayerSpriteRenderer.flipY = true;
            PlayerSpriteRenderer.color = new Color(1f, 0f, 0f, 1f);
        }
    }

    private void FixedUpdate()
    {
        Movement();
    }

    void ProcessInputs()
    {
        float moveX = Input.GetAxisRaw("Horizontal");
        float moveY = Input.GetAxisRaw("Vertical");

        MovementDirection = new Vector2(moveX, moveY).normalized;

        if (Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.LeftArrow))
        {
            if (!(PlayerHealth.Life < 1))
            {
                PlayerSpriteRenderer.flipX = true;
            }
        }
        else if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.RightArrow))
        {
            if (!(PlayerHealth.Life < 1))
            {
                PlayerSpriteRenderer.flipX = false;
            }
        }
    }

    void Movement()
    {
        PlayerRB.velocity = new Vector2(MovementDirection.x * MovementSpeed, MovementDirection.y * MovementSpeed);
    }
}
