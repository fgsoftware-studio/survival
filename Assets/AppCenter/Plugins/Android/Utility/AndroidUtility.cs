// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

using UnityEngine;

namespace Assets.AppCenter.Plugins.Android.Utility
{
    internal class AndroidUtility
    {
        private static AndroidJavaObject _context;
        private const string PREFS_NAME = "AppCenterUserPrefs";

        public static AndroidJavaObject GetAndroidContext()
        {
            if (_context != null) return _context;
            var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            var activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
            _context = activity.Call<AndroidJavaObject>("getApplicationContext");
            return _context;
        }

        public static void SetPreferenceInt(string prefKey, int prefValue)
        {
            var context = GetAndroidContext();
            var sharedPreferences = context.Call<AndroidJavaObject>("getSharedPreferences", PREFS_NAME, 0);
            var editor = sharedPreferences.Call<AndroidJavaObject>("edit");
            editor = editor.Call<AndroidJavaObject>("putInt", prefKey, prefValue);
            editor.Call("apply");
        }

        public static void SetPreferenceString(string prefKey, string prefValue)
        {
            var context = GetAndroidContext();
            var sharedPreferences = context.Call<AndroidJavaObject>("getSharedPreferences", PREFS_NAME, 0);
            var editor = sharedPreferences.Call<AndroidJavaObject>("edit");
            editor = editor.Call<AndroidJavaObject>("putString", prefKey, prefValue);
            editor.Call("apply");
        }
    }
}