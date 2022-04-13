#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4;
// System.Collections.Generic.Queue`1<System.Exception>
struct Queue_1_t6B5803EB60D9BDC65B4C1C0B40A8079A2C9E1A36;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog[]
struct ErrorAttachmentLogU5BU5D_t337588F4FA5C13CD2527CD94F50A5C4F29DEE33B;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.AppCenter.Unity.Device
struct Device_t17F9C5021FC971A8C08C6F137E0FED8743532A48;
// Microsoft.AppCenter.Unity.Crashes.ErrorReport
struct ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17;
// Microsoft.AppCenter.Unity.Crashes.Models.Exception
struct Exception_tFF4FB79C2AD742E0D6C421E2AEE16254D796E0E9;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler
struct FailedToSendErrorReportHandler_t524C3E1F64ECE6048492C2A933A41ADCE30E0B87;
// Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler
struct GetErrorAttachmentsHandler_tC8EE6CE8D645BC994216BC0F8260C4268C355829;
// Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler
struct SendingErrorReportHandler_t8F52925F22134F9F065F098DCF4F2B5AC3F2CC0E;
// Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler
struct SentErrorReportHandler_tE73B9D263B0DC92C94B3674DAADFF04F7DE7985E;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Microsoft.AppCenter.Unity.Analytics.Analytics
struct Analytics_t26646A749934A1C783233953365A09BEB8A85402  : public RuntimeObject
{
public:

public:
};


// Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal
struct AnalyticsInternal_tCFCDC465F320737E0D13FA54061830A424A4C503  : public RuntimeObject
{
public:

public:
};


// Assets.AppCenter.Plugins.Android.Utility.AndroidUtility
struct AndroidUtility_tD4387EF16BC7C9E908A3F67A63198B8362708684  : public RuntimeObject
{
public:

public:
};

struct AndroidUtility_tD4387EF16BC7C9E908A3F67A63198B8362708684_StaticFields
{
public:
	// UnityEngine.AndroidJavaObject Assets.AppCenter.Plugins.Android.Utility.AndroidUtility::_context
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ____context_0;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(AndroidUtility_tD4387EF16BC7C9E908A3F67A63198B8362708684_StaticFields, ____context_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get__context_0() const { return ____context_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_0), (void*)value);
	}
};


// Microsoft.AppCenter.Unity.Internal.AppCenterInternal
struct AppCenterInternal_tFEFC031F4D010BF199CDC9B0096D74BCF453A21C  : public RuntimeObject
{
public:

public:
};


// Microsoft.AppCenter.Unity.Crashes.Crashes
struct Crashes_t41BEE5CC4288218A6C1E6B6BEEC8B643D000FD2F  : public RuntimeObject
{
public:

public:
};

struct Crashes_t41BEE5CC4288218A6C1E6B6BEEC8B643D000FD2F_StaticFields
{
public:
	// System.Boolean Microsoft.AppCenter.Unity.Crashes.Crashes::_reportUnhandledExceptions
	bool ____reportUnhandledExceptions_1;
	// System.Boolean Microsoft.AppCenter.Unity.Crashes.Crashes::_enableErrorAttachmentsCallbacks
	bool ____enableErrorAttachmentsCallbacks_2;
	// System.Object Microsoft.AppCenter.Unity.Crashes.Crashes::_objectLock
	RuntimeObject * ____objectLock_3;
	// System.Collections.Generic.Queue`1<System.Exception> Microsoft.AppCenter.Unity.Crashes.Crashes::_unhandledExceptions
	Queue_1_t6B5803EB60D9BDC65B4C1C0B40A8079A2C9E1A36 * ____unhandledExceptions_4;

public:
	inline static int32_t get_offset_of__reportUnhandledExceptions_1() { return static_cast<int32_t>(offsetof(Crashes_t41BEE5CC4288218A6C1E6B6BEEC8B643D000FD2F_StaticFields, ____reportUnhandledExceptions_1)); }
	inline bool get__reportUnhandledExceptions_1() const { return ____reportUnhandledExceptions_1; }
	inline bool* get_address_of__reportUnhandledExceptions_1() { return &____reportUnhandledExceptions_1; }
	inline void set__reportUnhandledExceptions_1(bool value)
	{
		____reportUnhandledExceptions_1 = value;
	}

	inline static int32_t get_offset_of__enableErrorAttachmentsCallbacks_2() { return static_cast<int32_t>(offsetof(Crashes_t41BEE5CC4288218A6C1E6B6BEEC8B643D000FD2F_StaticFields, ____enableErrorAttachmentsCallbacks_2)); }
	inline bool get__enableErrorAttachmentsCallbacks_2() const { return ____enableErrorAttachmentsCallbacks_2; }
	inline bool* get_address_of__enableErrorAttachmentsCallbacks_2() { return &____enableErrorAttachmentsCallbacks_2; }
	inline void set__enableErrorAttachmentsCallbacks_2(bool value)
	{
		____enableErrorAttachmentsCallbacks_2 = value;
	}

