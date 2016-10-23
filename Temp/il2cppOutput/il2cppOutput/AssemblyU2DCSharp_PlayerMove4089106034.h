#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t3296505762;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMove
struct  PlayerMove_t4089106034  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.NavMeshAgent PlayerMove::agent
	NavMeshAgent_t3296505762 * ___agent_2;
	// UnityEngine.RaycastHit PlayerMove::hit
	RaycastHit_t46221527  ___hit_3;
	// UnityEngine.Ray PlayerMove::ray
	Ray_t1522967639  ___ray_4;

public:
	inline static int32_t get_offset_of_agent_2() { return static_cast<int32_t>(offsetof(PlayerMove_t4089106034, ___agent_2)); }
	inline NavMeshAgent_t3296505762 * get_agent_2() const { return ___agent_2; }
	inline NavMeshAgent_t3296505762 ** get_address_of_agent_2() { return &___agent_2; }
	inline void set_agent_2(NavMeshAgent_t3296505762 * value)
	{
		___agent_2 = value;
		Il2CppCodeGenWriteBarrier(&___agent_2, value);
	}

	inline static int32_t get_offset_of_hit_3() { return static_cast<int32_t>(offsetof(PlayerMove_t4089106034, ___hit_3)); }
	inline RaycastHit_t46221527  get_hit_3() const { return ___hit_3; }
	inline RaycastHit_t46221527 * get_address_of_hit_3() { return &___hit_3; }
	inline void set_hit_3(RaycastHit_t46221527  value)
	{
		___hit_3 = value;
	}

	inline static int32_t get_offset_of_ray_4() { return static_cast<int32_t>(offsetof(PlayerMove_t4089106034, ___ray_4)); }
	inline Ray_t1522967639  get_ray_4() const { return ___ray_4; }
	inline Ray_t1522967639 * get_address_of_ray_4() { return &___ray_4; }
	inline void set_ray_4(Ray_t1522967639  value)
	{
		___ray_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
