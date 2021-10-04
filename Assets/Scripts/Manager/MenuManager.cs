using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour {

    public GameObject MainMenu;
    public GameObject InstructionsPanel;

    private void Awake()
    {
        MainMenu.SetActive(true);
        InstructionsPanel.SetActive(false);
    }

    public void StartGame()
    {
        SceneManager.LoadScene("FantasyOverworld");
    }

    public void TitleScreen()
    {
        MainMenu.SetActive(true);
        InstructionsPanel.SetActive(false);
    }

    public void Instructions()
    {
        MainMenu.SetActive(false);
        InstructionsPanel.SetActive(true);
    }
}