	inline static int32_t get_offset_of__objectLock_3() { return static_cast<int32_t>(offsetof(Crashes_t41BEE5CC4288218A6C1E6B6BEEC8B643D000FD2F_StaticFields, ____objectLock_3)); }
	inline RuntimeObject * get__objectLock_3() const { return ____objectLock_3; }
	inline RuntimeObject ** get_address_of__objectLock_3() { return &____objectLock_3; }
	inline void set__objectLock_3(RuntimeObject * value)
	{
		____objectLock_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objectLock_3), (void*)value);
	}

	inline static int32_t get_offset_of__unhandledExceptions_4() { return static_cast<int32_t>(offsetof(Crashes_t41BEE5CC4288218A6C1E6B6BEEC8B643D000FD2F_StaticFields, ____unhandledExceptions_4)); }
	inline Queue_1_t6B5803EB60D9BDC65B4C1C0B40A8079A2C9E1A36 * get__unhandledExceptions_4() const { return ____unhandledExceptions_4; }
	inline Queue_1_t6B5803EB60D9BDC65B4C1C0B40A8079A2C9E1A36 ** get_address_of__unhandledExceptions_4() { return &____unhandledExceptions_4; }
	inline void set__unhandledExceptions_4(Queue_1_t6B5803EB60D9BDC65B4C1C0B40A8079A2C9E1A36 * value)
	{
		____unhandledExceptions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unhandledExceptions_4), (void*)value);
	}
};


// Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate
struct CrashesDelegate_tEA2F65EF915E4035069691ECAD69FE2AB379E9D8  : public RuntimeObject
{
public:

public:
};

struct CrashesDelegate_tEA2F65EF915E4035069691ECAD69FE2AB379E9D8_StaticFields
{
public:
	// Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::SendingErrorReport
	SendingErrorReportHandler_t8F52925F22134F9F065F098DCF4F2B5AC3F2CC0E * ___SendingErrorReport_0;
	// Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::SentErrorReport
	SentErrorReportHandler_tE73B9D263B0DC92C94B3674DAADFF04F7DE7985E * ___SentErrorReport_1;
	// Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::FailedToSendErrorReport
	FailedToSendErrorReportHandler_t524C3E1F64ECE6048492C2A933A41ADCE30E0B87 * ___FailedToSendErrorReport_2;
	// Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::GetErrorAttachmentsHandler
	GetErrorAttachmentsHandler_tC8EE6CE8D645BC994216BC0F8260C4268C355829 * ___GetErrorAttachmentsHandler_3;

public:
	inline static int32_t get_offset_of_SendingErrorReport_0() { return static_cast<int32_t>(offsetof(CrashesDelegate_tEA2F65EF915E4035069691ECAD69FE2AB379E9D8_StaticFields, ___SendingErrorReport_0)); }
	inline SendingErrorReportHandler_t8F52925F22134F9F065F098DCF4F2B5AC3F2CC0E * get_SendingErrorReport_0() const { return ___SendingErrorReport_0; }
	inline SendingErrorReportHandler_t8F52925F22134F9F065F098DCF4F2B5AC3F2CC0E ** get_address_of_SendingErrorReport_0() { return &___SendingErrorReport_0; }
	inline void set_SendingErrorReport_0(SendingErrorReportHandler_t8F52925F22134F9F065F098DCF4F2B5AC3F2CC0E * value)
	{
		___SendingErrorReport_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendingErrorReport_0), (void*)value);
	}

	inline static int32_t get_offset_of_SentErrorReport_1() { return static_cast<int32_t>(offsetof(CrashesDelegate_tEA2F65EF915E4035069691ECAD69FE2AB379E9D8_StaticFields, ___SentErrorReport_1)); }
	inline SentErrorReportHandler_tE73B9D263B0DC92C94B3674DAADFF04F7DE7985E * get_SentErrorReport_1() const { return ___SentErrorReport_1; }
	inline SentErrorReportHandler_tE73B9D263B0DC92C94B3674DAADFF04F7DE7985E ** get_address_of_SentErrorReport_1() { return &___SentErrorReport_1; }
	inline void set_SentErrorReport_1(SentErrorReportHandler_tE73B9D263B0DC92C94B3674DAADFF04F7DE7985E * value)
	{
		___SentErrorReport_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SentErrorReport_1), (void*)value);
	}

	inline static int32_t get_offset_of_FailedToSendErrorReport_2() { return static_cast<int32_t>(offsetof(CrashesDelegate_tEA2F65EF915E4035069691ECAD69FE2AB379E9D8_StaticFields, ___FailedToSendErrorReport_2)); }
	inline FailedToSendErrorReportHandler_t524C3E1F64ECE6048492C2A933A41ADCE30E0B87 * get_FailedToSendErrorReport_2() const { return ___FailedToSendErrorReport_2; }
	inline FailedToSendErrorReportHandler_t524C3E1F64ECE6048492C2A933A41ADCE30E0B87 ** get_address_of_FailedToSendErrorReport_2() { return &___FailedToSendErrorReport_2; }
	inline void set_FailedToSendErrorReport_2(FailedToSendErrorReportHandler_t524C3E1F64ECE6048492C2A933A41ADCE30E0B87 * value)
	{
		___FailedToSendErrorReport_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FailedToSendErrorReport_2), (void*)value);
	}

	inline static int32_t get_offset_of_GetErrorAttachmentsHandler_3() { return static_cast<int32_t>(offsetof(CrashesDelegate_tEA2F65EF915E4035069691ECAD69FE2AB379E9D8_StaticFields, ___GetErrorAttachmentsHandler_3)); }
	inline GetErrorAttachmentsHandler_tC8EE6CE8D645BC994216BC0F8260C4268C355829 * get_GetErrorAttachmentsHandler_3() const { return ___GetErrorAttachmentsHandler_3; }
	inline GetErrorAttachmentsHandler_tC8EE6CE8D645BC994216BC0F8260C4268C355829 ** get_address_of_GetErrorAttachmentsHandler_3() { return &___GetErrorAttachmentsHandler_3; }
	inline void set_GetErrorAttachmentsHandler_3(GetErrorAttachmentsHandler_tC8EE6CE8D645BC994216BC0F8260C4268C355829 * value)
	{
		___GetErrorAttachmentsHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetErrorAttachmentsHandler_3), (void*)value);
	}
};


// Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal
struct CrashesInternal_t929773DADB4FB83B872742F575DA6FCF1792C4DC  : public RuntimeObject
{
public:

public:
};


// Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal
struct DistributeInternal_t0CCB82A833EA81A63AC46CF38BCA1900F8E019BB  : public RuntimeObject
{
public:

public:
};


// Microsoft.AppCenter.Unity.Analytics.EventProperties
struct EventProperties_tA7A02FA8A388304612E1E61CBCB2FA5F32B225C2  : public RuntimeObject
{
public:
	// System.Object Microsoft.AppCenter.Unity.Analytics.EventProperties::_rawObject
	RuntimeObject * ____rawObject_0;

public:
	inline static int32_t get_offset_of__rawObject_0() { return static_cast<int32_t>(offsetof(EventProperties_tA7A02FA8A388304612E1E61CBCB2FA5F32B225C2, ____rawObject_0)); }
	inline RuntimeObject * get__rawObject_0() const { return ____rawObject_0; }
	inline RuntimeObject ** get_address_of__rawObject_0() { return &____rawObject_0; }
	inline void set__rawObject_0(RuntimeObject * value)
	{
		____rawObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rawObject_0), (void*)value);
	}
};


// Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal
struct EventPropertiesInternal_tA336A4F0A21CBE2718BA4E46E9DB55E69730D54F  : public RuntimeObject
{
public:

public:
};


// Microsoft.AppCenter.Unity.Crashes.Models.Exception
struct Exception_tFF4FB79C2AD742E0D6C421E2AEE16254D796E0E9  : public RuntimeObject
{
public:
	// System.String Microsoft.AppCenter.Unity.Crashes.Models.Exception::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_0;
	// System.String Microsoft.AppCenter.Unity.Crashes.Models.Exception::<StackTrace>k__BackingField
	String_t* ___U3CStackTraceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Exception_tFF4FB79C2AD742E0D6C421E2AEE16254D796E0E9, ___U3CMessageU3Ek__BackingField_0)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_0() const { return ___U3CMessageU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_0() { return &___U3CMessageU3Ek__BackingField_0; }
	inline void set_U3CMessageU3Ek__BackingField_0(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStackTraceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Exception_tFF4FB79C2AD742E0D6C421E2AEE16254D796E0E9, ___U3CStackTraceU3Ek__BackingField_1)); }
	inline String_t* get_U3CStackTraceU3Ek__BackingField_1() const { return ___U3CStackTraceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CStackTraceU3Ek__BackingField_1() { return &___U3CStackTraceU3Ek__BackingField_1; }
	inline void set_U3CStackTraceU3Ek__BackingField_1(String_t* value)
	{
		___U3CStackTraceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStackTraceU3Ek__BackingField_1), (void*)value);
	}
};


// Assets.UserReporting.Scripts.Plugin.LogDispatcher
struct LogDispatcher_t3C004F417B7C859CB619F5A84E75BD40311FD831  : public RuntimeObject
{
public:

public:
};

struct LogDispatcher_t3C004F417B7C859CB619F5A84E75BD40311FD831_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.WeakReference> Assets.UserReporting.Scripts.Plugin.LogDispatcher::listeners
	List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * ___listeners_0;

public:
	inline static int32_t get_offset_of_listeners_0() { return static_cast<int32_t>(offsetof(LogDispatcher_t3C004F417B7C859CB619F5A84E75BD40311FD831_StaticFields, ___listeners_0)); }
	inline List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * get_listeners_0() const { return ___listeners_0; }
	inline List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 ** get_address_of_listeners_0() { return &___listeners_0; }
	inline void set_listeners_0(List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * value)
	{
		___listeners_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listeners_0), (void*)value);
	}
};


// Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator
struct PropertyConfigurator_tB51FA6C6D10C798B3DE085BEEEC5E3732BEA39E0  : public RuntimeObject
{
public:
	// System.Object Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::_rawObject
	RuntimeObject * ____rawObject_0;

public:
	inline static int32_t get_offset_of__rawObject_0() { return static_cast<int32_t>(offsetof(PropertyConfigurator_tB51FA6C6D10C798B3DE085BEEEC5E3732BEA39E0, ____rawObject_0)); }
	inline RuntimeObject * get__rawObject_0() const { return ____rawObject_0; }
	inline RuntimeObject ** get_address_of__rawObject_0() { return &____rawObject_0; }
	inline void set__rawObject_0(RuntimeObject * value)
	{
		____rawObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rawObject_0), (void*)value);
	}
};


// Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal
struct PropertyConfiguratorInternal_t2C3A1745A51020095CA6CC7A7147EA291538DABB  : public RuntimeObject
{
public:

public:
};


