﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t2029520850;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMove02
struct  PlayerMove02_t4030791668  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.CharacterController PlayerMove02::_controller
	CharacterController_t2029520850 * ____controller_2;
	// UnityEngine.Vector3 PlayerMove02::_lastMousePos
	Vector3_t3525329789  ____lastMousePos_3;
	// System.Single PlayerMove02::spd
	float ___spd_4;

public:
	inline static int32_t get_offset_of__controller_2() { return static_cast<int32_t>(offsetof(PlayerMove02_t4030791668, ____controller_2)); }
	inline CharacterController_t2029520850 * get__controller_2() const { return ____controller_2; }
	inline CharacterController_t2029520850 ** get_address_of__controller_2() { return &____controller_2; }
	inline void set__controller_2(CharacterController_t2029520850 * value)
	{
		____controller_2 = value;
		Il2CppCodeGenWriteBarrier(&____controller_2, value);
	}

	inline static int32_t get_offset_of__lastMousePos_3() { return static_cast<int32_t>(offsetof(PlayerMove02_t4030791668, ____lastMousePos_3)); }
	inline Vector3_t3525329789  get__lastMousePos_3() const { return ____lastMousePos_3; }
	inline Vector3_t3525329789 * get_address_of__lastMousePos_3() { return &____lastMousePos_3; }
	inline void set__lastMousePos_3(Vector3_t3525329789  value)
	{
		____lastMousePos_3 = value;
	}

	inline static int32_t get_offset_of_spd_4() { return static_cast<int32_t>(offsetof(PlayerMove02_t4030791668, ___spd_4)); }
	inline float get_spd_4() const { return ___spd_4; }
	inline float* get_address_of_spd_4() { return &___spd_4; }
	inline void set_spd_4(float value)
	{
		___spd_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
