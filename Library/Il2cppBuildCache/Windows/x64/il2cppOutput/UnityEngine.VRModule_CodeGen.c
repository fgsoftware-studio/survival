#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
extern void XRSettings_get_loadedDeviceName_m1E091DB259635ACAE9C3B77980CDB00AC06B6D4C (void);
// 0x00000002 System.Void UnityEngine.XR.XRDevice::DisableAutoXRCameraTracking(UnityEngine.Camera,System.Boolean)
extern void XRDevice_DisableAutoXRCameraTracking_mC203FE6788C85285EDD5822689A4B10EA720D268 (void);
// 0x00000003 System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
extern void XRDevice_InvokeDeviceLoaded_m3BDF6825A2A56E4923D4E6593C7BA2949B6A3581 (void);
// 0x00000004 System.Void UnityEngine.XR.XRDevice::.cctor()
extern void XRDevice__cctor_mC83C1293819B81E68EC72D01A5CC107DFE29B98C (void);
// 0x00000005 System.Boolean UnityEngine.XR.XRStats::TryGetGPUTimeLastFrame(System.Single&)
extern void XRStats_TryGetGPUTimeLastFrame_m50BA43C5C59F9B6BC1C83E99C9546BE129525515 (void);
// 0x00000006 System.Boolean UnityEngine.XR.XRStats::TryGetDroppedFrameCount(System.Int32&)
extern void XRStats_TryGetDroppedFrameCount_mC0EC545CAC933340A9FF4F72CC0A23C10DBC5086 (void);
// 0x00000007 System.Boolean UnityEngine.XR.XRStats::TryGetFramePresentCount(System.Int32&)
extern void XRStats_TryGetFramePresentCount_mE716781D33305CC92776727F30351E8CE8DD1442 (void);
static Il2CppMethodPointer s_methodPointers[7] = 
{
	XRSettings_get_loadedDeviceName_m1E091DB259635ACAE9C3B77980CDB00AC06B6D4C,
	XRDevice_DisableAutoXRCameraTracking_mC203FE6788C85285EDD5822689A4B10EA720D268,
	XRDevice_InvokeDeviceLoaded_m3BDF6825A2A56E4923D4E6593C7BA2949B6A3581,
	XRDevice__cctor_mC83C1293819B81E68EC72D01A5CC107DFE29B98C,
	XRStats_TryGetGPUTimeLastFrame_m50BA43C5C59F9B6BC1C83E99C9546BE129525515,
	XRStats_TryGetDroppedFrameCount_mC0EC545CAC933340A9FF4F72CC0A23C10DBC5086,
	XRStats_TryGetFramePresentCount_mE716781D33305CC92776727F30351E8CE8DD1442,
};
static const int32_t s_InvokerIndices[7] = 
{
	5334,
	4791,
	5244,
	5363,
	4889,
	4889,
	4889,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_VRModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_VRModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_VRModule_CodeGenModule = 
{
	"UnityEngine.VRModule.dll",
	7,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_VRModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
