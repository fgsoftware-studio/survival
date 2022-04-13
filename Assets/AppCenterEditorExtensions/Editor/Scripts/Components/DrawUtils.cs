using System;
using UnityEngine;

public class DrawUtils
{
    private static Color32[] rotateSquare(Color32[] arr, double phi, Texture2D originTexture)
    {
        int x;
        int y;
        int i;
        int j;
        var sn = Math.Sin(phi);
        var cs = Math.Cos(phi);
        var arr2 = originTexture.GetPixels32();
        var W = originTexture.width;
        var H = originTexture.height;
        var xc = W / 2;
        var yc = H / 2;
        for (j = 0; j < H; j++)
        for (i = 0; i < W; i++)
        {
            arr2[j * W + i] = new Color32(0, 0, 0, 0);
            x = (int) (cs * (i - xc) + sn * (j - yc) + xc);
            y = (int) (-sn * (i - xc) + cs * (j - yc) + yc);
            if (x > -1 && x < W && y > -1 && y < H) arr2[j * W + i] = arr[y * W + x];
        }

        return arr2;
    }

    public static Texture2D RotateImage(Texture2D originTexture, int angle)
    {
        Texture2D result;
        result = new Texture2D(originTexture.width, originTexture.height);
        var pix1 = result.GetPixels32();
        var pix2 = originTexture.GetPixels32();
        var W = originTexture.width;
        var H = originTexture.height;
        var x = 0;
        var y = 0;
        var pix3 = rotateSquare(pix2, Math.PI / 180 * angle, originTexture);
        for (var j = 0; j < H; j++)
        for (var i = 0; i < W; i++)
            pix1[result.width / 2 - W / 2 + x + i + result.width * (result.height / 2 - H / 2 + j + y)] =
                pix3[i + j * W];
        result.SetPixels32(pix1);
        result.Apply();
        return result;
    }
}