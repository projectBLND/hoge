#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// CameraController
struct CameraController_t3473169601;
// GameManager
struct GameManager_t2369589051;
// PlayerMove
struct PlayerMove_t4089106034;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t3296505762;
// System.Object
struct Il2CppObject;
// PlayerMove02
struct PlayerMove02_t4030791668;
// SceneViewCamera
struct SceneViewCamera_t2359429046;
// TestScript01
struct TestScript01_t471079646;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraController3473169601.h"
#include "AssemblyU2DCSharp_CameraController3473169601MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "mscorlib_System_Single958209021.h"
#include "AssemblyU2DCSharp_GameManager2369589051.h"
#include "AssemblyU2DCSharp_GameManager2369589051MethodDeclarations.h"
#include "mscorlib_System_Int322847414787.h"
#include "AssemblyU2DCSharp_PlayerMove4089106034.h"
#include "AssemblyU2DCSharp_PlayerMove4089106034MethodDeclarations.h"
#include "UnityEngine_UnityEngine_NavMeshAgent3296505762.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera3533968274MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Physics2601443956MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527MethodDeclarations.h"
#include "UnityEngine_UnityEngine_NavMeshAgent3296505762MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "AssemblyU2DCSharp_PlayerMove024030791668.h"
#include "AssemblyU2DCSharp_PlayerMove024030791668MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1588791936MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf1597001355MethodDeclarations.h"
#include "AssemblyU2DCSharp_SceneViewCamera2359429046.h"
#include "AssemblyU2DCSharp_SceneViewCamera2359429046MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time1525492538MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_TestScript01471079646.h"
#include "AssemblyU2DCSharp_TestScript01471079646MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.NavMeshAgent>()
#define Component_GetComponent_TisNavMeshAgent_t3296505762_m3159610649(__this, method) ((  NavMeshAgent_t3296505762 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m1305907962 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m253045754 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CameraController::Update()
extern "C"  void CameraController_Update_m3555303251 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m3498734243(L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m4112277136 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
extern Il2CppClass* GameManager_t2369589051_il2cpp_TypeInfo_var;
extern const uint32_t GameManager__cctor_m2444443421_MetadataUsageId;
extern "C"  void GameManager__cctor_m2444443421 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager__cctor_m2444443421_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->set_angleOfUi_2(((int32_t)45));
		return;
	}
}
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m3059414928 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m358434429 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayerMove::.ctor()
extern "C"  void PlayerMove__ctor_m453831273 (PlayerMove_t4089106034 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMove::Start()
extern const MethodInfo* Component_GetComponent_TisNavMeshAgent_t3296505762_m3159610649_MethodInfo_var;
extern const uint32_t PlayerMove_Start_m3695936361_MetadataUsageId;
extern "C"  void PlayerMove_Start_m3695936361 (PlayerMove_t4089106034 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerMove_Start_m3695936361_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NavMeshAgent_t3296505762 * L_0 = Component_GetComponent_TisNavMeshAgent_t3296505762_m3159610649(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_t3296505762_m3159610649_MethodInfo_var);
		__this->set_agent_2(L_0);
		return;
	}
}
// System.Void PlayerMove::Update()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern const uint32_t PlayerMove_Update_m2910729668_MetadataUsageId;
extern "C"  void PlayerMove_Update_m2910729668 (PlayerMove_t4089106034 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerMove_Update_m2910729668_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2031691843(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		Camera_t3533968274 * L_1 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		Vector3_t3525329789  L_2 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Ray_t1522967639  L_3 = Camera_ScreenPointToRay_m1733083890(L_1, L_2, /*hidden argument*/NULL);
		__this->set_ray_4(L_3);
		Ray_t1522967639  L_4 = __this->get_ray_4();
		RaycastHit_t46221527 * L_5 = __this->get_address_of_hit_3();
		bool L_6 = Physics_Raycast_m1235528076(NULL /*static, unused*/, L_4, L_5, (100.0f), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		NavMeshAgent_t3296505762 * L_7 = __this->get_agent_2();
		RaycastHit_t46221527 * L_8 = __this->get_address_of_hit_3();
		Vector3_t3525329789  L_9 = RaycastHit_get_point_m4165497838(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		NavMeshAgent_SetDestination_m1934812347(L_7, L_9, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void PlayerMove02::.ctor()
extern "C"  void PlayerMove02__ctor_m3711280423 (PlayerMove02_t4030791668 * __this, const MethodInfo* method)
{
	{
		__this->set_spd_4((0.02f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMove02::Start()
extern Il2CppClass* Debug_t1588791936_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3432422020;
extern const uint32_t PlayerMove02_Start_m2658418215_MetadataUsageId;
extern "C"  void PlayerMove02_Start_m2658418215 (PlayerMove02_t4030791668 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerMove02_Start_m2658418215_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1588791936_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral3432422020, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMove02::Update()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1588791936_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4040624636;
extern const uint32_t PlayerMove02_Update_m812438214_MetadataUsageId;
extern "C"  void PlayerMove02_Update_m812438214 (PlayerMove02_t4030791668 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerMove02_Update_m812438214_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t3525329789  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00ae;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1588791936_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral4040624636, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		Vector3_t3525329789  L_1 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t3525329789 * L_2 = __this->get_address_of__lastMousePos_3();
		float L_3 = L_2->get_x_1();
		float L_4 = (&V_0)->get_x_1();
		V_1 = ((float)((float)L_3-(float)L_4));
		Vector3_t3525329789 * L_5 = __this->get_address_of__lastMousePos_3();
		float L_6 = L_5->get_y_2();
		float L_7 = (&V_0)->get_y_2();
		V_2 = ((float)((float)L_6-(float)L_7));
		float L_8 = V_1;
		float L_9 = V_2;
		V_3 = ((float)((float)L_8+(float)L_9));
		float L_10 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_11 = fabsf(L_10);
		if ((!(((float)L_11) < ((float)(0.01f)))))
		{
			goto IL_0067;
		}
	}
	{
		__this->set_spd_4((0.02f));
		goto IL_0072;
	}

IL_0067:
	{
		__this->set_spd_4((0.005f));
	}

IL_0072:
	{
		Transform_t284553113 * L_12 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3525329789  L_13 = Transform_get_forward_m877665793(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		(&V_4)->set_y_2((0.0f));
		Transform_t284553113 * L_14 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_15 = L_14;
		NullCheck(L_15);
		Vector3_t3525329789  L_16 = Transform_get_position_m2211398607(L_15, /*hidden argument*/NULL);
		Vector3_t3525329789  L_17 = V_4;
		float L_18 = __this->get_spd_4();
		Vector3_t3525329789  L_19 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		Vector3_t3525329789  L_20 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_16, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_position_m3111394108(L_15, L_20, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		Vector3_t3525329789  L_21 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__lastMousePos_3(L_21);
		return;
	}
}
// System.Void SceneViewCamera::.ctor()
extern Il2CppClass* GameManager_t2369589051_il2cpp_TypeInfo_var;
extern const uint32_t SceneViewCamera__ctor_m169086069_MetadataUsageId;
extern "C"  void SceneViewCamera__ctor_m169086069 (SceneViewCamera_t2359429046 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SceneViewCamera__ctor_m169086069_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t2369589051_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->get_angleOfUi_2();
		__this->set__angleOfUi_2(L_0);
		__this->set_wheelSpeed_3((1.0f));
		__this->set_moveSpeed_4((0.3f));
		__this->set_rotateSpeed_5((0.3f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneViewCamera::Update()
extern "C"  void SceneViewCamera_Update_m2673562936 (SceneViewCamera_t2359429046 * __this, const MethodInfo* method)
{
	{
		SceneViewCamera_MouseUpdate_m3732378209(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneViewCamera::MouseUpdate()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2268470611;
extern const uint32_t SceneViewCamera_MouseUpdate_m3732378209_MetadataUsageId;
extern "C"  void SceneViewCamera_MouseUpdate_m3732378209 (SceneViewCamera_t2359429046 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SceneViewCamera_MouseUpdate_m3732378209_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2268470611, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButtonDown_m2031691843(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetMouseButtonDown_m2031691843(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetMouseButtonDown_m2031691843(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		Vector3_t3525329789  L_4 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_preMousePos_6(L_4);
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		Vector3_t3525329789  L_5 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		SceneViewCamera_MouseDrag_m1376027277(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneViewCamera::MouseWheel(System.Single)
extern "C"  void SceneViewCamera_MouseWheel_m1659470310 (SceneViewCamera_t2359429046 * __this, float ___delta0, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t3525329789  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		Transform_t284553113 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3525329789  L_4 = Transform_get_forward_m877665793(L_3, /*hidden argument*/NULL);
		float L_5 = ___delta0;
		Vector3_t3525329789  L_6 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_wheelSpeed_3();
		Vector3_t3525329789  L_8 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t3525329789  L_9 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_2, L_8, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m3111394108(L_1, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneViewCamera::MouseDrag(UnityEngine.Vector3)
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern const uint32_t SceneViewCamera_MouseDrag_m1376027277_MetadataUsageId;
extern "C"  void SceneViewCamera_MouseDrag_m1376027277 (SceneViewCamera_t2359429046 * __this, Vector3_t3525329789  ___mousePos0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SceneViewCamera_MouseDrag_m1376027277_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3525329789  L_0 = ___mousePos0;
		Vector3_t3525329789  L_1 = __this->get_preMousePos_6();
		Vector3_t3525329789  L_2 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Quaternion_t1891715979  L_3 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, (0.0f), (0.0f), (-45.0f), /*hidden argument*/NULL);
		Vector3_t3525329789  L_4 = V_0;
		Vector3_t3525329789  L_5 = Quaternion_op_Multiply_m3771288979(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = Vector3_get_magnitude_m989985786((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_6) < ((float)(1.0E-05f)))))
		{
			goto IL_003a;
		}
	}
	{
		return;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		Transform_t284553113 * L_8 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_9 = V_0;
		Vector3_t3525329789  L_10 = Vector3_op_UnaryNegation_m3293197314(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		float L_11 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_12 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		float L_13 = __this->get_moveSpeed_4();
		Vector3_t3525329789  L_14 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_Translate_m2849099360(L_8, L_14, /*hidden argument*/NULL);
		goto IL_00a0;
	}

IL_0070:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_15 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a0;
		}
	}
	{
		float L_16 = (&V_0)->get_y_2();
		float L_17 = (&V_0)->get_x_1();
		Vector2_t3525329788  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector2__ctor_m1517109030(&L_18, ((-L_16)), L_17, /*hidden argument*/NULL);
		float L_19 = __this->get_rotateSpeed_5();
		Vector2_t3525329788  L_20 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		SceneViewCamera_CameraRotate_m281004619(__this, L_20, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		Vector3_t3525329789  L_21 = ___mousePos0;
		__this->set_preMousePos_6(L_21);
		return;
	}
}
// System.Void SceneViewCamera::CameraRotate(UnityEngine.Vector2)
extern "C"  void SceneViewCamera_CameraRotate_m281004619 (SceneViewCamera_t2359429046 * __this, Vector2_t3525329788  ___angle0, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3525329789  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		Transform_t284553113 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3525329789  L_4 = Transform_get_right_m2070836824(L_3, /*hidden argument*/NULL);
		float L_5 = (&___angle0)->get_x_1();
		NullCheck(L_0);
		Transform_RotateAround_m2745906802(L_0, L_2, L_4, L_5, /*hidden argument*/NULL);
		Transform_t284553113 * L_6 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_7 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3525329789  L_8 = Transform_get_position_m2211398607(L_7, /*hidden argument*/NULL);
		Vector3_t3525329789  L_9 = Vector3_get_up_m4046647141(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = (&___angle0)->get_y_2();
		NullCheck(L_6);
		Transform_RotateAround_m2745906802(L_6, L_8, L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestScript01::.ctor()
extern "C"  void TestScript01__ctor_m258027901 (TestScript01_t471079646 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestScript01::Start()
extern "C"  void TestScript01_Start_m3500132989 (TestScript01_t471079646 * __this, const MethodInfo* method)
{
	{
		__this->set_num_2((10.0f));
		__this->set_i1_3(0);
		return;
	}
}
// System.Void TestScript01::Update()
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t TestScript01_Update_m1135792432_MetadataUsageId;
extern "C"  void TestScript01_Update_m1135792432 (TestScript01_t471079646 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TestScript01_Update_m1135792432_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_num_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_2 = sinf(((float)((float)L_0*(float)L_1)));
		__this->set_sin_4(L_2);
		Transform_t284553113 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_4 = __this->get_sin_4();
		float L_5 = __this->get_sin_4();
		float L_6 = __this->get_sin_4();
		NullCheck(L_3);
		Transform_Rotate_m3498734243(L_3, ((float)((float)(-1.0f)-(float)L_4)), ((float)((float)(-1.0f)-(float)L_5)), ((float)((float)(1.0f)+(float)L_6)), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