// Microsoft.AppCenter.Unity.Distribute.ReleaseDetails
struct ReleaseDetails_t3B955EA7EE35FE5E96A85E1228A700F916ADAB78  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_1;
	// System.String Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::<ShortVersion>k__BackingField
	String_t* ___U3CShortVersionU3Ek__BackingField_2;
	// System.String Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::<ReleaseNotes>k__BackingField
	String_t* ___U3CReleaseNotesU3Ek__BackingField_3;
	// System.Uri Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::<ReleaseNotesUrl>k__BackingField
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___U3CReleaseNotesUrlU3Ek__BackingField_4;
	// System.Boolean Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::<MandatoryUpdate>k__BackingField
	bool ___U3CMandatoryUpdateU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReleaseDetails_t3B955EA7EE35FE5E96A85E1228A700F916ADAB78, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReleaseDetails_t3B955EA7EE35FE5E96A85E1228A700F916ADAB78, ___U3CVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_1() const { return ___U3CVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_1() { return &___U3CVersionU3Ek__BackingField_1; }
	inline void set_U3CVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShortVersionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReleaseDetails_t3B955EA7EE35FE5E96A85E1228A700F916ADAB78, ___U3CShortVersionU3Ek__BackingField_2)); }
	inline String_t* get_U3CShortVersionU3Ek__BackingField_2() const { return ___U3CShortVersionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CShortVersionU3Ek__BackingField_2() { return &___U3CShortVersionU3Ek__BackingField_2; }
	inline void set_U3CShortVersionU3Ek__BackingField_2(String_t* value)
	{
		___U3CShortVersionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShortVersionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReleaseNotesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ReleaseDetails_t3B955EA7EE35FE5E96A85E1228A700F916ADAB78, ___U3CReleaseNotesU3Ek__BackingField_3)); }
	inline String_t* get_U3CReleaseNotesU3Ek__BackingField_3() const { return ___U3CReleaseNotesU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CReleaseNotesU3Ek__BackingField_3() { return &___U3CReleaseNotesU3Ek__BackingField_3; }
	inline void set_U3CReleaseNotesU3Ek__BackingField_3(String_t* value)
	{
		___U3CReleaseNotesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReleaseNotesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReleaseNotesUrlU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ReleaseDetails_t3B955EA7EE35FE5E96A85E1228A700F916ADAB78, ___U3CReleaseNotesUrlU3Ek__BackingField_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_U3CReleaseNotesUrlU3Ek__BackingField_4() const { return ___U3CReleaseNotesUrlU3Ek__BackingField_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_U3CReleaseNotesUrlU3Ek__BackingField_4() { return &___U3CReleaseNotesUrlU3Ek__BackingField_4; }
	inline void set_U3CReleaseNotesUrlU3Ek__BackingField_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___U3CReleaseNotesUrlU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReleaseNotesUrlU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMandatoryUpdateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ReleaseDetails_t3B955EA7EE35FE5E96A85E1228A700F916ADAB78, ___U3CMandatoryUpdateU3Ek__BackingField_5)); }
	inline bool get_U3CMandatoryUpdateU3Ek__BackingField_5() const { return ___U3CMandatoryUpdateU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CMandatoryUpdateU3Ek__BackingField_5() { return &___U3CMandatoryUpdateU3Ek__BackingField_5; }
	inline void set_U3CMandatoryUpdateU3Ek__BackingField_5(bool value)
	{
		___U3CMandatoryUpdateU3Ek__BackingField_5 = value;
	}
};


// Microsoft.AppCenter.Unity.Analytics.TransmissionTarget
struct TransmissionTarget_t30B9477FB6C086CBA05092A5BE379647815A11A7  : public RuntimeObject
{
public:
	// System.Object Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::_rawObject
	RuntimeObject * ____rawObject_0;

public:
	inline static int32_t get_offset_of__rawObject_0() { return static_cast<int32_t>(offsetof(TransmissionTarget_t30B9477FB6C086CBA05092A5BE379647815A11A7, ____rawObject_0)); }
	inline RuntimeObject * get__rawObject_0() const { return ____rawObject_0; }
	inline RuntimeObject ** get_address_of__rawObject_0() { return &____rawObject_0; }
	inline void set__rawObject_0(RuntimeObject * value)
	{
		____rawObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rawObject_0), (void*)value);
	}
};


// Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal
struct TransmissionTargetInternal_tA6267CB8AC87BA0498B3B2C6194D2AF47361ADAF  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.AppCenter.Unity.Crashes.WrapperException
struct WrapperException_t67302E7DAE4CE82CBFC25FD9C5BBA2A1B9EBAB1D  : public RuntimeObject
{
public:
	// System.Object Microsoft.AppCenter.Unity.Crashes.WrapperException::_rawObject
	RuntimeObject * ____rawObject_0;

public:
	inline static int32_t get_offset_of__rawObject_0() { return static_cast<int32_t>(offsetof(WrapperException_t67302E7DAE4CE82CBFC25FD9C5BBA2A1B9EBAB1D, ____rawObject_0)); }
	inline RuntimeObject * get__rawObject_0() const { return ____rawObject_0; }
	inline RuntimeObject ** get_address_of__rawObject_0() { return &____rawObject_0; }
	inline void set__rawObject_0(RuntimeObject * value)
	{
		____rawObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rawObject_0), (void*)value);
	}
};


// Microsoft.AppCenter.Unity.Crashes.WrapperExceptionInternal
struct WrapperExceptionInternal_tD83CDDA6554052C96A0160A1B1BEFB88255C93FE  : public RuntimeObject
{
public:

public:
};


