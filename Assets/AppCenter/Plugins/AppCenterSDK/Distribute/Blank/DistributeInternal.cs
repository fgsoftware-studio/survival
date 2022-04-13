// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

using System;
using System.Collections.Generic;

#if (!UNITY_IOS && !UNITY_ANDROID && !UNITY_WSA_10_0) || UNITY_EDITOR

namespace Microsoft.AppCenter.Unity.Distribute.Internal
{
#if UNITY_IOS || UNITY_ANDROID
    using RawType = System.IntPtr;
#else
    using RawType = Type;
#endif

    internal class DistributeInternal
    {
        public static void PrepareEventHandlers()
        {
        }

        public static void AddNativeType(List<RawType> nativeTypes)
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

        public static void SetInstallUrl(string installUrl)
        {
        }

        public static void SetApiUrl(string apiUrl)
        {
        }

        public static void NotifyUpdateAction(int updateAction)
        {
        }

        public static void StartDistribute()
        {
        }

        public static void CheckForUpdate()
        {
        }
    }
}
#endif