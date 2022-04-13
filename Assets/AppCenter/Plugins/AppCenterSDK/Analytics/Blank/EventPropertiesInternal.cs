// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#if (!UNITY_IOS && !UNITY_ANDROID && !UNITY_WSA_10_0) || UNITY_EDITOR
using System;

namespace Microsoft.AppCenter.Unity.Analytics.Internal
{
#if UNITY_IOS
    using RawType = System.IntPtr;
#elif UNITY_ANDROID
    using RawType = UnityEngine.AndroidJavaObject;
#else
    using RawType = Object;
#endif

    internal class EventPropertiesInternal
    {
        public static object Create()
        {
            return default;
        }

        public static void SetString(object properties, string key, string val)
        {
        }

        public static void SetNumber(object properties, string key, object val)
        {
        }

        public static void SetBool(object properties, string key, bool val)
        {
        }

        public static void SetDate(object properties, string key, DateTime val)
        {
        }
    }
}
#endif