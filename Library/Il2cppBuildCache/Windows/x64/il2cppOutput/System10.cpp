#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8;
// Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
struct unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC;
// Mono.Unity.UnityTls/unitytls_tlsctx_read_callback
struct unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E;
// Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
struct unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B;
// Mono.Unity.UnityTls/unitytls_tlsctx_write_callback
struct unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A;
// Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
struct unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC;
// Mono.Unity.UnityTls/unitytls_x509verify_callback
struct unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
struct unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t
struct unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
struct unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t
struct unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t
struct unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
struct unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
struct unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t
struct unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
struct unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
struct unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t
struct unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
struct unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t
struct unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t
struct unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
struct unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t
struct unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t
struct unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t
struct unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t
struct unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
struct unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t
struct unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t
struct unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t
struct unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t
struct unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
struct unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t
struct unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t
struct unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t
struct unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t
struct unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
struct unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316;

IL2CPP_EXTERN_C RuntimeClass* HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral015C9226A90A65B547DB1B59894F3908A8F2CC06;
IL2CPP_EXTERN_C String_t* _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3;
IL2CPP_EXTERN_C String_t* _stringLiteral0E5584AFF0328C3E9B727CFB3887E9E710B0F53D;
IL2CPP_EXTERN_C String_t* _stringLiteral1488F649920198F59A3B53EA7C81503935DEF05E;
IL2CPP_EXTERN_C String_t* _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92;
IL2CPP_EXTERN_C String_t* _stringLiteral1BFCDAF0CFD10D67417F172B29F830676249E631;
IL2CPP_EXTERN_C String_t* _stringLiteral1C0680A8F698A8F35416CE75A2356C661641B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteral1F1F0198EC371523C2BEEAB18E73243B7B5F5D0D;
IL2CPP_EXTERN_C String_t* _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4;
IL2CPP_EXTERN_C String_t* _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03;
IL2CPP_EXTERN_C String_t* _stringLiteral3D98372962A0D30238C43F12D007AFE39E995B24;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7;
IL2CPP_EXTERN_C String_t* _stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144;
IL2CPP_EXTERN_C String_t* _stringLiteral47E7DF78FEB33C4D463D475ACA6A5FCA4DE8ACF8;
IL2CPP_EXTERN_C String_t* _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4BD4A20D743286D24CF77C38E693ECBCE8CD3A7E;
IL2CPP_EXTERN_C String_t* _stringLiteral4DD4C5922A070C5C0CE53FC4868A2D61BF64A7C3;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5C648DB5BA0DE7A010730BEEDB7FEADB7EB4A556;
IL2CPP_EXTERN_C String_t* _stringLiteral61896E01350C3D7139AB7C79A29A3A8ED072B0C0;
IL2CPP_EXTERN_C String_t* _stringLiteral67A54AB78AD61DDEB268617E3EE621D1193804DC;
IL2CPP_EXTERN_C String_t* _stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD;
IL2CPP_EXTERN_C String_t* _stringLiteral69246FD8ECCD71895CF44BE2EB6A80E686C5A018;
IL2CPP_EXTERN_C String_t* _stringLiteral783C5B36660265F9D49078CA35348CD0ABDD49DF;
IL2CPP_EXTERN_C String_t* _stringLiteral7C5B2C0D17D684D4380087821D68BB021A77AA5D;
IL2CPP_EXTERN_C String_t* _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2;
IL2CPP_EXTERN_C String_t* _stringLiteral8D28F1F930CE88A866A5AFD45B7587A776D2A2E5;
IL2CPP_EXTERN_C String_t* _stringLiteral935884DFDF8F8A8A6D67558F0B4C92779D175C75;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteralAFECF3A5E478A812AD9761D0C14980023E407962;
IL2CPP_EXTERN_C String_t* _stringLiteralBB1692DA8ED7544A3193330A7D73D82D06F61206;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC;
IL2CPP_EXTERN_C String_t* _stringLiteralC6370F4D10E7342974C38CE91A5C8121AA774FD8;
IL2CPP_EXTERN_C String_t* _stringLiteralCC5A4102A5DDF34A7044AFF9259491C106ED8FB6;
IL2CPP_EXTERN_C String_t* _stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA;
IL2CPP_EXTERN_C String_t* _stringLiteralD83A084C77919D323023FA38BD9EC97511C0C3F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE31FBB002AD5481E70CB59BB178B49C5B9330F0E;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE44C95DC2315580987319331D4B060BF8AB6A8;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0;
IL2CPP_EXTERN_C String_t* _stringLiteralFAE55AFF6F18607FEDBE2F4C0C6BA4D4F219D504;
IL2CPP_EXTERN_C String_t* _stringLiteralFF1B24927A3EECD0984D30EA640A9B0CBAA6729C;
IL2CPP_EXTERN_C const RuntimeMethod* HTTP_REQUEST_HEADER_ID_ToString_m1C8B5B5011B051AAF3EB364CC8D3D940A6581F60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HTTP_REQUEST_HEADER_ID__cctor_mF6227C1ABC6104B748D7D7FA799EB384DB8EB5AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_errorstate_create_t_BeginInvoke_m103F02317D04043A6F17DBA039AC7DE10720F2B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_errorstate_create_t_EndInvoke_m1129F7E0667ABDE028F644D2F6AE39659501283F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_errorstate_create_t_Invoke_m6DF09A1CC8C5C38D78CC2E510F318571202E7087_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_errorstate_create_t__ctor_m502A58FB6B55E6F5A7C23A6D0BA9A57AD5C2FC8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_errorstate_raise_error_t_BeginInvoke_mABE9FA2B499289353E0B756509458BB432BFED51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_errorstate_raise_error_t_EndInvoke_mDEBE29AF3E514929895AB7971B159BAB19E4BD5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_errorstate_raise_error_t_Invoke_mB92B8CF1876FF0C9467C82918E427EBD324D8D8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_errorstate_raise_error_t__ctor_mBDF3F1DBB55EBC328D0EE9A14A544A20CD076EBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_free_t_BeginInvoke_m972ED483F0CC8F99724B66019E736094D326EE29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_free_t_EndInvoke_m47D280EFAE1EA7E16E6400B2F47A83C408410A24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_free_t_Invoke_m4DD025ECA7C3B5020EBF702BC4BAAE8D9B3C807B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_free_t__ctor_m0233235C55B3ECFECA16F0A8346E97D6ADDEC040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_get_ref_t_BeginInvoke_m6E656A4FA9FC8D6BC473D707DAFC17DF861E8A95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_get_ref_t_EndInvoke_mBE91A77CA27DE41245B333EA0C8B93EAF0325DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_get_ref_t_Invoke_mE487DAB011D7F5966E09A2245399B312C2EF9111_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_get_ref_t__ctor_mE569EA0229BC956FD332E398F4A6ED32902EFBE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_parse_der_t_BeginInvoke_mD0BF42B3B39E50702EC624F2A8596D3017D0F93B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_parse_der_t_EndInvoke_mEF249023FA9DD82850CB35FBF5691B44F8023A25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_parse_der_t_Invoke_m108AFDBB38B2C1AD429E957CD5BEA93D23C152E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_parse_der_t__ctor_m6E905C011D2077EE54DA350886C16B2BD1EE7681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_parse_pem_t_BeginInvoke_m0AA005FBD3649ACA89E06C9664AC4B7BE062FD7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_parse_pem_t_EndInvoke_m564A47C1A42623E189B4792E82B007B65D1BBEF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_parse_pem_t_Invoke_mD4D86D5A1C3E8E9BF2BB9CC8774EB3499ED598F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_key_parse_pem_t__ctor_m47E001D14C6F8F11E914B1126DE9516411A2AC06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_random_generate_bytes_t_BeginInvoke_m27BF16ECBD2C66644B2626E3CFC61600491E7194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_random_generate_bytes_t_EndInvoke_m74F081B09F91875EF4AC852F58AAD04BCAC1D205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_random_generate_bytes_t_Invoke_mA5EFE8A5F4D068BEC771CE12BD5BD26F9A86BB84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_random_generate_bytes_t__ctor_m55CC9979ADA003BEFF41370469BB0A82DFAC67E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_create_client_t_BeginInvoke_mAF50983B4C1D6DC77B6E7A644872A95E88769D95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_create_client_t_EndInvoke_mFFC92B25698A95310EB56B6C8B82661E75D348C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_create_client_t_Invoke_m3BABCEA6ED54FD59886B7E8685BD7BDB6145079A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_create_client_t__ctor_mBEAE100CA3144364E49C2468343428FE9E19F9B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_create_server_t_BeginInvoke_mB600A87E8909E5FBCA2FC92239A783E345BCB5D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_create_server_t_EndInvoke_mE0ED7A6AE53A54CF3479E70917D0BB2F8EC2DE3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_create_server_t_Invoke_m9BAA6CD5D7D6646AFC00AFAF4128DF92428F0F44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_create_server_t__ctor_m444E3E5CA424BD6649C48AA2724ECABE25A6ACA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_free_t_BeginInvoke_m4709DCB59DEDE7C1500CA164F5E304318ACB9025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_free_t_EndInvoke_m016FC930E1F5CD52FF74DD4FB462C9613813F39E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_free_t_Invoke_m54B2D3A510B87650E7AF041CC60A9FF44ECA9437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_free_t__ctor_mE457D4E43F47148D44E137E6C767DCD036DB34E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_mA110391B7158B9BDC4F0597317AD70CDF0DF017F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m9A477430340005FD37AFC45C377F3FBB8F60FF7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_get_ciphersuite_t_Invoke_mDA134EC5BFA53F4985D9D10A8D4ACB971AE6D0A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_get_ciphersuite_t__ctor_mE7AEF274ACD666FBA2C02F14DA38014EAD75F8E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_get_protocol_t_BeginInvoke_mEEAFA0B27A4655BA9729136FBB2A5383151E3169_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_get_protocol_t_EndInvoke_mAB8A83B00C32C256F56E255EB9A683AE7924CE94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_get_protocol_t_Invoke_m756BD8E367A9BF2872A3A2183366B5C5098A634C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_get_protocol_t__ctor_m42F49F551071AB0F91AB7810C8DC47A2A33F1384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_notify_close_t_BeginInvoke_m73742B8B1BC173EC206ADC3CA492E3BEED2A67A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_notify_close_t_EndInvoke_mD5B659727C0CAD54F05D14BD3C1A554907695F1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_notify_close_t_Invoke_m1DF2F894CC7D1DAC1ED86AB643EF4D9482DBDBDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_notify_close_t__ctor_m9FBFA390FFA5F0E59EF1652BD1F8EC4BB579D787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_process_handshake_t_BeginInvoke_m8E4E264B100447C3590366B75F7C79E75D99EAA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_process_handshake_t_EndInvoke_m3144D076D4C10224C8BFF05671EBDB5F0EFA6FBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_process_handshake_t_Invoke_mB249F948100B2752B2A6BF79C7F9038523C1C89B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_process_handshake_t__ctor_m5FCC62940BECF2001364EA925FF543E1F59EBC61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_read_t_BeginInvoke_mDE6D1E5ED970FB74D58A7C9D849D5CEF0A80066F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_read_t_EndInvoke_m3BCF50CAB32A1EFADEB497D3A50694C018E285C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_read_t_Invoke_m142B61FBEE88603BE95202B62762E92008324935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_read_t__ctor_m292F01CA56EC409E7CDA69BE0AA10B19B3E20F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_mF93542F5F7DC74FC5042D346C0956E694F4B2479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_m8F406760E0CA52C53B0C91D7A7862119F10E3B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_server_require_client_authentication_t_Invoke_mC8E06902662956294CEC4AFCF8697671E7BA3639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_server_require_client_authentication_t__ctor_mA41774A651C25857A72D3694EBDE91E70A408D81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_m69D89510CE1C44BF29C88E2025C42F1ACD29605C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_certificate_callback_t_EndInvoke_mC3508D12AB7792789623E2CFAA028D214200C244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_certificate_callback_t_Invoke_m3F334D5FFB2B3C104C1E65A04B044138CE51DFAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_certificate_callback_t__ctor_mDC0A66278594A9B37EFA6FA3010AFD64DC3E81BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_m03D9AE30DA07EB020A31669DC158422A593329E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mAB41900E507484AD23583DE18E853B9B6145EF4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_mE7E379E36B2B4719ECF97F375682CD0DBF407F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m46A364914173C343267CFDC8B61D7DF4197C6448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m03FCD2BF1AA2571CC4F2CFF59251EFA20421F156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_trace_callback_t_EndInvoke_m07BE3163185F6B3B1D299589E648F7C571D324FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_trace_callback_t_Invoke_mFC61F57B75911E4A1B08221AB854D91F5F03D476_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_trace_callback_t__ctor_mAA8F0A3B039F2A5DA4EA77F6DDA2573BB5FDA80B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mA488C207261DAA26D3D5A81F3549B9B058382DD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_m8BDF1F043AA55E4FAA727E67B544440ED316ED18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_x509verify_callback_t_Invoke_m81E1B51C444B1074314AD55C22EC20E6AD8FA476_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_set_x509verify_callback_t__ctor_m78790E0190264955C6B51F3ACCAAA2C02FC1CB52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_write_t_BeginInvoke_m7DEACE7853FE244D613A77ABEC04AC821B31F503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_write_t_EndInvoke_mE16B80B19C507E3EDF89DA7971AB267BACDC5E86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_write_t_Invoke_m4365C50B81B1904232514233B8252D15E3059416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_tlsctx_write_t__ctor_m300C5AEFDFE22C96322EABE38FD2CA962350D96B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509_export_der_t_BeginInvoke_m315A20FF03D9FD6B82A9A3997267A4E4B72B8D05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509_export_der_t_EndInvoke_m660B809820CF47708B4DB7EBDF618AB34B70242E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509_export_der_t_Invoke_mFA1224BE85A73019C32C3CB0E8ABD7E5BFEFFA82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509_export_der_t__ctor_m4514C241AC221F91BBB088FF1DC31B342DCA7397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_append_der_t_BeginInvoke_mFC163657F9DBE3408CE9FBD94C0E0D672099618D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_append_der_t_EndInvoke_m6002A55859F4C9DCF95DEBADC867E85E33DEF36E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_append_der_t_Invoke_mA432486D4A73BB7FC4DFE3DD02205FE4C0AB9066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_append_der_t__ctor_m814A959A92E1D413C2AB5BE0E8920318D52C8F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_append_t_BeginInvoke_m3A87AAC9A120A76CEC99B52A91B43739A74D097F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_append_t_EndInvoke_m06BB61716750C77C7D19DF3A10628680899382C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_append_t_Invoke_m85E010BA75CBBCC9B32C8A6C685E4F2CCFB69300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_append_t__ctor_m264F31493E6C24EF19C6560237F1DFB0522195C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_create_t_BeginInvoke_m85BD25215C3E215460E132F10110223FED5C7CA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_create_t_EndInvoke_m4D70BD363D9EA21E21E73C6705E62955477CB3B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_create_t_Invoke_m3A52B8B8AC08AA77CEDD34817D2C15209130A1F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_create_t__ctor_m396CBCF6F413041E9FB829BCF12DBB71160E0CC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_free_t_BeginInvoke_m43DF55CE129363751C545897CF317FAD1D7BFA1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_free_t_EndInvoke_m2EAAE00B58B3922A632D13E4DFA3DD737D971916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_free_t_Invoke_m5F920A1A43E549E297391F2033A04AF8C05A3C4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_free_t__ctor_m360A7960A558BFF26B537EE2717CE4FF60612EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_get_ref_t_BeginInvoke_m282E11FB630DFD9FAA07EE42FA460C10AD6A7915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_get_ref_t_EndInvoke_mF4CA76D68207C44E63DA55C4C4208576998D5AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_get_ref_t_Invoke_mFADB5F4BCB29A18DD0BD689EA8180D74CD9E4E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_get_ref_t__ctor_m672FA9C9A5170D460A7D9839E786559819DB8459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_get_x509_t_BeginInvoke_m5B76F36D52C182CFB7B62AA43C3E159E7E7DB468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_get_x509_t_EndInvoke_m6AFA7951802ED216C9EB13AAA7A5C707F7289F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_get_x509_t_Invoke_m58A02DBC5C5C9A0C693DFDE3BEBCE8518C5BEDFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509list_get_x509_t__ctor_mE5676A42AAAE07337AB42C51E139736482AD3FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509verify_default_ca_t_EndInvoke_m4D26A5425526F6A205596F7AE025620E74173282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509verify_default_ca_t_Invoke_m22C2DE021D3D750655FFEF54BE2B030596F1A82E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509verify_default_ca_t__ctor_m87E8CBD1080B32E3E9B2085435089120EE8E7B51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509verify_explicit_ca_t_EndInvoke_mC69D3C3E3F677940005907387BF6A51758A67968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509verify_explicit_ca_t_Invoke_m56F009ABDD7ED613CB6AC27AF8CAD6E6FB34555B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* unitytls_x509verify_explicit_ca_t__ctor_m27337465175BADAB82BFF9333ADA82DCF2DFD2A3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8;;
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke;
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke;;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
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

