// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#if (!UNITY_IOS && !UNITY_ANDROID && !UNITY_WSA_10_0) || UNITY_EDITOR
using System;
using System.Collections.Generic;

namespace Microsoft.AppCenter.Unity.Analytics.Internal
{
#if UNITY_IOS || UNITY_ANDROID
    using RawType = System.IntPtr;
#else
    using RawType = Type;
#endif

#if UNITY_IOS
    using TransmissionTargetType = System.IntPtr;
#elif UNITY_ANDROID
    using TransmissionTargetType = UnityEngine.AndroidJavaObject;
#else
    using TransmissionTargetType = Object;
#endif

    internal class AnalyticsInternal
    {
        public static void PrepareEventHandlers()
        {
        }

        public static void AddNativeType(List<RawType> nativeTypes)
        {
        }

        public static void TrackEvent(string eventName)
        {
        }

        public static void TrackEvent(string eventName, int flags)
        {
        }

        public static void TrackEventWithProperties(string eventName, IDictionary<string, string> properties)
        {
        }

        public static void TrackEventWithProperties(string eventName, EventProperties properties)
        {
        }

        public static void TrackEventWithProperties(string eventName, IDictionary<string, string> properties, int flags)
        {
        }

        public static void TrackEventWithProperties(string eventName, EventProperties properties, int flags)
        {
        }

        public static AppCenterTask SetEnabledAsync(bool enabled)
        {
            return AppCenterTask.FromCompleted();
        }

        public static AppCenterTask<bool> IsEnabledAsync()
        {
            return AppCenterTask<bool>.FromCompleted(false);
        }

        public static object GetTransmissionTarget(string transmissionTargetToken, out bool success)
        {
            success = false;
            return default;
        }

        public static void Pause()
        {
        }

        public static void Resume()
        {
        }

        public static void EnableManualSessionTracker()
        {
        }

        public static void StartSession()
        {
        }
    }
}
#endif