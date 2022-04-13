// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#if (!UNITY_IOS && !UNITY_ANDROID && !UNITY_WSA_10_0) || UNITY_EDITOR
using System;

namespace Microsoft.AppCenter.Unity.Analytics
{
#if UNITY_IOS
    using RawType = System.IntPtr;
#elif UNITY_ANDROID
    using RawType = UnityEngine.AndroidJavaObject;
#else
    using RawType = Object;
#endif

    public class PropertyConfiguratorInternal
    {
        public static void SetAppName(object propertyConfigurator, string appName)
        {
        }

        public static void SetUserId(object propertyConfigurator, string userId)
        {
        }

        public static void SetAppVersion(object propertyConfigurator, string appVersion)
        {
        }

        public static void SetAppLocale(object propertyConfigurator, string appLocale)
        {
        }

        public static void CollectDeviceId(object propertyConfigurator)
        {
        }

        public static void SetEventProperty(object propertyConfigurator, string key, string value)
        {
        }

        public static void SetEventProperty(object propertyConfigurator, string key, DateTime value)
        {
        }

        public static void SetEventProperty(object propertyConfigurator, string key, long value)
        {
        }

        public static void SetEventProperty(object propertyConfigurator, string key, double value)
        {
        }

        public static void SetEventProperty(object propertyConfigurator, string key, bool value)
        {
        }

        public static void RemoveEventProperty(object propertyConfigurator, string key)
        {
        }
    }
}
#endif