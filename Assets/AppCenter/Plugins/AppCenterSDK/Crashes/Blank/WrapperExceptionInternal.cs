// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#if (!UNITY_IOS && !UNITY_ANDROID && !UNITY_WSA_10_0) || UNITY_EDITOR
using System;

namespace Microsoft.AppCenter.Unity.Crashes
{
#if UNITY_IOS
    using RawType = System.IntPtr;
#elif UNITY_ANDROID
    using RawType = UnityEngine.AndroidJavaObject;
#else
    using RawType = Object;
#endif

    public class WrapperExceptionInternal
    {
        public static object Create()
        {
            return default;
        }

        public static void SetType(object exception, string type)
        {
        }

        public static void SetMessage(object exception, string message)
        {
        }

        public static void SetStacktrace(object exception, string stacktrace)
        {
        }

        public static void SetInnerException(object exception, object innerException)
        {
        }

        public static void SetWrapperSdkName(object exception, string sdkName)
        {
        }
    }
}
#endif