// Microsoft.AppCenter.Unity.Crashes.Crashes/<SendUnhandledExceptionReports>d__48
struct U3CSendUnhandledExceptionReportsU3Ed__48_tD438F1B35E75A3061A5ED66651217F6E0C24E594  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.AppCenter.Unity.Crashes.Crashes/<SendUnhandledExceptionReports>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.AppCenter.Unity.Crashes.Crashes/<SendUnhandledExceptionReports>d__48::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Exception Microsoft.AppCenter.Unity.Crashes.Crashes/<SendUnhandledExceptionReports>d__48::<exception>5__1
	Exception_t * ___U3CexceptionU3E5__1_2;
	// System.Collections.Generic.Queue`1<System.Exception> Microsoft.AppCenter.Unity.Crashes.Crashes/<SendUnhandledExceptionReports>d__48::<>s__2
	Queue_1_t6B5803EB60D9BDC65B4C1C0B40A8079A2C9E1A36 * ___U3CU3Es__2_3;
	// System.Boolean Microsoft.AppCenter.Unity.Crashes.Crashes/<SendUnhandledExceptionReports>d__48::<>s__3
	bool ___U3CU3Es__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendUnhandledExceptionReportsU3Ed__48_tD438F1B35E75A3061A5ED66651217F6E0C24E594, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSendUnhandledExceptionReportsU3Ed__48_tD438F1B35E75A3061A5ED66651217F6E0C24E594, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexceptionU3E5__1_2() { return static_cast<int32_t>(offsetof(U3CSendUnhandledExceptionReportsU3Ed__48_tD438F1B35E75A3061A5ED66651217F6E0C24E594, ___U3CexceptionU3E5__1_2)); }
	inline Exception_t * get_U3CexceptionU3E5__1_2() const { return ___U3CexceptionU3E5__1_2; }
	inline Exception_t ** get_address_of_U3CexceptionU3E5__1_2() { return &___U3CexceptionU3E5__1_2; }
	inline void set_U3CexceptionU3E5__1_2(Exception_t * value)
	{
		___U3CexceptionU3E5__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexceptionU3E5__1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_3() { return static_cast<int32_t>(offsetof(U3CSendUnhandledExceptionReportsU3Ed__48_tD438F1B35E75A3061A5ED66651217F6E0C24E594, ___U3CU3Es__2_3)); }
	inline Queue_1_t6B5803EB60D9BDC65B4C1C0B40A8079A2C9E1A36 * get_U3CU3Es__2_3() const { return ___U3CU3Es__2_3; }
	inline Queue_1_t6B5803EB60D9BDC65B4C1C0B40A8079A2C9E1A36 ** get_address_of_U3CU3Es__2_3() { return &___U3CU3Es__2_3; }
	inline void set_U3CU3Es__2_3(Queue_1_t6B5803EB60D9BDC65B4C1C0B40A8079A2C9E1A36 * value)
	{
		___U3CU3Es__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__3_4() { return static_cast<int32_t>(offsetof(U3CSendUnhandledExceptionReportsU3Ed__48_tD438F1B35E75A3061A5ED66651217F6E0C24E594, ___U3CU3Es__3_4)); }
	inline bool get_U3CU3Es__3_4() const { return ___U3CU3Es__3_4; }
	inline bool* get_address_of_U3CU3Es__3_4() { return &___U3CU3Es__3_4; }
	inline void set_U3CU3Es__3_4(bool value)
	{
		___U3CU3Es__3_4 = value;
	}
};


// Assets.UserReporting.Scripts.Plugin.LogDispatcher/<>c
struct U3CU3Ec_tF4426A4524AFCA0446ED450DDFFB2A68EE1337FB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF4426A4524AFCA0446ED450DDFFB2A68EE1337FB_StaticFields
{
public:
	// Assets.UserReporting.Scripts.Plugin.LogDispatcher/<>c Assets.UserReporting.Scripts.Plugin.LogDispatcher/<>c::<>9
	U3CU3Ec_tF4426A4524AFCA0446ED450DDFFB2A68EE1337FB * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF4426A4524AFCA0446ED450DDFFB2A68EE1337FB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF4426A4524AFCA0446ED450DDFFB2A68EE1337FB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF4426A4524AFCA0446ED450DDFFB2A68EE1337FB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF4426A4524AFCA0446ED450DDFFB2A68EE1337FB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct __StaticArrayInitTypeSizeU3D14_t1740209EF2EEA6A0145B149E26FE8C1C161FEF88 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t1740209EF2EEA6A0145B149E26FE8C1C161FEF88__padding[14];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D
	__StaticArrayInitTypeSizeU3D14_t1740209EF2EEA6A0145B149E26FE8C1C161FEF88  ___F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D_0;

public:
	inline static int32_t get_offset_of_F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D_0)); }
	inline __StaticArrayInitTypeSizeU3D14_t1740209EF2EEA6A0145B149E26FE8C1C161FEF88  get_F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D_0() const { return ___F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D_0; }
	inline __StaticArrayInitTypeSizeU3D14_t1740209EF2EEA6A0145B149E26FE8C1C161FEF88 * get_address_of_F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D_0() { return &___F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D_0; }
	inline void set_F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D_0(__StaticArrayInitTypeSizeU3D14_t1740209EF2EEA6A0145B149E26FE8C1C161FEF88  value)
	{
		___F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D_0 = value;
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Microsoft.AppCenter.Unity.Analytics.Flags
struct Flags_tE35A9DF07B146B3EB0FD56114F8A4C3C473A8A4B 
{
public:
	// System.Int32 Microsoft.AppCenter.Unity.Analytics.Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tE35A9DF07B146B3EB0FD56114F8A4C3C473A8A4B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.AppCenter.Unity.Distribute.UpdateAction
struct UpdateAction_tCF26C016F75F05AB84E845BE03063D68AE24DAA9 
{
public:
	// System.Int32 Microsoft.AppCenter.Unity.Distribute.UpdateAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateAction_tCF26C016F75F05AB84E845BE03063D68AE24DAA9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.AppCenter.Unity.Distribute.UpdateTrack
struct UpdateTrack_t593DE11022078FCBFB5B57CB96C87D345F571751 
{
public:
	// System.Int32 Microsoft.AppCenter.Unity.Distribute.UpdateTrack::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateTrack_t593DE11022078FCBFB5B57CB96C87D345F571751, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.AppCenter.Unity.Crashes.Crashes/ConfirmationResult
struct ConfirmationResult_t282323458016AACD63F47056D59BB8D915CA570A 
{
public:
	// System.Int32 Microsoft.AppCenter.Unity.Crashes.Crashes/ConfirmationResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfirmationResult_t282323458016AACD63F47056D59BB8D915CA570A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog/AttachmentType
struct AttachmentType_tD5F3CF14195B0F3A8235E542FF43A79D20EA7A3D 
{
public:
	// System.Int32 Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog/AttachmentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttachmentType_tD5F3CF14195B0F3A8235E542FF43A79D20EA7A3D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog
struct ErrorAttachmentLog_t9002DD4C256FA26A5A18BBA5ABBB4F262F8F04BB  : public RuntimeObject
{
public:
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::<Data>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CDataU3Ek__BackingField_1;
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_2;
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::<ContentType>k__BackingField
	String_t* ___U3CContentTypeU3Ek__BackingField_3;
	// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog/AttachmentType Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ErrorAttachmentLog_t9002DD4C256FA26A5A18BBA5ABBB4F262F8F04BB, ___U3CTextU3Ek__BackingField_0)); }
	inline String_t* get_U3CTextU3Ek__BackingField_0() const { return ___U3CTextU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_0() { return &___U3CTextU3Ek__BackingField_0; }
	inline void set_U3CTextU3Ek__BackingField_0(String_t* value)
	{
		___U3CTextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorAttachmentLog_t9002DD4C256FA26A5A18BBA5ABBB4F262F8F04BB, ___U3CDataU3Ek__BackingField_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CDataU3Ek__BackingField_1() const { return ___U3CDataU3Ek__BackingField_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CDataU3Ek__BackingField_1() { return &___U3CDataU3Ek__BackingField_1; }
	inline void set_U3CDataU3Ek__BackingField_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CDataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFileNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorAttachmentLog_t9002DD4C256FA26A5A18BBA5ABBB4F262F8F04BB, ___U3CFileNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CFileNameU3Ek__BackingField_2() const { return ___U3CFileNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CFileNameU3Ek__BackingField_2() { return &___U3CFileNameU3Ek__BackingField_2; }
	inline void set_U3CFileNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CFileNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFileNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContentTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ErrorAttachmentLog_t9002DD4C256FA26A5A18BBA5ABBB4F262F8F04BB, ___U3CContentTypeU3Ek__BackingField_3)); }
	inline String_t* get_U3CContentTypeU3Ek__BackingField_3() const { return ___U3CContentTypeU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CContentTypeU3Ek__BackingField_3() { return &___U3CContentTypeU3Ek__BackingField_3; }
	inline void set_U3CContentTypeU3Ek__BackingField_3(String_t* value)
	{
		___U3CContentTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContentTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ErrorAttachmentLog_t9002DD4C256FA26A5A18BBA5ABBB4F262F8F04BB, ___U3CTypeU3Ek__BackingField_4)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_4() const { return ___U3CTypeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_4() { return &___U3CTypeU3Ek__BackingField_4; }
	inline void set_U3CTypeU3Ek__BackingField_4(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_4 = value;
	}
};


// Microsoft.AppCenter.Unity.Crashes.ErrorReport
struct ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17  : public RuntimeObject
{
public:
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorReport::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.DateTimeOffset Microsoft.AppCenter.Unity.Crashes.ErrorReport::<AppStartTime>k__BackingField
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___U3CAppStartTimeU3Ek__BackingField_1;
	// System.DateTimeOffset Microsoft.AppCenter.Unity.Crashes.ErrorReport::<AppErrorTime>k__BackingField
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___U3CAppErrorTimeU3Ek__BackingField_2;
	// Microsoft.AppCenter.Unity.Device Microsoft.AppCenter.Unity.Crashes.ErrorReport::<Device>k__BackingField
	Device_t17F9C5021FC971A8C08C6F137E0FED8743532A48 * ___U3CDeviceU3Ek__BackingField_3;
	// Microsoft.AppCenter.Unity.Crashes.Models.Exception Microsoft.AppCenter.Unity.Crashes.ErrorReport::<Exception>k__BackingField
	Exception_tFF4FB79C2AD742E0D6C421E2AEE16254D796E0E9 * ___U3CExceptionU3Ek__BackingField_4;
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorReport::<ThreadName>k__BackingField
	String_t* ___U3CThreadNameU3Ek__BackingField_5;
	// System.Int32 Microsoft.AppCenter.Unity.Crashes.ErrorReport::<ProcessId>k__BackingField
	int32_t ___U3CProcessIdU3Ek__BackingField_6;
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorReport::<ReporterKey>k__BackingField
	String_t* ___U3CReporterKeyU3Ek__BackingField_7;
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorReport::<ReporterSignal>k__BackingField
	String_t* ___U3CReporterSignalU3Ek__BackingField_8;
	// System.Boolean Microsoft.AppCenter.Unity.Crashes.ErrorReport::<IsAppKill>k__BackingField
	bool ___U3CIsAppKillU3Ek__BackingField_9;
	// System.Boolean Microsoft.AppCenter.Unity.Crashes.ErrorReport::<IsCrash>k__BackingField
	bool ___U3CIsCrashU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppStartTimeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17, ___U3CAppStartTimeU3Ek__BackingField_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_U3CAppStartTimeU3Ek__BackingField_1() const { return ___U3CAppStartTimeU3Ek__BackingField_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_U3CAppStartTimeU3Ek__BackingField_1() { return &___U3CAppStartTimeU3Ek__BackingField_1; }
	inline void set_U3CAppStartTimeU3Ek__BackingField_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___U3CAppStartTimeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CAppErrorTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17, ___U3CAppErrorTimeU3Ek__BackingField_2)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_U3CAppErrorTimeU3Ek__BackingField_2() const { return ___U3CAppErrorTimeU3Ek__BackingField_2; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_U3CAppErrorTimeU3Ek__BackingField_2() { return &___U3CAppErrorTimeU3Ek__BackingField_2; }
	inline void set_U3CAppErrorTimeU3Ek__BackingField_2(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___U3CAppErrorTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17, ___U3CDeviceU3Ek__BackingField_3)); }
	inline Device_t17F9C5021FC971A8C08C6F137E0FED8743532A48 * get_U3CDeviceU3Ek__BackingField_3() const { return ___U3CDeviceU3Ek__BackingField_3; }
	inline Device_t17F9C5021FC971A8C08C6F137E0FED8743532A48 ** get_address_of_U3CDeviceU3Ek__BackingField_3() { return &___U3CDeviceU3Ek__BackingField_3; }
	inline void set_U3CDeviceU3Ek__BackingField_3(Device_t17F9C5021FC971A8C08C6F137E0FED8743532A48 * value)
	{
		___U3CDeviceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeviceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExceptionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17, ___U3CExceptionU3Ek__BackingField_4)); }
	inline Exception_tFF4FB79C2AD742E0D6C421E2AEE16254D796E0E9 * get_U3CExceptionU3Ek__BackingField_4() const { return ___U3CExceptionU3Ek__BackingField_4; }
	inline Exception_tFF4FB79C2AD742E0D6C421E2AEE16254D796E0E9 ** get_address_of_U3CExceptionU3Ek__BackingField_4() { return &___U3CExceptionU3Ek__BackingField_4; }
	inline void set_U3CExceptionU3Ek__BackingField_4(Exception_tFF4FB79C2AD742E0D6C421E2AEE16254D796E0E9 * value)
	{
		___U3CExceptionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExceptionU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CThreadNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17, ___U3CThreadNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CThreadNameU3Ek__BackingField_5() const { return ___U3CThreadNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CThreadNameU3Ek__BackingField_5() { return &___U3CThreadNameU3Ek__BackingField_5; }
	inline void set_U3CThreadNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CThreadNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CThreadNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProcessIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17, ___U3CProcessIdU3Ek__BackingField_6)); }
	inline int32_t get_U3CProcessIdU3Ek__BackingField_6() const { return ___U3CProcessIdU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CProcessIdU3Ek__BackingField_6() { return &___U3CProcessIdU3Ek__BackingField_6; }
	inline void set_U3CProcessIdU3Ek__BackingField_6(int32_t value)
	{
		___U3CProcessIdU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CReporterKeyU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17, ___U3CReporterKeyU3Ek__BackingField_7)); }
	inline String_t* get_U3CReporterKeyU3Ek__BackingField_7() const { return ___U3CReporterKeyU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CReporterKeyU3Ek__BackingField_7() { return &___U3CReporterKeyU3Ek__BackingField_7; }
	inline void set_U3CReporterKeyU3Ek__BackingField_7(String_t* value)
	{
		___U3CReporterKeyU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReporterKeyU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReporterSignalU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17, ___U3CReporterSignalU3Ek__BackingField_8)); }
	inline String_t* get_U3CReporterSignalU3Ek__BackingField_8() const { return ___U3CReporterSignalU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CReporterSignalU3Ek__BackingField_8() { return &___U3CReporterSignalU3Ek__BackingField_8; }
	inline void set_U3CReporterSignalU3Ek__BackingField_8(String_t* value)
	{
		___U3CReporterSignalU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReporterSignalU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsAppKillU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17, ___U3CIsAppKillU3Ek__BackingField_9)); }
	inline bool get_U3CIsAppKillU3Ek__BackingField_9() const { return ___U3CIsAppKillU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsAppKillU3Ek__BackingField_9() { return &___U3CIsAppKillU3Ek__BackingField_9; }
	inline void set_U3CIsAppKillU3Ek__BackingField_9(bool value)
	{
		___U3CIsAppKillU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsCrashU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17, ___U3CIsCrashU3Ek__BackingField_10)); }
	inline bool get_U3CIsCrashU3Ek__BackingField_10() const { return ___U3CIsCrashU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsCrashU3Ek__BackingField_10() { return &___U3CIsCrashU3Ek__BackingField_10; }
	inline void set_U3CIsCrashU3Ek__BackingField_10(bool value)
	{
		___U3CIsCrashU3Ek__BackingField_10 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.AppCenter.Unity.Distribute.NoReleaseAvailableCallback
struct NoReleaseAvailableCallback_t87DDF4014DE10712BB06EB23AECCEF1FB5B75E97  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler
struct FailedToSendErrorReportHandler_t524C3E1F64ECE6048492C2A933A41ADCE30E0B87  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler
struct GetErrorAttachmentsHandler_tC8EE6CE8D645BC994216BC0F8260C4268C355829  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler
struct SendingErrorReportHandler_t8F52925F22134F9F065F098DCF4F2B5AC3F2CC0E  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler
struct SentErrorReportHandler_tE73B9D263B0DC92C94B3674DAADFF04F7DE7985E  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.AppCenter.Unity.Crashes.Crashes/ShouldProcessErrorReportHandler
struct ShouldProcessErrorReportHandler_t0E11F402719C79E88F61D301B6C730BA8D2D475A  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.AppCenter.Unity.Crashes.Crashes/UserConfirmationHandler
struct UserConfirmationHandler_tB7A953C0B592A858D7B767ECDA431ED42D464854  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper
struct UnityCoroutineHelper_t215869BC991517F0722ECC3AC90F336474613DB5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4527;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4527 = { sizeof (NoReleaseAvailableCallback_t87DDF4014DE10712BB06EB23AECCEF1FB5B75E97), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4528;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4528 = { sizeof (ReleaseDetails_t3B955EA7EE35FE5E96A85E1228A700F916ADAB78), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4529;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4529 = { sizeof (UpdateAction_tCF26C016F75F05AB84E845BE03063D68AE24DAA9)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4530;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4530 = { sizeof (UpdateTrack_t593DE11022078FCBFB5B57CB96C87D345F571751)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4531;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4531 = { sizeof (DistributeInternal_t0CCB82A833EA81A63AC46CF38BCA1900F8E019BB), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4532;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4532 = { sizeof (WrapperExceptionInternal_tD83CDDA6554052C96A0160A1B1BEFB88255C93FE), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4533;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4533 = { sizeof (AttachmentType_tD5F3CF14195B0F3A8235E542FF43A79D20EA7A3D)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4534;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4534 = { sizeof (ErrorAttachmentLog_t9002DD4C256FA26A5A18BBA5ABBB4F262F8F04BB), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4535;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4535 = { sizeof (ErrorReport_t139E6CAB0A3CA2FE062F70E84E82C41F12E21C17), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4536;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4536 = { sizeof (UserConfirmationHandler_tB7A953C0B592A858D7B767ECDA431ED42D464854), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4537;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4537 = { sizeof (ConfirmationResult_t282323458016AACD63F47056D59BB8D915CA570A)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4538;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4538 = { sizeof (ShouldProcessErrorReportHandler_t0E11F402719C79E88F61D301B6C730BA8D2D475A), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4539;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4539 = { sizeof (GetErrorAttachmentsHandler_tC8EE6CE8D645BC994216BC0F8260C4268C355829), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4540;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4540 = { sizeof (SendingErrorReportHandler_t8F52925F22134F9F065F098DCF4F2B5AC3F2CC0E), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4541;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4541 = { sizeof (SentErrorReportHandler_tE73B9D263B0DC92C94B3674DAADFF04F7DE7985E), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4542;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4542 = { sizeof (FailedToSendErrorReportHandler_t524C3E1F64ECE6048492C2A933A41ADCE30E0B87), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4543;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4543 = { sizeof (U3CSendUnhandledExceptionReportsU3Ed__48_tD438F1B35E75A3061A5ED66651217F6E0C24E594), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4544;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4544 = { sizeof (Crashes_t41BEE5CC4288218A6C1E6B6BEEC8B643D000FD2F), -1, sizeof(Crashes_t41BEE5CC4288218A6C1E6B6BEEC8B643D000FD2F_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4545;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4545 = { sizeof (WrapperException_t67302E7DAE4CE82CBFC25FD9C5BBA2A1B9EBAB1D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4546;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4546 = { sizeof (Exception_tFF4FB79C2AD742E0D6C421E2AEE16254D796E0E9), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4547;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4547 = { sizeof (CrashesDelegate_tEA2F65EF915E4035069691ECAD69FE2AB379E9D8), -1, sizeof(CrashesDelegate_tEA2F65EF915E4035069691ECAD69FE2AB379E9D8_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4548;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4548 = { sizeof (CrashesInternal_t929773DADB4FB83B872742F575DA6FCF1792C4DC), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4549;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4549 = { sizeof (AppCenterInternal_tFEFC031F4D010BF199CDC9B0096D74BCF453A21C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4550;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4550 = { sizeof (UnityCoroutineHelper_t215869BC991517F0722ECC3AC90F336474613DB5), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4551;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4551 = { sizeof (PropertyConfiguratorInternal_t2C3A1745A51020095CA6CC7A7147EA291538DABB), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4552;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4552 = { sizeof (TransmissionTargetInternal_tA6267CB8AC87BA0498B3B2C6194D2AF47361ADAF), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4553;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4553 = { sizeof (Analytics_t26646A749934A1C783233953365A09BEB8A85402), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4554;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4554 = { sizeof (EventProperties_tA7A02FA8A388304612E1E61CBCB2FA5F32B225C2), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4555;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4555 = { sizeof (Flags_tE35A9DF07B146B3EB0FD56114F8A4C3C473A8A4B)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4556;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4556 = { sizeof (PropertyConfigurator_tB51FA6C6D10C798B3DE085BEEEC5E3732BEA39E0), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4557;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4557 = { sizeof (TransmissionTarget_t30B9477FB6C086CBA05092A5BE379647815A11A7), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4558;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4558 = { sizeof (AnalyticsInternal_tCFCDC465F320737E0D13FA54061830A424A4C503), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4559;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4559 = { sizeof (EventPropertiesInternal_tA336A4F0A21CBE2718BA4E46E9DB55E69730D54F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4560;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4560 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4561;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4561 = { sizeof (U3CU3Ec_tF4426A4524AFCA0446ED450DDFFB2A68EE1337FB), -1, sizeof(U3CU3Ec_tF4426A4524AFCA0446ED450DDFFB2A68EE1337FB_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4562;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4562 = { sizeof (LogDispatcher_t3C004F417B7C859CB619F5A84E75BD40311FD831), -1, sizeof(LogDispatcher_t3C004F417B7C859CB619F5A84E75BD40311FD831_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4563;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4563 = { sizeof (AndroidUtility_tD4387EF16BC7C9E908A3F67A63198B8362708684), -1, sizeof(AndroidUtility_tD4387EF16BC7C9E908A3F67A63198B8362708684_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4564;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4564 = { sizeof (__StaticArrayInitTypeSizeU3D14_t1740209EF2EEA6A0145B149E26FE8C1C161FEF88)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D14_t1740209EF2EEA6A0145B149E26FE8C1C161FEF88 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4565;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4565 = { sizeof (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528), -1, sizeof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields), 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
