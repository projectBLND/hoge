﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.InvalidOperationException
struct InvalidOperationException_t2420574324;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.InvalidOperationException::.ctor()
extern "C"  void InvalidOperationException__ctor_m355676978 (InvalidOperationException_t2420574324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m1485483280 (InvalidOperationException_t2420574324 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C"  void InvalidOperationException__ctor_m2119621158 (InvalidOperationException_t2420574324 * __this, String_t* ___message0, Exception_t1967233988 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void InvalidOperationException__ctor_m3886056819 (InvalidOperationException_t2420574324 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
