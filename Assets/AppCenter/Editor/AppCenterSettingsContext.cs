// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine;

public class AppCenterSettingsContext : ScriptableObject
{
    private static string appCenterPath;
    private static readonly string SettingsPath = AppCenterPath + "/AppCenterSettings.asset";
    private static readonly string AdvancedSettingsPath = AppCenterPath + "/AppCenterSettingsAdvanced.asset";

    public static string AppCenterPath
    {
        get
        {
            if (string.IsNullOrEmpty(appCenterPath)) appCenterPath = FindSubfolderPath("Assets", "AppCenter");
            return appCenterPath;
        }
    }

    public static AppCenterSettings SettingsInstance
    {
        get
        {
            // No need to lock because this can only be accessed from the main thread.
            var instance = AssetDatabase.LoadAssetAtPath<AppCenterSettings>(SettingsPath);
            if (instance == null)
            {
                instance = CreateInstance<AppCenterSettings>();
                AssetDatabase.CreateAsset(instance, SettingsPath);
                AssetDatabase.SaveAssets();
            }

            return instance;
        }
    }

    public static AppCenterSettingsAdvanced SettingsInstanceAdvanced =>
        // No need to lock because this can only be accessed from the main thread.
        AssetDatabase.LoadAssetAtPath<AppCenterSettingsAdvanced>(AdvancedSettingsPath);

    private static string FindSubfolderPath(string parentFolder, string searchFolder)
    {
        var folders = AssetDatabase.GetSubFolders(parentFolder);
        var resultFolder = folders.FirstOrDefault(folder => new DirectoryInfo(folder).Name == searchFolder);
        if (string.IsNullOrEmpty(resultFolder) && folders.Length > 0)
        {
            string temp;
            for (var i = 0; i < folders.Length; i++)
            {
                temp = FindSubfolderPath(folders[i], searchFolder);
                if (!string.IsNullOrEmpty(temp)) return temp;
            }
        }

        return resultFolder;
    }

    public static AppCenterSettingsAdvanced CreateSettingsInstanceAdvanced()
    {
        var instance = AssetDatabase.LoadAssetAtPath<AppCenterSettingsAdvanced>(AdvancedSettingsPath);
        if (instance == null)
        {
            instance = CreateInstance<AppCenterSettingsAdvanced>();
            AssetDatabase.CreateAsset(instance, AdvancedSettingsPath);
            AssetDatabase.SaveAssets();
        }

        return instance;
    }

    public static void DeleteSettingsInstanceAdvanced()
    {
        AssetDatabase.DeleteAsset(AdvancedSettingsPath);
    }
}