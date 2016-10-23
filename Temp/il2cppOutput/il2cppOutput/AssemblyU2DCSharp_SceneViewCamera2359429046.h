#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneViewCamera
struct  SceneViewCamera_t2359429046  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 SceneViewCamera::_angleOfUi
	int32_t ____angleOfUi_2;
	// System.Single SceneViewCamera::wheelSpeed
	float ___wheelSpeed_3;
	// System.Single SceneViewCamera::moveSpeed
	float ___moveSpeed_4;
	// System.Single SceneViewCamera::rotateSpeed
	float ___rotateSpeed_5;
	// UnityEngine.Vector3 SceneViewCamera::preMousePos
	Vector3_t3525329789  ___preMousePos_6;

public:
	inline static int32_t get_offset_of__angleOfUi_2() { return static_cast<int32_t>(offsetof(SceneViewCamera_t2359429046, ____angleOfUi_2)); }
	inline int32_t get__angleOfUi_2() const { return ____angleOfUi_2; }
	inline int32_t* get_address_of__angleOfUi_2() { return &____angleOfUi_2; }
	inline void set__angleOfUi_2(int32_t value)
	{
		____angleOfUi_2 = value;
	}

	inline static int32_t get_offset_of_wheelSpeed_3() { return static_cast<int32_t>(offsetof(SceneViewCamera_t2359429046, ___wheelSpeed_3)); }
	inline float get_wheelSpeed_3() const { return ___wheelSpeed_3; }
	inline float* get_address_of_wheelSpeed_3() { return &___wheelSpeed_3; }
	inline void set_wheelSpeed_3(float value)
	{
		___wheelSpeed_3 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(SceneViewCamera_t2359429046, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_5() { return static_cast<int32_t>(offsetof(SceneViewCamera_t2359429046, ___rotateSpeed_5)); }
	inline float get_rotateSpeed_5() const { return ___rotateSpeed_5; }
	inline float* get_address_of_rotateSpeed_5() { return &___rotateSpeed_5; }
	inline void set_rotateSpeed_5(float value)
	{
		___rotateSpeed_5 = value;
	}

	inline static int32_t get_offset_of_preMousePos_6() { return static_cast<int32_t>(offsetof(SceneViewCamera_t2359429046, ___preMousePos_6)); }
	inline Vector3_t3525329789  get_preMousePos_6() const { return ___preMousePos_6; }
	inline Vector3_t3525329789 * get_address_of_preMousePos_6() { return &___preMousePos_6; }
	inline void set_preMousePos_6(Vector3_t3525329789  value)
	{
		___preMousePos_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
