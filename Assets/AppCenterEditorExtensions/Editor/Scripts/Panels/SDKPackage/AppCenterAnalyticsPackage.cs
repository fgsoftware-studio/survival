namespace AppCenterEditor
{
    public class AppCenterAnalyticsPackage : AppCenterSDKPackage
    {
        private const string AnalyticsLatestDownload =
            "https://mobilecentersdkdev.blob.core.windows.net/sdk/AppCenterAnalyticsLatest.unitypackage";

        private const string AnalyticsDownloadFormat =
            "https://github.com/Microsoft/AppCenter-SDK-Unity/releases/download/{0}/AppCenterAnalytics-v{0}.unitypackage";

        public static AppCenterAnalyticsPackage Instance = new AppCenterAnalyticsPackage();

        public override string Name => "Analytics";

        protected override bool IsSupportedForWSA => true;

        public override string TypeName => "Microsoft.AppCenter.Unity.Analytics.Analytics";

        public override string VersionFieldName => "AnalyticsSDKVersion";

        public override string DownloadLatestUrl => AnalyticsLatestDownload;

        public override string DownloadUrlFormat => AnalyticsDownloadFormat;

        protected override bool IsSdkPackageSupported()
        {
            return true;
        }

        private AppCenterAnalyticsPackage()
        {
        }
    }
}