// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#if (!UNITY_IOS && !UNITY_ANDROID && !UNITY_WSA_10_0) || UNITY_EDITOR
using System;
using System.Collections.Generic;

namespace Microsoft.AppCenter.Unity.Analytics
{
#if UNITY_IOS
    using RawType = System.IntPtr;
#elif UNITY_ANDROID
    using RawType = UnityEngine.AndroidJavaObject;
#else
    using RawType = Object;
#endif

    public class TransmissionTargetInternal
    {
        public static void TrackEvent(object transmissionTarget, string eventName)
        {
        }

        public static void TrackEvent(object transmissionTarget, string eventName, int flags)
        {
        }

        public static void TrackEventWithProperties(object transmissionTarget, string eventName,
            IDictionary<string, string> properties)
        {
        }

        public static void TrackEventWithProperties(object transmissionTarget, string eventName,
            EventProperties properties)
        {
        }

        public static void TrackEventWithProperties(object transmissionTarget, string eventName,
            IDictionary<string, string> properties, int flags)
        {
        }

        public static void TrackEventWithProperties(object transmissionTarget, string eventName,
            EventProperties properties, int flags)
        {
        }

        public static AppCenterTask SetEnabledAsync(object transmissionTarget, bool enabled)
        {
            return AppCenterTask.FromCompleted();
        }

        public static AppCenterTask<bool> IsEnabledAsync(object transmissionTarget)
        {
            return AppCenterTask<bool>.FromCompleted(false);
        }

        public static object GetTransmissionTarget(object transmissionTargetParent, string transmissionTargetToken,
            out bool success)
        {
            success = false;
            return default;
        }

        public static object GetPropertyConfigurator(object transmissionTargetParent)
        {
            return default;
        }

        public static void Pause(object transmissionTargetParent)
        {
        }

        public static void Resume(object transmissionTargetParent)
        {
        }
    }
}
#endif