// System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID
struct HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D  : public RuntimeObject
{
public:

public:
};

struct HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_StaticFields
{
public:
	// System.String[] System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID::m_Strings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_Strings_0;

public:
	inline static int32_t get_offset_of_m_Strings_0() { return static_cast<int32_t>(offsetof(HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_StaticFields, ___m_Strings_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_Strings_0() const { return ___m_Strings_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_Strings_0() { return &___m_Strings_0; }
	inline void set_m_Strings_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_Strings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Strings_0), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// Mono.Unity.UnityTls/unitytls_key
struct unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_key_tCCB86243887B79F39458152647B04B94699985D2__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_key_ref
struct unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_key_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_tlsctx
struct unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 
{
public:
	// Mono.Unity.UnityTls/unitytls_tlsctx_read_callback Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::read
	unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * ___read_0;
	// Mono.Unity.UnityTls/unitytls_tlsctx_write_callback Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::write
	unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * ___write_1;
	// System.Void* Mono.Unity.UnityTls/unitytls_tlsctx_callbacks::data
	void* ___data_2;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8, ___read_0)); }
	inline unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * get_read_0() const { return ___read_0; }
	inline unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(unitytls_tlsctx_read_callback_tED85B184506337F2FC8347E92F7CA449BB8EFC5E * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}

	inline static int32_t get_offset_of_write_1() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8, ___write_1)); }
	inline unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * get_write_1() const { return ___write_1; }
	inline unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A ** get_address_of_write_1() { return &___write_1; }
	inline void set_write_1(unitytls_tlsctx_write_callback_tAF0EA0A8B45A7977BD5145CA69A7C5C5FFFEA98A * value)
	{
		___write_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8, ___data_2)); }
	inline void* get_data_2() const { return ___data_2; }
	inline void** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(void* value)
	{
		___data_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke
{
	Il2CppMethodPointer ___read_0;
	Il2CppMethodPointer ___write_1;
	void* ___data_2;
};
// Native definition for COM marshalling of Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_com
{
	Il2CppMethodPointer ___read_0;
	Il2CppMethodPointer ___write_1;
	void* ___data_2;
};

// Mono.Unity.UnityTls/unitytls_x509_ref
struct unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509list
struct unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_x509list_ref
struct unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509name
struct unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6__padding[1];
	};

public:
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

// Mono.Unity.UnityTls/unitytls_ciphersuite
struct unitytls_ciphersuite_t3D7B347610D6F27E84245DA98B2A3DB13E4CC663 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_ciphersuite::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_ciphersuite_t3D7B347610D6F27E84245DA98B2A3DB13E4CC663, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_error_code
struct unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_error_code::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_protocol
struct unitytls_protocol_t8E18DBA7D28280F405CA3104F9936BE9B543B89A 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_protocol::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_protocol_t8E18DBA7D28280F405CA3104F9936BE9B543B89A, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509verify_result
struct unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_x509verify_result::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
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

// Mono.Unity.UnityTls/unitytls_errorstate
struct unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_errorstate::magic
	uint32_t ___magic_0;
	// Mono.Unity.UnityTls/unitytls_error_code Mono.Unity.UnityTls/unitytls_errorstate::code
	uint32_t ___code_1;
	// System.UInt64 Mono.Unity.UnityTls/unitytls_errorstate::reserved
	uint64_t ___reserved_2;

