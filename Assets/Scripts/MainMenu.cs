using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public TMP_Text txtVersion;

    private void Awake()
    {
        txtVersion.text = Application.version;
    }

    public void Play()
    {
        SceneManager.LoadScene("Game");
    }

    public void Settings()
    {
    }

    public void Quit()
    {
        Application.Quit();
    }
}