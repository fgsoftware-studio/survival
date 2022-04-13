namespace AppCenterEditor
{
    public class AppCenterDistributePackage : AppCenterSDKPackage
    {
        private const string DistributeLatestDownload =
            "https://mobilecentersdkdev.blob.core.windows.net/sdk/AppCenterDistributeLatest.unitypackage";

        private const string DistributeDownloadFormat =
            "https://github.com/Microsoft/AppCenter-SDK-Unity/releases/download/{0}/AppCenterDistribute-v{0}.unitypackage";

        public static AppCenterDistributePackage Instance = new AppCenterDistributePackage();

        public override string TypeName => "Microsoft.AppCenter.Unity.Distribute.Distribute";

        public override string VersionFieldName => "DistributeSDKVersion";

        public override string Name => "Distribute";

        protected override bool IsSupportedForWSA => false;

        public override string DownloadLatestUrl => DistributeLatestDownload;

        public override string DownloadUrlFormat => DistributeDownloadFormat;

        protected override bool IsSdkPackageSupported()
        {
            return true;
        }

        private AppCenterDistributePackage()
        {
        }
    }
}