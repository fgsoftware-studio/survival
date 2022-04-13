// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

namespace Microsoft.AppCenter.Unity
{
    public class Device
    {
        /// <summary>
        ///     Name of the SDK.
        /// </summary>
        public string SdkName { get; }

        /// <summary>
        ///     Version of the SDK.
        /// </summary>
        public string SdkVersion { get; }

        /// <summary>
        ///     Device model (example: iPad2,3).
        /// </summary>
        public string Model { get; }

        /// <summary>
        ///     Device manufacturer (example: HTC).
        /// </summary>
        public string OemName { get; }

        /// <summary>
        ///     OS name (example: iOS).
        /// </summary>
        public string OsName { get; }

        /// <summary>
        ///     OS version (example: 9.3.0).
        /// </summary>
        public string OsVersion { get; }

        /// <summary>
        ///     OS build code (example: LMY47X).
        /// </summary>
        public string OsBuild { get; }

        /// <summary>
        ///     API level when applicable like in Android (example: 15).
        /// </summary>
        public int OsApiLevel { get; }

        /// <summary>
        ///     Language code (example: en_US).
        /// </summary>
        public string Locale { get; }

        /// <summary>
        ///     The offset in minutes from UTC for the device time zone, including daylight savings time.
        /// </summary>
        public int TimeZoneOffset { get; }

        /// <summary>
        ///     Screen size of the device in pixels (example: 640x480).
        /// </summary>
        public string ScreenSize { get; }

        /// <summary>
        ///     Application version name.
        /// </summary>
        public string AppVersion { get; }

        /// <summary>
        ///     Carrier name (for mobile devices).
        /// </summary>
        public string CarrierName { get; }

        /// <summary>
        ///     Carrier country code (for mobile devices).
        /// </summary>
        public string CarrierCountry { get; }

        /// <summary>
        ///     The app's build number, e.g. 42.
        /// </summary>
        public string AppBuild { get; }

        /// <summary>
        ///     The bundle identifier, package identifier, or namespace, depending on what the individual platforms use, .e.g
        ///     com.microsoft.example.
        /// </summary>
        public string AppNamespace { get; }

        public Device(string sdkName, string sdkVersion, string model, string oemName, string osName, string osVersion,
            string osBuild,
            int osApiLevel, string locale, int timeZoneOffset, string screenSize, string appVersion, string carrierName,
            string carrierCountry, string appBuild, string appNamespace)
        {
            SdkName = sdkName;
            SdkVersion = sdkVersion;
            Model = model;
            OemName = oemName;
            OsName = osName;
            OsVersion = osVersion;
            OsBuild = osBuild;
            OsApiLevel = osApiLevel;
            Locale = locale;
            TimeZoneOffset = timeZoneOffset;
            ScreenSize = screenSize;
            AppVersion = appVersion;
            CarrierName = carrierName;
            CarrierCountry = carrierCountry;
            AppBuild = appBuild;
            AppNamespace = appNamespace;
        }
    }
}