using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class CreditsManager : MonoBehaviour
{
    public float SceneCountdown = 55f;
    void Update()
    {
        if(SceneCountdown >= 0)
        {
            SceneCountdown = SceneCountdown - Time.deltaTime;
        }
        if(SceneCountdown <= 0)
        {
            SceneManager.LoadScene("MenuScreen");
        }
    }
}
