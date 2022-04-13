// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

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

    public class WrapperException
    {
        private readonly object _rawObject;

        internal object GetRawObject()
        {
            return _rawObject;
        }

        public WrapperException()
        {
            _rawObject = WrapperExceptionInternal.Create();
        }

        public void SetType(string type)
        {
            WrapperExceptionInternal.SetType(_rawObject, type);
        }

        public void SetMessage(string message)
        {
            WrapperExceptionInternal.SetMessage(_rawObject, message);
        }

        public void SetStacktrace(string stacktrace)
        {
            WrapperExceptionInternal.SetStacktrace(_rawObject, stacktrace);
        }

        public void SetInnerException(object innerException)
        {
            WrapperExceptionInternal.SetInnerException(_rawObject, innerException);
        }

        public void SetWrapperSdkName(string sdkName)
        {
            WrapperExceptionInternal.SetWrapperSdkName(_rawObject, sdkName);
        }
    }
}