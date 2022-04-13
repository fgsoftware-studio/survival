// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

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

    public class PropertyConfigurator
    {
        private readonly object _rawObject;

        internal object GetRawObject()
        {
            return _rawObject;
        }

        public PropertyConfigurator(object rawObject)
        {
            _rawObject = rawObject;
        }

        public void SetAppName(string appName)
        {
            PropertyConfiguratorInternal.SetAppName(_rawObject, appName);
        }

        public void SetAppVersion(string appVersion)
        {
            PropertyConfiguratorInternal.SetAppVersion(_rawObject, appVersion);
        }

        public void SetAppLocale(string appLocale)
        {
            PropertyConfiguratorInternal.SetAppLocale(_rawObject, appLocale);
        }

        public void SetEventProperty(string key, string value)
        {
            PropertyConfiguratorInternal.SetEventProperty(_rawObject, key, value);
        }

        public void SetEventProperty(string key, DateTime value)
        {
            PropertyConfiguratorInternal.SetEventProperty(_rawObject, key, value);
        }

        public void SetEventProperty(string key, long value)
        {
            PropertyConfiguratorInternal.SetEventProperty(_rawObject, key, value);
        }

        public void SetEventProperty(string key, double value)
        {
            PropertyConfiguratorInternal.SetEventProperty(_rawObject, key, value);
        }

        public void SetEventProperty(string key, bool value)
        {
            PropertyConfiguratorInternal.SetEventProperty(_rawObject, key, value);
        }

        public void SetUserId(string userId)
        {
            PropertyConfiguratorInternal.SetUserId(_rawObject, userId);
        }

        public void RemoveEventProperty(string key)
        {
            PropertyConfiguratorInternal.RemoveEventProperty(_rawObject, key);
        }

        public void CollectDeviceId()
        {
            PropertyConfiguratorInternal.CollectDeviceId(_rawObject);
        }
    }
}