public:
	inline static int32_t get_offset_of_magic_0() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___magic_0)); }
	inline uint32_t get_magic_0() const { return ___magic_0; }
	inline uint32_t* get_address_of_magic_0() { return &___magic_0; }
	inline void set_magic_0(uint32_t value)
	{
		___magic_0 = value;
	}

	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___code_1)); }
	inline uint32_t get_code_1() const { return ___code_1; }
	inline uint32_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(uint32_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_reserved_2() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___reserved_2)); }
	inline uint64_t get_reserved_2() const { return ___reserved_2; }
	inline uint64_t* get_address_of_reserved_2() { return &___reserved_2; }
	inline void set_reserved_2(uint64_t value)
	{
		___reserved_2 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange
struct unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 
{
public:
	// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange::min
	uint32_t ___min_0;
	// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange::max
	uint32_t ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68, ___min_0)); }
	inline uint32_t get_min_0() const { return ___min_0; }
	inline uint32_t* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(uint32_t value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68, ___max_1)); }
	inline uint32_t get_max_1() const { return ___max_1; }
	inline uint32_t* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(uint32_t value)
	{
		___max_1 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
struct unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
struct unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
struct unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_x509verify_callback
struct unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
struct unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t
struct unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
struct unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t
struct unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t
struct unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
struct unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
struct unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t
struct unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
struct unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
struct unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t
struct unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t
struct unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t
struct unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t
struct unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
struct unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t
struct unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t
struct unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t
struct unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t
struct unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
struct unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t
struct unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t
struct unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t
struct unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t
struct unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
struct unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t
struct unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t
struct unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t
struct unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t
struct unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
struct unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(const unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8& unmarshaled, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_back(const unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8& unmarshaled);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke& marshaled);


#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  DelegatePInvokeWrapper_unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, const RuntimeMethod* method)
{
	typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_create_t__ctor_m502A58FB6B55E6F5A7C23A6D0BA9A57AD5C2FC8E (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_errorstate_create_t__ctor_m502A58FB6B55E6F5A7C23A6D0BA9A57AD5C2FC8E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_errorstate_create_t__ctor_m502A58FB6B55E6F5A7C23A6D0BA9A57AD5C2FC8E_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  unitytls_errorstate_create_t_Invoke_m6DF09A1CC8C5C38D78CC2E510F318571202E7087 (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_errorstate_create_t_Invoke_m6DF09A1CC8C5C38D78CC2E510F318571202E7087_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_errorstate_create_t_Invoke_m6DF09A1CC8C5C38D78CC2E510F318571202E7087_RuntimeMethod_var);
	unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_errorstate_create_t_BeginInvoke_m103F02317D04043A6F17DBA039AC7DE10720F2B4 (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_errorstate_create_t_BeginInvoke_m103F02317D04043A6F17DBA039AC7DE10720F2B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_errorstate_create_t_BeginInvoke_m103F02317D04043A6F17DBA039AC7DE10720F2B4_RuntimeMethod_var);
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499  unitytls_errorstate_create_t_EndInvoke_m1129F7E0667ABDE028F644D2F6AE39659501283F (unitytls_errorstate_create_t_t020E235D7BE661B1359B6ACEAA8A53DB8A2400B7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_errorstate_create_t_EndInvoke_m1129F7E0667ABDE028F644D2F6AE39659501283F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_errorstate_create_t_EndInvoke_m1129F7E0667ABDE028F644D2F6AE39659501283F_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, uint32_t ___errorCode1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___errorState0, ___errorCode1);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_raise_error_t__ctor_mBDF3F1DBB55EBC328D0EE9A14A544A20CD076EBA (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_errorstate_raise_error_t__ctor_mBDF3F1DBB55EBC328D0EE9A14A544A20CD076EBA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_errorstate_raise_error_t__ctor_mBDF3F1DBB55EBC328D0EE9A14A544A20CD076EBA_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_raise_error_t_Invoke_mB92B8CF1876FF0C9467C82918E427EBD324D8D8A (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, uint32_t ___errorCode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_errorstate_raise_error_t_Invoke_mB92B8CF1876FF0C9467C82918E427EBD324D8D8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_errorstate_raise_error_t_Invoke_mB92B8CF1876FF0C9467C82918E427EBD324D8D8A_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorState0, ___errorCode1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, ___errorCode1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(targetMethod, targetThis, ___errorState0, ___errorCode1);
					else
						GenericVirtActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(targetMethod, targetThis, ___errorState0, ___errorCode1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorState0, ___errorCode1);
					else
						VirtActionInvoker2< unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorState0, ___errorCode1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___errorState0, ___errorCode1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, ___errorCode1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_errorstate_raise_error_t_BeginInvoke_mABE9FA2B499289353E0B756509458BB432BFED51 (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, uint32_t ___errorCode1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_errorstate_raise_error_t_BeginInvoke_mABE9FA2B499289353E0B756509458BB432BFED51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_errorstate_raise_error_t_BeginInvoke_mABE9FA2B499289353E0B756509458BB432BFED51_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___errorState0;
	__d_args[1] = Box(unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89_il2cpp_TypeInfo_var, &___errorCode1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_errorstate_raise_error_t_EndInvoke_mDEBE29AF3E514929895AB7971B159BAB19E4BD5D (unitytls_errorstate_raise_error_t_t190A06F5FD9B45B3AA0950014C6A5041A922321E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_errorstate_raise_error_t_EndInvoke_mDEBE29AF3E514929895AB7971B159BAB19E4BD5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_errorstate_raise_error_t_EndInvoke_mDEBE29AF3E514929895AB7971B159BAB19E4BD5D_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___key0);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_free_t__ctor_m0233235C55B3ECFECA16F0A8346E97D6ADDEC040 (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_free_t__ctor_m0233235C55B3ECFECA16F0A8346E97D6ADDEC040_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_free_t__ctor_m0233235C55B3ECFECA16F0A8346E97D6ADDEC040_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::Invoke(Mono.Unity.UnityTls/unitytls_key*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_free_t_Invoke_m4DD025ECA7C3B5020EBF702BC4BAAE8D9B3C807B (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_free_t_Invoke_m4DD025ECA7C3B5020EBF702BC4BAAE8D9B3C807B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_free_t_Invoke_m4DD025ECA7C3B5020EBF702BC4BAAE8D9B3C807B_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___key0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(targetMethod, targetThis, ___key0);
					else
						GenericVirtActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(targetMethod, targetThis, ___key0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___key0);
					else
						VirtActionInvoker1< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___key0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___key0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_free_t_BeginInvoke_m972ED483F0CC8F99724B66019E736094D326EE29 (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_free_t_BeginInvoke_m972ED483F0CC8F99724B66019E736094D326EE29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_free_t_BeginInvoke_m972ED483F0CC8F99724B66019E736094D326EE29_RuntimeMethod_var);
	void *__d_args[2] = {0};
	__d_args[0] = ___key0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_free_t_EndInvoke_m47D280EFAE1EA7E16E6400B2F47A83C408410A24 (unitytls_key_free_t_t796436B2DD6925783C4F8AC5A9DFE0AFDCF3348F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_free_t_EndInvoke_m47D280EFAE1EA7E16E6400B2F47A83C408410A24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_free_t_EndInvoke_m47D280EFAE1EA7E16E6400B2F47A83C408410A24_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  DelegatePInvokeWrapper_unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (CDECL *PInvokeFunc)(unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  returnValue = il2cppPInvokeFunc(___key0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_get_ref_t__ctor_mE569EA0229BC956FD332E398F4A6ED32902EFBE3 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_get_ref_t__ctor_mE569EA0229BC956FD332E398F4A6ED32902EFBE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_get_ref_t__ctor_mE569EA0229BC956FD332E398F4A6ED32902EFBE3_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  unitytls_key_get_ref_t_Invoke_mE487DAB011D7F5966E09A2245399B312C2EF9111 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_get_ref_t_Invoke_mE487DAB011D7F5966E09A2245399B312C2EF9111_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_get_ref_t_Invoke_mE487DAB011D7F5966E09A2245399B312C2EF9111_RuntimeMethod_var);
	unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___key0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, ___errorState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___key0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___key0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___key0, ___errorState1);
					else
						result = VirtFuncInvoker2< unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 , unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___key0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___key0, ___errorState1, targetMethod);
				}
				else
				{
					typedef unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  (*FunctionPointerType) (void*, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___key0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_get_ref_t_BeginInvoke_m6E656A4FA9FC8D6BC473D707DAFC17DF861E8A95 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * ___key0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_get_ref_t_BeginInvoke_m6E656A4FA9FC8D6BC473D707DAFC17DF861E8A95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_get_ref_t_BeginInvoke_m6E656A4FA9FC8D6BC473D707DAFC17DF861E8A95_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___key0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61  unitytls_key_get_ref_t_EndInvoke_mBE91A77CA27DE41245B333EA0C8B93EAF0325DE2 (unitytls_key_get_ref_t_tA4527A35862139AC68FF8CE589FABA9908A82F44 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_get_ref_t_EndInvoke_mBE91A77CA27DE41245B333EA0C8B93EAF0325DE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_get_ref_t_EndInvoke_mBE91A77CA27DE41245B333EA0C8B93EAF0325DE2_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * DelegatePInvokeWrapper_unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (CDECL *PInvokeFunc)(uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * returnValue = il2cppPInvokeFunc(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_parse_der_t__ctor_m6E905C011D2077EE54DA350886C16B2BD1EE7681 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_parse_der_t__ctor_m6E905C011D2077EE54DA350886C16B2BD1EE7681_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_parse_der_t__ctor_m6E905C011D2077EE54DA350886C16B2BD1EE7681_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_der_t_Invoke_m108AFDBB38B2C1AD429E957CD5BEA93D23C152E6 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_parse_der_t_Invoke_m108AFDBB38B2C1AD429E957CD5BEA93D23C152E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_parse_der_t_Invoke_m108AFDBB38B2C1AD429E957CD5BEA93D23C152E6_RuntimeMethod_var);
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_parse_der_t_BeginInvoke_mD0BF42B3B39E50702EC624F2A8596D3017D0F93B (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_parse_der_t_BeginInvoke_mD0BF42B3B39E50702EC624F2A8596D3017D0F93B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_parse_der_t_BeginInvoke_mD0BF42B3B39E50702EC624F2A8596D3017D0F93B_RuntimeMethod_var);
	void *__d_args[6] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen1);
	__d_args[2] = ___password2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___passwordLen3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_der_t_EndInvoke_mEF249023FA9DD82850CB35FBF5691B44F8023A25 (unitytls_key_parse_der_t_tCC498957041D389728F1CEE96ACB1E04AB6A92B9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_parse_der_t_EndInvoke_mEF249023FA9DD82850CB35FBF5691B44F8023A25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_parse_der_t_EndInvoke_mEF249023FA9DD82850CB35FBF5691B44F8023A25_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * DelegatePInvokeWrapper_unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (CDECL *PInvokeFunc)(uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * returnValue = il2cppPInvokeFunc(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_key_parse_pem_t__ctor_m47E001D14C6F8F11E914B1126DE9516411A2AC06 (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_parse_pem_t__ctor_m47E001D14C6F8F11E914B1126DE9516411A2AC06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_parse_pem_t__ctor_m47E001D14C6F8F11E914B1126DE9516411A2AC06_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_pem_t_Invoke_mD4D86D5A1C3E8E9BF2BB9CC8774EB3499ED598F4 (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_parse_pem_t_Invoke_mD4D86D5A1C3E8E9BF2BB9CC8774EB3499ED598F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_parse_pem_t_Invoke_mD4D86D5A1C3E8E9BF2BB9CC8774EB3499ED598F4_RuntimeMethod_var);
	unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * (*FunctionPointerType) (void*, uint8_t*, intptr_t, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___password2, ___passwordLen3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_key_parse_pem_t_BeginInvoke_m0AA005FBD3649ACA89E06C9664AC4B7BE062FD7B (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, uint8_t* ___password2, intptr_t ___passwordLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_parse_pem_t_BeginInvoke_m0AA005FBD3649ACA89E06C9664AC4B7BE062FD7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_parse_pem_t_BeginInvoke_m0AA005FBD3649ACA89E06C9664AC4B7BE062FD7B_RuntimeMethod_var);
	void *__d_args[6] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen1);
	__d_args[2] = ___password2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___passwordLen3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 * unitytls_key_parse_pem_t_EndInvoke_m564A47C1A42623E189B4792E82B007B65D1BBEF7 (unitytls_key_parse_pem_t_t584CCAA999DD14D5A50DCDFDECE5CC03C8A35EDC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_key_parse_pem_t_EndInvoke_m564A47C1A42623E189B4792E82B007B65D1BBEF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_key_parse_pem_t_EndInvoke_m564A47C1A42623E189B4792E82B007B65D1BBEF7_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_key_tCCB86243887B79F39458152647B04B94699985D2 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___buffer0, ___bufferLen1, ___errorState2);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_random_generate_bytes_t__ctor_m55CC9979ADA003BEFF41370469BB0A82DFAC67E8 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_random_generate_bytes_t__ctor_m55CC9979ADA003BEFF41370469BB0A82DFAC67E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_random_generate_bytes_t__ctor_m55CC9979ADA003BEFF41370469BB0A82DFAC67E8_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::Invoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_random_generate_bytes_t_Invoke_mA5EFE8A5F4D068BEC771CE12BD5BD26F9A86BB84 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_random_generate_bytes_t_Invoke_mA5EFE8A5F4D068BEC771CE12BD5BD26F9A86BB84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_random_generate_bytes_t_Invoke_mA5EFE8A5F4D068BEC771CE12BD5BD26F9A86BB84_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___errorState2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___errorState2);
					else
						GenericVirtActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___buffer0, ___bufferLen1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___errorState2);
					else
						VirtActionInvoker3< uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___bufferLen1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___buffer0, ___bufferLen1, ___errorState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___bufferLen1, ___errorState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::BeginInvoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_random_generate_bytes_t_BeginInvoke_m27BF16ECBD2C66644B2626E3CFC61600491E7194 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, uint8_t* ___buffer0, intptr_t ___bufferLen1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_random_generate_bytes_t_BeginInvoke_m27BF16ECBD2C66644B2626E3CFC61600491E7194_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_random_generate_bytes_t_BeginInvoke_m27BF16ECBD2C66644B2626E3CFC61600491E7194_RuntimeMethod_var);
	void *__d_args[4] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_random_generate_bytes_t_EndInvoke_m74F081B09F91875EF4AC852F58AAD04BCAC1D205 (unitytls_random_generate_bytes_t_tE10122C2833C33BF0D5870BEA0457A9F59668FCD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_random_generate_bytes_t_EndInvoke_m74F081B09F91875EF4AC852F58AAD04BCAC1D205_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_random_generate_bytes_t_EndInvoke_m74F081B09F91875EF4AC852F58AAD04BCAC1D205_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{


	typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (CDECL *PInvokeFunc)(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___callbacks1' to native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke ____callbacks1_marshaled = {};
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(___callbacks1, ____callbacks1_marshaled);

	// Native function invocation
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * returnValue = il2cppPInvokeFunc(___supportedProtocols0, ____callbacks1_marshaled, ___cn2, ___cnLen3, ___errorState4);

	// Marshaling cleanup of parameter '___callbacks1' native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(____callbacks1_marshaled);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_create_client_t__ctor_mBEAE100CA3144364E49C2468343428FE9E19F9B6 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_create_client_t__ctor_mBEAE100CA3144364E49C2468343428FE9E19F9B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_create_client_t__ctor_mBEAE100CA3144364E49C2468343428FE9E19F9B6_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_client_t_Invoke_m3BABCEA6ED54FD59886B7E8685BD7BDB6145079A (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_create_client_t_Invoke_m3BABCEA6ED54FD59886B7E8685BD7BDB6145079A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_create_client_t_Invoke_m3BABCEA6ED54FD59886B7E8685BD7BDB6145079A_RuntimeMethod_var);
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (RuntimeObject*, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___supportedProtocols0) - 1), ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___cn2, ___cnLen3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_create_client_t_BeginInvoke_mAF50983B4C1D6DC77B6E7A644872A95E88769D95 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_create_client_t_BeginInvoke_mAF50983B4C1D6DC77B6E7A644872A95E88769D95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_create_client_t_BeginInvoke_mAF50983B4C1D6DC77B6E7A644872A95E88769D95_RuntimeMethod_var);
	void *__d_args[6] = {0};
	__d_args[0] = Box(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var, &___supportedProtocols0);
	__d_args[1] = Box(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var, &___callbacks1);
	__d_args[2] = ___cn2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_client_t_EndInvoke_mFFC92B25698A95310EB56B6C8B82661E75D348C4 (unitytls_tlsctx_create_client_t_t392CE981A76E901BE383526D8C15DF78CCEF5391 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_create_client_t_EndInvoke_mFFC92B25698A95310EB56B6C8B82661E75D348C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_create_client_t_EndInvoke_mFFC92B25698A95310EB56B6C8B82661E75D348C4_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint64_t ___certChain2, uint64_t ___leafCertificateKey3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{


	typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (CDECL *PInvokeFunc)(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke, uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___callbacks1' to native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshaled_pinvoke ____callbacks1_marshaled = {};
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke(___callbacks1, ____callbacks1_marshaled);

	// Native function invocation
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * returnValue = il2cppPInvokeFunc(___supportedProtocols0, ____callbacks1_marshaled, ___certChain2, ___leafCertificateKey3, ___errorState4);

	// Marshaling cleanup of parameter '___callbacks1' native representation
	unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_marshal_pinvoke_cleanup(____callbacks1_marshaled);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_create_server_t__ctor_m444E3E5CA424BD6649C48AA2724ECABE25A6ACA7 (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_create_server_t__ctor_m444E3E5CA424BD6649C48AA2724ECABE25A6ACA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_create_server_t__ctor_m444E3E5CA424BD6649C48AA2724ECABE25A6ACA7_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_server_t_Invoke_m9BAA6CD5D7D6646AFC00AFAF4128DF92428F0F44 (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint64_t ___certChain2, uint64_t ___leafCertificateKey3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_create_server_t_Invoke_m9BAA6CD5D7D6646AFC00AFAF4128DF92428F0F44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_create_server_t_Invoke_m9BAA6CD5D7D6646AFC00AFAF4128DF92428F0F44_RuntimeMethod_var);
	unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
					else
						result = GenericVirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
					else
						result = VirtFuncInvoker5< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (RuntimeObject*, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___supportedProtocols0) - 1), ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
				}
				else
				{
					typedef unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * (*FunctionPointerType) (void*, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68 , unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8 , uint64_t, uint64_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___supportedProtocols0, ___callbacks1, ___certChain2, ___leafCertificateKey3, ___errorState4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_create_server_t_BeginInvoke_mB600A87E8909E5FBCA2FC92239A783E345BCB5D7 (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68  ___supportedProtocols0, unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8  ___callbacks1, uint64_t ___certChain2, uint64_t ___leafCertificateKey3, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_create_server_t_BeginInvoke_mB600A87E8909E5FBCA2FC92239A783E345BCB5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_create_server_t_BeginInvoke_mB600A87E8909E5FBCA2FC92239A783E345BCB5D7_RuntimeMethod_var);
	void *__d_args[6] = {0};
	__d_args[0] = Box(unitytls_tlsctx_protocolrange_tF462D1DFEE1256591505A8220684ABBD5225EF68_il2cpp_TypeInfo_var, &___supportedProtocols0);
	__d_args[1] = Box(unitytls_tlsctx_callbacks_t0BB6AAF9FEBD2FAD0BBB519C8B32489C8F6F4EA8_il2cpp_TypeInfo_var, &___callbacks1);
	__d_args[2] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___certChain2);
	__d_args[3] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___leafCertificateKey3);
	__d_args[4] = ___errorState4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * unitytls_tlsctx_create_server_t_EndInvoke_mE0ED7A6AE53A54CF3479E70917D0BB2F8EC2DE3A (unitytls_tlsctx_create_server_t_t52277734E5E8AF14E87D1CE2D7DAD380EF9E7E6B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_create_server_t_EndInvoke_mE0ED7A6AE53A54CF3479E70917D0BB2F8EC2DE3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_create_server_t_EndInvoke_mE0ED7A6AE53A54CF3479E70917D0BB2F8EC2DE3A_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ctx0);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_free_t__ctor_mE457D4E43F47148D44E137E6C767DCD036DB34E9 (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_free_t__ctor_mE457D4E43F47148D44E137E6C767DCD036DB34E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_free_t__ctor_mE457D4E43F47148D44E137E6C767DCD036DB34E9_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_free_t_Invoke_m54B2D3A510B87650E7AF041CC60A9FF44ECA9437 (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_free_t_Invoke_m54B2D3A510B87650E7AF041CC60A9FF44ECA9437_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_free_t_Invoke_m54B2D3A510B87650E7AF041CC60A9FF44ECA9437_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(targetMethod, targetThis, ___ctx0);
					else
						GenericVirtActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(targetMethod, targetThis, ___ctx0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0);
					else
						VirtActionInvoker1< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_free_t_BeginInvoke_m4709DCB59DEDE7C1500CA164F5E304318ACB9025 (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_free_t_BeginInvoke_m4709DCB59DEDE7C1500CA164F5E304318ACB9025_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_free_t_BeginInvoke_m4709DCB59DEDE7C1500CA164F5E304318ACB9025_RuntimeMethod_var);
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_free_t_EndInvoke_m016FC930E1F5CD52FF74DD4FB462C9613813F39E (unitytls_tlsctx_free_t_t41BC08DA97D5A34340E07BB8C1C3E33BE7D2E7FA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_free_t_EndInvoke_m016FC930E1F5CD52FF74DD4FB462C9613813F39E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_free_t_EndInvoke_m016FC930E1F5CD52FF74DD4FB462C9613813F39E_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ctx0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_get_ciphersuite_t__ctor_mE7AEF274ACD666FBA2C02F14DA38014EAD75F8E0 (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_get_ciphersuite_t__ctor_mE7AEF274ACD666FBA2C02F14DA38014EAD75F8E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_get_ciphersuite_t__ctor_mE7AEF274ACD666FBA2C02F14DA38014EAD75F8E0_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_ciphersuite_t_Invoke_mDA134EC5BFA53F4985D9D10A8D4ACB971AE6D0A1 (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_get_ciphersuite_t_Invoke_mDA134EC5BFA53F4985D9D10A8D4ACB971AE6D0A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_get_ciphersuite_t_Invoke_mDA134EC5BFA53F4985D9D10A8D4ACB971AE6D0A1_RuntimeMethod_var);
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						result = VirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_mA110391B7158B9BDC4F0597317AD70CDF0DF017F (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_mA110391B7158B9BDC4F0597317AD70CDF0DF017F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_mA110391B7158B9BDC4F0597317AD70CDF0DF017F_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m9A477430340005FD37AFC45C377F3FBB8F60FF7D (unitytls_tlsctx_get_ciphersuite_t_tD1454771F7951641A04DEE1E7811DFC492F887C4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m9A477430340005FD37AFC45C377F3FBB8F60FF7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m9A477430340005FD37AFC45C377F3FBB8F60FF7D_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ctx0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_get_protocol_t__ctor_m42F49F551071AB0F91AB7810C8DC47A2A33F1384 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_get_protocol_t__ctor_m42F49F551071AB0F91AB7810C8DC47A2A33F1384_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_get_protocol_t__ctor_m42F49F551071AB0F91AB7810C8DC47A2A33F1384_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_protocol_t_Invoke_m756BD8E367A9BF2872A3A2183366B5C5098A634C (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_get_protocol_t_Invoke_m756BD8E367A9BF2872A3A2183366B5C5098A634C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_get_protocol_t_Invoke_m756BD8E367A9BF2872A3A2183366B5C5098A634C_RuntimeMethod_var);
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						result = VirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_get_protocol_t_BeginInvoke_mEEAFA0B27A4655BA9729136FBB2A5383151E3169 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_get_protocol_t_BeginInvoke_mEEAFA0B27A4655BA9729136FBB2A5383151E3169_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_get_protocol_t_BeginInvoke_mEEAFA0B27A4655BA9729136FBB2A5383151E3169_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_get_protocol_t_EndInvoke_mAB8A83B00C32C256F56E255EB9A683AE7924CE94 (unitytls_tlsctx_get_protocol_t_tF62AF70145ACEE985AFA26ABDF9215C007B90FE6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_get_protocol_t_EndInvoke_mAB8A83B00C32C256F56E255EB9A683AE7924CE94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_get_protocol_t_EndInvoke_mAB8A83B00C32C256F56E255EB9A683AE7924CE94_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ___errorState1);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_notify_close_t__ctor_m9FBFA390FFA5F0E59EF1652BD1F8EC4BB579D787 (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_notify_close_t__ctor_m9FBFA390FFA5F0E59EF1652BD1F8EC4BB579D787_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_notify_close_t__ctor_m9FBFA390FFA5F0E59EF1652BD1F8EC4BB579D787_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_notify_close_t_Invoke_m1DF2F894CC7D1DAC1ED86AB643EF4D9482DBDBDD (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_notify_close_t_Invoke_m1DF2F894CC7D1DAC1ED86AB643EF4D9482DBDBDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_notify_close_t_Invoke_m1DF2F894CC7D1DAC1ED86AB643EF4D9482DBDBDD_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						GenericVirtActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						VirtActionInvoker2< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_notify_close_t_BeginInvoke_m73742B8B1BC173EC206ADC3CA492E3BEED2A67A1 (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_notify_close_t_BeginInvoke_m73742B8B1BC173EC206ADC3CA492E3BEED2A67A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_notify_close_t_BeginInvoke_m73742B8B1BC173EC206ADC3CA492E3BEED2A67A1_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_notify_close_t_EndInvoke_mD5B659727C0CAD54F05D14BD3C1A554907695F1D (unitytls_tlsctx_notify_close_t_t07B9BA3416AF6174CD4F6DB42C711B03EE80F4BB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_notify_close_t_EndInvoke_mD5B659727C0CAD54F05D14BD3C1A554907695F1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_notify_close_t_EndInvoke_mD5B659727C0CAD54F05D14BD3C1A554907695F1D_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___ctx0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_process_handshake_t__ctor_m5FCC62940BECF2001364EA925FF543E1F59EBC61 (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_process_handshake_t__ctor_m5FCC62940BECF2001364EA925FF543E1F59EBC61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_process_handshake_t__ctor_m5FCC62940BECF2001364EA925FF543E1F59EBC61_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_process_handshake_t_Invoke_mB249F948100B2752B2A6BF79C7F9038523C1C89B (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_process_handshake_t_Invoke_mB249F948100B2752B2A6BF79C7F9038523C1C89B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_process_handshake_t_Invoke_mB249F948100B2752B2A6BF79C7F9038523C1C89B_RuntimeMethod_var);
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___errorState1);
					else
						result = VirtFuncInvoker2< uint32_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___errorState1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_process_handshake_t_BeginInvoke_m8E4E264B100447C3590366B75F7C79E75D99EAA4 (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_process_handshake_t_BeginInvoke_m8E4E264B100447C3590366B75F7C79E75D99EAA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_process_handshake_t_BeginInvoke_m8E4E264B100447C3590366B75F7C79E75D99EAA4_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_tlsctx_process_handshake_t_EndInvoke_m3144D076D4C10224C8BFF05671EBDB5F0EFA6FBB (unitytls_tlsctx_process_handshake_t_tBD159E17C74F8D07C6D5E490A036E6852FD7603C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_process_handshake_t_EndInvoke_m3144D076D4C10224C8BFF05671EBDB5F0EFA6FBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_process_handshake_t_EndInvoke_m3144D076D4C10224C8BFF05671EBDB5F0EFA6FBB_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___ctx0, ___buffer1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_read_t__ctor_m292F01CA56EC409E7CDA69BE0AA10B19B3E20F4E (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_read_t__ctor_m292F01CA56EC409E7CDA69BE0AA10B19B3E20F4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_read_t__ctor_m292F01CA56EC409E7CDA69BE0AA10B19B3E20F4E_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_read_t_Invoke_m142B61FBEE88603BE95202B62762E92008324935 (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_read_t_Invoke_m142B61FBEE88603BE95202B62762E92008324935_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_read_t_Invoke_m142B61FBEE88603BE95202B62762E92008324935_RuntimeMethod_var);
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_read_t_BeginInvoke_mDE6D1E5ED970FB74D58A7C9D849D5CEF0A80066F (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_read_t_BeginInvoke_mDE6D1E5ED970FB74D58A7C9D849D5CEF0A80066F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_read_t_BeginInvoke_mDE6D1E5ED970FB74D58A7C9D849D5CEF0A80066F_RuntimeMethod_var);
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_read_t_EndInvoke_m3BCF50CAB32A1EFADEB497D3A50694C018E285C5 (unitytls_tlsctx_read_t_tB8FB5200270F48D3C48A6A2F9BB1FD1052FFC2D3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_read_t_EndInvoke_m3BCF50CAB32A1EFADEB497D3A50694C018E285C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_read_t_EndInvoke_m3BCF50CAB32A1EFADEB497D3A50694C018E285C5_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___clientAuthCAList1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ___clientAuthCAList1, ___errorState2);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_server_require_client_authentication_t__ctor_mA41774A651C25857A72D3694EBDE91E70A408D81 (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_server_require_client_authentication_t__ctor_mA41774A651C25857A72D3694EBDE91E70A408D81_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_server_require_client_authentication_t__ctor_mA41774A651C25857A72D3694EBDE91E70A408D81_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_server_require_client_authentication_t_Invoke_mC8E06902662956294CEC4AFCF8697671E7BA3639 (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___clientAuthCAList1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_server_require_client_authentication_t_Invoke_mC8E06902662956294CEC4AFCF8697671E7BA3639_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_server_require_client_authentication_t_Invoke_mC8E06902662956294CEC4AFCF8697671E7BA3639_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
					else
						GenericVirtActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
					else
						VirtActionInvoker3< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___clientAuthCAList1, ___errorState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_mF93542F5F7DC74FC5042D346C0956E694F4B2479 (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___clientAuthCAList1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_mF93542F5F7DC74FC5042D346C0956E694F4B2479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_mF93542F5F7DC74FC5042D346C0956E694F4B2479_RuntimeMethod_var);
	void *__d_args[4] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___clientAuthCAList1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_m8F406760E0CA52C53B0C91D7A7862119F10E3B7C (unitytls_tlsctx_server_require_client_authentication_t_t5A70999E3FBA85F784654B34D369CB73DAECEABD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_m8F406760E0CA52C53B0C91D7A7862119F10E3B7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_m8F406760E0CA52C53B0C91D7A7862119F10E3B7C_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ____cb1_marshaled, ___userData2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_certificate_callback_t__ctor_mDC0A66278594A9B37EFA6FA3010AFD64DC3E81BE (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_certificate_callback_t__ctor_mDC0A66278594A9B37EFA6FA3010AFD64DC3E81BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_certificate_callback_t__ctor_mDC0A66278594A9B37EFA6FA3010AFD64DC3E81BE_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_certificate_callback_t_Invoke_m3F334D5FFB2B3C104C1E65A04B044138CE51DFAD (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_certificate_callback_t_Invoke_m3F334D5FFB2B3C104C1E65A04B044138CE51DFAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_certificate_callback_t_Invoke_m3F334D5FFB2B3C104C1E65A04B044138CE51DFAD_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_m69D89510CE1C44BF29C88E2025C42F1ACD29605C (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_certificate_callback_t18B3186AFC581972E9591E7D82D6D499F0F9C3EC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_m69D89510CE1C44BF29C88E2025C42F1ACD29605C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_m69D89510CE1C44BF29C88E2025C42F1ACD29605C_RuntimeMethod_var);
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___cb1;
	__d_args[2] = ___userData2;
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_certificate_callback_t_EndInvoke_mC3508D12AB7792789623E2CFAA028D214200C244 (unitytls_tlsctx_set_certificate_callback_t_tA83128A449A933E6CB5C15595A67BEDAD1566AA1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_certificate_callback_t_EndInvoke_mC3508D12AB7792789623E2CFAA028D214200C244_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_certificate_callback_t_EndInvoke_mC3508D12AB7792789623E2CFAA028D214200C244_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint32_t* ___supportedCiphersuites1, intptr_t ___supportedCiphersuitesLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m46A364914173C343267CFDC8B61D7DF4197C6448 (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m46A364914173C343267CFDC8B61D7DF4197C6448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_supported_ciphersuites_t__ctor_m46A364914173C343267CFDC8B61D7DF4197C6448_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_mE7E379E36B2B4719ECF97F375682CD0DBF407F1B (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint32_t* ___supportedCiphersuites1, intptr_t ___supportedCiphersuitesLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_mE7E379E36B2B4719ECF97F375682CD0DBF407F1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_mE7E379E36B2B4719ECF97F375682CD0DBF407F1B_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint32_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___supportedCiphersuites1, ___supportedCiphersuitesLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_m03D9AE30DA07EB020A31669DC158422A593329E9 (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint32_t* ___supportedCiphersuites1, intptr_t ___supportedCiphersuitesLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_m03D9AE30DA07EB020A31669DC158422A593329E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_m03D9AE30DA07EB020A31669DC158422A593329E9_RuntimeMethod_var);
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___supportedCiphersuites1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___supportedCiphersuitesLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mAB41900E507484AD23583DE18E853B9B6145EF4C (unitytls_tlsctx_set_supported_ciphersuites_t_tC529631EAFC3F46BBC2FD70565976FAA13DED55E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mAB41900E507484AD23583DE18E853B9B6145EF4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mAB41900E507484AD23583DE18E853B9B6145EF4C_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ____cb1_marshaled, ___userData2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_trace_callback_t__ctor_mAA8F0A3B039F2A5DA4EA77F6DDA2573BB5FDA80B (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_trace_callback_t__ctor_mAA8F0A3B039F2A5DA4EA77F6DDA2573BB5FDA80B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_trace_callback_t__ctor_mAA8F0A3B039F2A5DA4EA77F6DDA2573BB5FDA80B_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_trace_callback_t_Invoke_mFC61F57B75911E4A1B08221AB854D91F5F03D476 (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_trace_callback_t_Invoke_mFC61F57B75911E4A1B08221AB854D91F5F03D476_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_trace_callback_t_Invoke_mFC61F57B75911E4A1B08221AB854D91F5F03D476_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m03FCD2BF1AA2571CC4F2CFF59251EFA20421F156 (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_trace_callback_t1C4E5EC42D34BE31E31F82CF24550D0BD070CC4B * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m03FCD2BF1AA2571CC4F2CFF59251EFA20421F156_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m03FCD2BF1AA2571CC4F2CFF59251EFA20421F156_RuntimeMethod_var);
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___cb1;
	__d_args[2] = ___userData2;
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_trace_callback_t_EndInvoke_m07BE3163185F6B3B1D299589E648F7C571D324FE (unitytls_tlsctx_set_trace_callback_t_tAA0291D41818318537C7AF00C5A5EA84775735BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_trace_callback_t_EndInvoke_m07BE3163185F6B3B1D299589E648F7C571D324FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_trace_callback_t_EndInvoke_m07BE3163185F6B3B1D299589E648F7C571D324FE_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Native function invocation
	il2cppPInvokeFunc(___ctx0, ____cb1_marshaled, ___userData2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_x509verify_callback_t__ctor_m78790E0190264955C6B51F3ACCAAA2C02FC1CB52 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_x509verify_callback_t__ctor_m78790E0190264955C6B51F3ACCAAA2C02FC1CB52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_x509verify_callback_t__ctor_m78790E0190264955C6B51F3ACCAAA2C02FC1CB52_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_x509verify_callback_t_Invoke_m81E1B51C444B1074314AD55C22EC20E6AD8FA476 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_x509verify_callback_t_Invoke_m81E1B51C444B1074314AD55C22EC20E6AD8FA476_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_x509verify_callback_t_Invoke_m81E1B51C444B1074314AD55C22EC20E6AD8FA476_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___cb1, ___userData2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mA488C207261DAA26D3D5A81F3549B9B058382DD2 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, unitytls_tlsctx_x509verify_callback_tFC1C7AA64F522FC925BBF4EC82C9FEC087F9BABC * ___cb1, void* ___userData2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mA488C207261DAA26D3D5A81F3549B9B058382DD2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mA488C207261DAA26D3D5A81F3549B9B058382DD2_RuntimeMethod_var);
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___cb1;
	__d_args[2] = ___userData2;
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_m8BDF1F043AA55E4FAA727E67B544440ED316ED18 (unitytls_tlsctx_set_x509verify_callback_t_t4160B581468D9F037A774B02EFA297FBF58974E4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_m8BDF1F043AA55E4FAA727E67B544440ED316ED18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_m8BDF1F043AA55E4FAA727E67B544440ED316ED18_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___ctx0, ___data1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_tlsctx_write_t__ctor_m300C5AEFDFE22C96322EABE38FD2CA962350D96B (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_write_t__ctor_m300C5AEFDFE22C96322EABE38FD2CA962350D96B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_write_t__ctor_m300C5AEFDFE22C96322EABE38FD2CA962350D96B_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_write_t_Invoke_m4365C50B81B1904232514233B8252D15E3059416 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_write_t_Invoke_m4365C50B81B1904232514233B8252D15E3059416_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_write_t_Invoke_m4365C50B81B1904232514233B8252D15E3059416_RuntimeMethod_var);
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, ___data1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_tlsctx_write_t_BeginInvoke_m7DEACE7853FE244D613A77ABEC04AC821B31F503 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_write_t_BeginInvoke_m7DEACE7853FE244D613A77ABEC04AC821B31F503_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_write_t_BeginInvoke_m7DEACE7853FE244D613A77ABEC04AC821B31F503_RuntimeMethod_var);
	void *__d_args[5] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___data1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_tlsctx_write_t_EndInvoke_mE16B80B19C507E3EDF89DA7971AB267BACDC5E86 (unitytls_tlsctx_write_t_t9346A860CE3FFC985144D67CC3D346C54AEE8AE9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_tlsctx_write_t_EndInvoke_mE16B80B19C507E3EDF89DA7971AB267BACDC5E86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_tlsctx_write_t_EndInvoke_mE16B80B19C507E3EDF89DA7971AB267BACDC5E86_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc)(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___cert0, ___buffer1, ___bufferLen2, ___errorState3);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509_export_der_t__ctor_m4514C241AC221F91BBB088FF1DC31B342DCA7397 (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_export_der_t__ctor_m4514C241AC221F91BBB088FF1DC31B342DCA7397_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509_export_der_t__ctor_m4514C241AC221F91BBB088FF1DC31B342DCA7397_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_x509_export_der_t_Invoke_mFA1224BE85A73019C32C3CB0E8ABD7E5BFEFFA82 (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_export_der_t_Invoke_mFA1224BE85A73019C32C3CB0E8ABD7E5BFEFFA82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509_export_der_t_Invoke_mFA1224BE85A73019C32C3CB0E8ABD7E5BFEFFA82_RuntimeMethod_var);
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cert0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = GenericVirtFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						result = VirtFuncInvoker4< intptr_t, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___cert0) - 1), ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cert0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509_export_der_t_BeginInvoke_m315A20FF03D9FD6B82A9A3997267A4E4B72B8D05 (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_export_der_t_BeginInvoke_m315A20FF03D9FD6B82A9A3997267A4E4B72B8D05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509_export_der_t_BeginInvoke_m315A20FF03D9FD6B82A9A3997267A4E4B72B8D05_RuntimeMethod_var);
	void *__d_args[5] = {0};
	__d_args[0] = Box(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var, &___cert0);
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t unitytls_x509_export_der_t_EndInvoke_m660B809820CF47708B4DB7EBDF618AB34B70242E (unitytls_x509_export_der_t_t3987BCA1BE015ACB1547918725B2A0A3BC557EAC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_export_der_t_EndInvoke_m660B809820CF47708B4DB7EBDF618AB34B70242E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509_export_der_t_EndInvoke_m660B809820CF47708B4DB7EBDF618AB34B70242E_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___list0, ___buffer1, ___bufferLen2, ___errorState3);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_der_t__ctor_m814A959A92E1D413C2AB5BE0E8920318D52C8F3F (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_append_der_t__ctor_m814A959A92E1D413C2AB5BE0E8920318D52C8F3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_append_der_t__ctor_m814A959A92E1D413C2AB5BE0E8920318D52C8F3F_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_der_t_Invoke_mA432486D4A73BB7FC4DFE3DD02205FE4C0AB9066 (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_append_der_t_Invoke_mA432486D4A73BB7FC4DFE3DD02205FE4C0AB9066_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_append_der_t_Invoke_mA432486D4A73BB7FC4DFE3DD02205FE4C0AB9066_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						GenericVirtActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
					else
						VirtActionInvoker4< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, uint8_t*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___buffer1, ___bufferLen2, ___errorState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_append_der_t_BeginInvoke_mFC163657F9DBE3408CE9FBD94C0E0D672099618D (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_append_der_t_BeginInvoke_mFC163657F9DBE3408CE9FBD94C0E0D672099618D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_append_der_t_BeginInvoke_mFC163657F9DBE3408CE9FBD94C0E0D672099618D_RuntimeMethod_var);
	void *__d_args[5] = {0};
	__d_args[0] = ___list0;
	__d_args[1] = ___buffer1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bufferLen2);
	__d_args[3] = ___errorState3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_der_t_EndInvoke_m6002A55859F4C9DCF95DEBADC867E85E33DEF36E (unitytls_x509list_append_der_t_t94708C9970997D4B6BA1FDDE41873240FD65DA7E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_append_der_t_EndInvoke_m6002A55859F4C9DCF95DEBADC867E85E33DEF36E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_append_der_t_EndInvoke_m6002A55859F4C9DCF95DEBADC867E85E33DEF36E_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___list0, ___cert1, ___errorState2);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_t__ctor_m264F31493E6C24EF19C6560237F1DFB0522195C2 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_append_t__ctor_m264F31493E6C24EF19C6560237F1DFB0522195C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_append_t__ctor_m264F31493E6C24EF19C6560237F1DFB0522195C2_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_t_Invoke_m85E010BA75CBBCC9B32C8A6C685E4F2CCFB69300 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_append_t_Invoke_m85E010BA75CBBCC9B32C8A6C685E4F2CCFB69300_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_append_t_Invoke_m85E010BA75CBBCC9B32C8A6C685E4F2CCFB69300_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___list0, ___cert1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___cert1, ___errorState2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___cert1, ___errorState2);
					else
						GenericVirtActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___cert1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___cert1, ___errorState2);
					else
						VirtActionInvoker3< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___cert1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___list0, ___cert1, ___errorState2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___cert1, ___errorState2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_append_t_BeginInvoke_m3A87AAC9A120A76CEC99B52A91B43739A74D097F (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  ___cert1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_append_t_BeginInvoke_m3A87AAC9A120A76CEC99B52A91B43739A74D097F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_append_t_BeginInvoke_m3A87AAC9A120A76CEC99B52A91B43739A74D097F_RuntimeMethod_var);
	void *__d_args[4] = {0};
	__d_args[0] = ___list0;
	__d_args[1] = Box(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5_il2cpp_TypeInfo_var, &___cert1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_append_t_EndInvoke_m06BB61716750C77C7D19DF3A10628680899382C9 (unitytls_x509list_append_t_t6ACB188079E58608A8A6D34FA7CD6425C9902AA0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_append_t_EndInvoke_m06BB61716750C77C7D19DF3A10628680899382C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_append_t_EndInvoke_m06BB61716750C77C7D19DF3A10628680899382C9_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * DelegatePInvokeWrapper_unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, const RuntimeMethod* method)
{
	typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (CDECL *PInvokeFunc)(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * returnValue = il2cppPInvokeFunc(___errorState0);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_create_t__ctor_m396CBCF6F413041E9FB829BCF12DBB71160E0CC5 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_create_t__ctor_m396CBCF6F413041E9FB829BCF12DBB71160E0CC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_create_t__ctor_m396CBCF6F413041E9FB829BCF12DBB71160E0CC5_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * unitytls_x509list_create_t_Invoke_m3A52B8B8AC08AA77CEDD34817D2C15209130A1F1 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_create_t_Invoke_m3A52B8B8AC08AA77CEDD34817D2C15209130A1F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_create_t_Invoke_m3A52B8B8AC08AA77CEDD34817D2C15209130A1F1_RuntimeMethod_var);
	unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___errorState0, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___errorState0);
					else
						result = GenericVirtFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___errorState0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorState0);
					else
						result = VirtFuncInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorState0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___errorState0, targetMethod);
				}
				else
				{
					typedef unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * (*FunctionPointerType) (void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___errorState0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_create_t_BeginInvoke_m85BD25215C3E215460E132F10110223FED5C7CA2 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_create_t_BeginInvoke_m85BD25215C3E215460E132F10110223FED5C7CA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_create_t_BeginInvoke_m85BD25215C3E215460E132F10110223FED5C7CA2_RuntimeMethod_var);
	void *__d_args[2] = {0};
	__d_args[0] = ___errorState0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * unitytls_x509list_create_t_EndInvoke_m4D70BD363D9EA21E21E73C6705E62955477CB3B0 (unitytls_x509list_create_t_t4DE950C418479FC46C6D1B1DDC19E4F6AF66F20F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_create_t_EndInvoke_m4D70BD363D9EA21E21E73C6705E62955477CB3B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_create_t_EndInvoke_m4D70BD363D9EA21E21E73C6705E62955477CB3B0_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___list0);

}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_free_t__ctor_m360A7960A558BFF26B537EE2717CE4FF60612EBE (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_free_t__ctor_m360A7960A558BFF26B537EE2717CE4FF60612EBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_free_t__ctor_m360A7960A558BFF26B537EE2717CE4FF60612EBE_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_free_t_Invoke_m5F920A1A43E549E297391F2033A04AF8C05A3C4C (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_free_t_Invoke_m5F920A1A43E549E297391F2033A04AF8C05A3C4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_free_t_Invoke_m5F920A1A43E549E297391F2033A04AF8C05A3C4C_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___list0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(targetMethod, targetThis, ___list0);
					else
						GenericVirtActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(targetMethod, targetThis, ___list0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0);
					else
						VirtActionInvoker1< unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___list0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_free_t_BeginInvoke_m43DF55CE129363751C545897CF317FAD1D7BFA1A (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_free_t_BeginInvoke_m43DF55CE129363751C545897CF317FAD1D7BFA1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_free_t_BeginInvoke_m43DF55CE129363751C545897CF317FAD1D7BFA1A_RuntimeMethod_var);
	void *__d_args[2] = {0};
	__d_args[0] = ___list0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_free_t_EndInvoke_m2EAAE00B58B3922A632D13E4DFA3DD737D971916 (unitytls_x509list_free_t_t2ABB8E057B2B396E5EAAC5BB526438CEAB17BEB2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_free_t_EndInvoke_m2EAAE00B58B3922A632D13E4DFA3DD737D971916_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_free_t_EndInvoke_m2EAAE00B58B3922A632D13E4DFA3DD737D971916_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (CDECL *PInvokeFunc)(unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  returnValue = il2cppPInvokeFunc(___list0, ___errorState1);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_get_ref_t__ctor_m672FA9C9A5170D460A7D9839E786559819DB8459 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_get_ref_t__ctor_m672FA9C9A5170D460A7D9839E786559819DB8459_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_get_ref_t__ctor_m672FA9C9A5170D460A7D9839E786559819DB8459_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  unitytls_x509list_get_ref_t_Invoke_mFADB5F4BCB29A18DD0BD689EA8180D74CD9E4E63 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_get_ref_t_Invoke_mFADB5F4BCB29A18DD0BD689EA8180D74CD9E4E63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_get_ref_t_Invoke_mFADB5F4BCB29A18DD0BD689EA8180D74CD9E4E63_RuntimeMethod_var);
	unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___list0, ___errorState1, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___errorState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___errorState1);
					else
						result = GenericVirtFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___errorState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___errorState1);
					else
						result = VirtFuncInvoker2< unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___errorState1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___list0, ___errorState1, targetMethod);
				}
				else
				{
					typedef unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  (*FunctionPointerType) (void*, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D *, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___errorState1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_get_ref_t_BeginInvoke_m282E11FB630DFD9FAA07EE42FA460C10AD6A7915 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, unitytls_x509list_tB96E9D4DB410024B6BDB3865C3AD0FD1D5C0380D * ___list0, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_get_ref_t_BeginInvoke_m282E11FB630DFD9FAA07EE42FA460C10AD6A7915_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_get_ref_t_BeginInvoke_m282E11FB630DFD9FAA07EE42FA460C10AD6A7915_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___list0;
	__d_args[1] = ___errorState1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  unitytls_x509list_get_ref_t_EndInvoke_mF4CA76D68207C44E63DA55C4C4208576998D5AE0 (unitytls_x509list_get_ref_t_tBC2FCC8641432B5F29FC8C36BA315BEBFA2841E3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_get_ref_t_EndInvoke_mF4CA76D68207C44E63DA55C4C4208576998D5AE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_get_ref_t_EndInvoke_mF4CA76D68207C44E63DA55C4C4208576998D5AE0_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___list0, intptr_t ___index1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  returnValue = il2cppPInvokeFunc(___list0, ___index1, ___errorState2);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509list_get_x509_t__ctor_mE5676A42AAAE07337AB42C51E139736482AD3FCC (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_get_x509_t__ctor_mE5676A42AAAE07337AB42C51E139736482AD3FCC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_get_x509_t__ctor_mE5676A42AAAE07337AB42C51E139736482AD3FCC_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  unitytls_x509list_get_x509_t_Invoke_m58A02DBC5C5C9A0C693DFDE3BEBCE8518C5BEDFE (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___list0, intptr_t ___index1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_get_x509_t_Invoke_m58A02DBC5C5C9A0C693DFDE3BEBCE8518C5BEDFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_get_x509_t_Invoke_m58A02DBC5C5C9A0C693DFDE3BEBCE8518C5BEDFE_RuntimeMethod_var);
	unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___list0, ___index1, ___errorState2, targetMethod);
			}
			else
			{
				// closed
				typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___index1, ___errorState2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___index1, ___errorState2);
					else
						result = GenericVirtFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___list0, ___index1, ___errorState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___list0, ___index1, ___errorState2);
					else
						result = VirtFuncInvoker3< unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___list0, ___index1, ___errorState2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (RuntimeObject*, intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___list0) - 1), ___index1, ___errorState2, targetMethod);
				}
				else
				{
					typedef unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , intptr_t, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___list0, ___index1, ___errorState2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509list_get_x509_t_BeginInvoke_m5B76F36D52C182CFB7B62AA43C3E159E7E7DB468 (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___list0, intptr_t ___index1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_get_x509_t_BeginInvoke_m5B76F36D52C182CFB7B62AA43C3E159E7E7DB468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_get_x509_t_BeginInvoke_m5B76F36D52C182CFB7B62AA43C3E159E7E7DB468_RuntimeMethod_var);
	void *__d_args[4] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___list0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = ___errorState2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5  unitytls_x509list_get_x509_t_EndInvoke_m6AFA7951802ED216C9EB13AAA7A5C707F7289F41 (unitytls_x509list_get_x509_t_tF46E7331F73091A58996810B3CC2523F58C23D25 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_get_x509_t_EndInvoke_m6AFA7951802ED216C9EB13AAA7A5C707F7289F41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509list_get_x509_t_EndInvoke_m6AFA7951802ED216C9EB13AAA7A5C707F7289F41_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb3' to native representation
	Il2CppMethodPointer ____cb3_marshaled = NULL;
	____cb3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb3));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___chain0, ___cn1, ___cnLen2, ____cb3_marshaled, ___userData4, ___errorState5);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509verify_default_ca_t__ctor_m87E8CBD1080B32E3E9B2085435089120EE8E7B51 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_default_ca_t__ctor_m87E8CBD1080B32E3E9B2085435089120EE8E7B51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509verify_default_ca_t__ctor_m87E8CBD1080B32E3E9B2085435089120EE8E7B51_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_default_ca_t_Invoke_m22C2DE021D3D750655FFEF54BE2B030596F1A82E (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_default_ca_t_Invoke_m22C2DE021D3D750655FFEF54BE2B030596F1A82E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509verify_default_ca_t_Invoke_m22C2DE021D3D750655FFEF54BE2B030596F1A82E_RuntimeMethod_var);
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 6)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
					else
						result = GenericVirtFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
					else
						result = VirtFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___chain0) - 1), ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829_RuntimeMethod_var);
	void *__d_args[7] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___chain0);
	__d_args[1] = ___cn1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen2);
	__d_args[3] = ___cb3;
	__d_args[4] = ___userData4;
	__d_args[5] = ___errorState5;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_default_ca_t_EndInvoke_m4D26A5425526F6A205596F7AE025620E74173282 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_default_ca_t_EndInvoke_m4D26A5425526F6A205596F7AE025620E74173282_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509verify_default_ca_t_EndInvoke_m4D26A5425526F6A205596F7AE025620E74173282_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___cb4' to native representation
	Il2CppMethodPointer ____cb4_marshaled = NULL;
	____cb4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb4));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___chain0, ___trustCA1, ___cn2, ___cnLen3, ____cb4_marshaled, ___userData5, ___errorState6);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509verify_explicit_ca_t__ctor_m27337465175BADAB82BFF9333ADA82DCF2DFD2A3 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_explicit_ca_t__ctor_m27337465175BADAB82BFF9333ADA82DCF2DFD2A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509verify_explicit_ca_t__ctor_m27337465175BADAB82BFF9333ADA82DCF2DFD2A3_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_explicit_ca_t_Invoke_m56F009ABDD7ED613CB6AC27AF8CAD6E6FB34555B (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_explicit_ca_t_Invoke_m56F009ABDD7ED613CB6AC27AF8CAD6E6FB34555B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509verify_explicit_ca_t_Invoke_m56F009ABDD7ED613CB6AC27AF8CAD6E6FB34555B_RuntimeMethod_var);
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 7)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
					else
						result = GenericVirtFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
					else
						result = VirtFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___chain0) - 1), ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback7, RuntimeObject * ___object8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1_RuntimeMethod_var);
	void *__d_args[8] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___chain0);
	__d_args[1] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___trustCA1);
	__d_args[2] = ___cn2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen3);
	__d_args[4] = ___cb4;
	__d_args[5] = ___userData5;
	__d_args[6] = ___errorState6;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);;
}
// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_explicit_ca_t_EndInvoke_mC69D3C3E3F677940005907387BF6A51758A67968 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_x509verify_explicit_ca_t_EndInvoke_mC69D3C3E3F677940005907387BF6A51758A67968_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(unitytls_x509verify_explicit_ca_t_EndInvoke_mC69D3C3E3F677940005907387BF6A51758A67968_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HTTP_REQUEST_HEADER_ID_ToString_m1C8B5B5011B051AAF3EB364CC8D3D940A6581F60 (int32_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HTTP_REQUEST_HEADER_ID_ToString_m1C8B5B5011B051AAF3EB364CC8D3D940A6581F60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(HTTP_REQUEST_HEADER_ID_ToString_m1C8B5B5011B051AAF3EB364CC8D3D940A6581F60_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ((HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_StaticFields*)il2cpp_codegen_static_fields_for(HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var))->get_m_Strings_0();
		int32_t L_1 = ___position0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HTTP_REQUEST_HEADER_ID__cctor_mF6227C1ABC6104B748D7D7FA799EB384DB8EB5AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HTTP_REQUEST_HEADER_ID__cctor_mF6227C1ABC6104B748D7D7FA799EB384DB8EB5AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral015C9226A90A65B547DB1B59894F3908A8F2CC06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5584AFF0328C3E9B727CFB3887E9E710B0F53D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1488F649920198F59A3B53EA7C81503935DEF05E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BFCDAF0CFD10D67417F172B29F830676249E631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C0680A8F698A8F35416CE75A2356C661641B7D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F1F0198EC371523C2BEEAB18E73243B7B5F5D0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D98372962A0D30238C43F12D007AFE39E995B24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47E7DF78FEB33C4D463D475ACA6A5FCA4DE8ACF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BD4A20D743286D24CF77C38E693ECBCE8CD3A7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DD4C5922A070C5C0CE53FC4868A2D61BF64A7C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C648DB5BA0DE7A010730BEEDB7FEADB7EB4A556);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61896E01350C3D7139AB7C79A29A3A8ED072B0C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67A54AB78AD61DDEB268617E3EE621D1193804DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69246FD8ECCD71895CF44BE2EB6A80E686C5A018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral783C5B36660265F9D49078CA35348CD0ABDD49DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C5B2C0D17D684D4380087821D68BB021A77AA5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D28F1F930CE88A866A5AFD45B7587A776D2A2E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral935884DFDF8F8A8A6D67558F0B4C92779D175C75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFECF3A5E478A812AD9761D0C14980023E407962);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB1692DA8ED7544A3193330A7D73D82D06F61206);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6370F4D10E7342974C38CE91A5C8121AA774FD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC5A4102A5DDF34A7044AFF9259491C106ED8FB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD83A084C77919D323023FA38BD9EC97511C0C3F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE31FBB002AD5481E70CB59BB178B49C5B9330F0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE44C95DC2315580987319331D4B060BF8AB6A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAE55AFF6F18607FEDBE2F4C0C6BA4D4F219D504);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF1B24927A3EECD0984D30EA640A9B0CBAA6729C);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(HTTP_REQUEST_HEADER_ID__cctor_mF6227C1ABC6104B748D7D7FA799EB384DB8EB5AE_RuntimeMethod_var);
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)41));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral69246FD8ECCD71895CF44BE2EB6A80E686C5A018);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral69246FD8ECCD71895CF44BE2EB6A80E686C5A018);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral4BD4A20D743286D24CF77C38E693ECBCE8CD3A7E);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral4BD4A20D743286D24CF77C38E693ECBCE8CD3A7E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1C0680A8F698A8F35416CE75A2356C661641B7D9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1C0680A8F698A8F35416CE75A2356C661641B7D9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralFAE55AFF6F18607FEDBE2F4C0C6BA4D4F219D504);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralFAE55AFF6F18607FEDBE2F4C0C6BA4D4F219D504);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral47E7DF78FEB33C4D463D475ACA6A5FCA4DE8ACF8);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral47E7DF78FEB33C4D463D475ACA6A5FCA4DE8ACF8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralCC5A4102A5DDF34A7044AFF9259491C106ED8FB6);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralCC5A4102A5DDF34A7044AFF9259491C106ED8FB6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral935884DFDF8F8A8A6D67558F0B4C92779D175C75);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral935884DFDF8F8A8A6D67558F0B4C92779D175C75);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral4DD4C5922A070C5C0CE53FC4868A2D61BF64A7C3);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral4DD4C5922A070C5C0CE53FC4868A2D61BF64A7C3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralFF1B24927A3EECD0984D30EA640A9B0CBAA6729C);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteralFF1B24927A3EECD0984D30EA640A9B0CBAA6729C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral7C5B2C0D17D684D4380087821D68BB021A77AA5D);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral7C5B2C0D17D684D4380087821D68BB021A77AA5D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral8D28F1F930CE88A866A5AFD45B7587A776D2A2E5);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteral8D28F1F930CE88A866A5AFD45B7587A776D2A2E5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral1F1F0198EC371523C2BEEAB18E73243B7B5F5D0D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteral1F1F0198EC371523C2BEEAB18E73243B7B5F5D0D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral0E5584AFF0328C3E9B727CFB3887E9E710B0F53D);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral0E5584AFF0328C3E9B727CFB3887E9E710B0F53D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral015C9226A90A65B547DB1B59894F3908A8F2CC06);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteral015C9226A90A65B547DB1B59894F3908A8F2CC06);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral67A54AB78AD61DDEB268617E3EE621D1193804DC);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteral67A54AB78AD61DDEB268617E3EE621D1193804DC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralD83A084C77919D323023FA38BD9EC97511C0C3F1);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteralD83A084C77919D323023FA38BD9EC97511C0C3F1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral783C5B36660265F9D49078CA35348CD0ABDD49DF);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteral783C5B36660265F9D49078CA35348CD0ABDD49DF);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral61896E01350C3D7139AB7C79A29A3A8ED072B0C0);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteral61896E01350C3D7139AB7C79A29A3A8ED072B0C0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralAFECF3A5E478A812AD9761D0C14980023E407962);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteralAFECF3A5E478A812AD9761D0C14980023E407962);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralE31FBB002AD5481E70CB59BB178B49C5B9330F0E);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)_stringLiteralE31FBB002AD5481E70CB59BB178B49C5B9330F0E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral5C648DB5BA0DE7A010730BEEDB7FEADB7EB4A556);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteral5C648DB5BA0DE7A010730BEEDB7FEADB7EB4A556);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteralC6370F4D10E7342974C38CE91A5C8121AA774FD8);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)_stringLiteralC6370F4D10E7342974C38CE91A5C8121AA774FD8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral3D98372962A0D30238C43F12D007AFE39E995B24);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteral3D98372962A0D30238C43F12D007AFE39E995B24);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralBB1692DA8ED7544A3193330A7D73D82D06F61206);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)_stringLiteralBB1692DA8ED7544A3193330A7D73D82D06F61206);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral1488F649920198F59A3B53EA7C81503935DEF05E);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteral1488F649920198F59A3B53EA7C81503935DEF05E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)_stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralEBE44C95DC2315580987319331D4B060BF8AB6A8);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteralEBE44C95DC2315580987319331D4B060BF8AB6A8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral1BFCDAF0CFD10D67417F172B29F830676249E631);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)_stringLiteral1BFCDAF0CFD10D67417F172B29F830676249E631);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		((HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_StaticFields*)il2cpp_codegen_static_fields_for(HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var))->set_m_Strings_0(L_41);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
