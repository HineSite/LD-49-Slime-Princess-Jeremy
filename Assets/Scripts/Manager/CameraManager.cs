using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour
{
    void Update()
    {
        if (DrewHealth.DrewDead)
        {
            this.GetComponent<GlitchEffect>().enabled = true;
        }

        if(DrewHealth.DrewDead && NoahHealth.NoahDead)
        {
            this.GetComponent<GlitchEffect>().enabled = false;
            this.GetComponent<GlitchEffectHeavy>().enabled = true;
        }

    }
}
