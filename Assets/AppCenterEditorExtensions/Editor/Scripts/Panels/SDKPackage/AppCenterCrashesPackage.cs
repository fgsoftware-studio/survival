namespace AppCenterEditor
{
    public class AppCenterCrashesPackage : AppCenterSDKPackage
    {
        private const string CrashesLatestDownload =
            "https://mobilecentersdkdev.blob.core.windows.net/sdk/AppCenterCrashesLatest.unitypackage";

        private const string CrashesDownloadFormat =
            "https://github.com/Microsoft/AppCenter-SDK-Unity/releases/download/{0}/AppCenterCrashes-v{0}.unitypackage";

        public static AppCenterCrashesPackage Instance = new AppCenterCrashesPackage();

        public override string Name => "Crashes";

        protected override bool IsSupportedForWSA => false;

        public override string TypeName => "Microsoft.AppCenter.Unity.Crashes.Crashes";

        public override string VersionFieldName => "CrashesSDKVersion";

        public override string DownloadLatestUrl => CrashesLatestDownload;

        public override string DownloadUrlFormat => CrashesDownloadFormat;

        protected override bool IsSdkPackageSupported()
        {
            return true;
        }

        private AppCenterCrashesPackage()
        {
        }
    }
}