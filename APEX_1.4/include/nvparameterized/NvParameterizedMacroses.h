//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Copyright (c) 2008-2018 NVIDIA Corporation. All rights reserved.
 
#ifndef NV_PARAMETERIZED_MACROSES_H
#define NV_PARAMETERIZED_MACROSES_H

/** Case labels for different NvParameterized::DataType's
*/
#define NV_PARAMETRIZED_AGGREGATE_DATATYPE_LABELS \
case NvParameterized::TYPE_ARRAY:\
case NvParameterized::TYPE_STRUCT:\

#define NV_PARAMETRIZED_LINAL_DATATYPE_LABELS \
case NvParameterized::TYPE_VEC2:\
case NvParameterized::TYPE_VEC3:\
case NvParameterized::TYPE_VEC4:\
case NvParameterized::TYPE_QUAT:\
case NvParameterized::TYPE_MAT33:\
case NvParameterized::TYPE_BOUNDS3:\
case NvParameterized::TYPE_MAT44:\
case NvParameterized::TYPE_TRANSFORM:\
case NvParameterized::TYPE_MAT34:
 
#define NV_PARAMETRIZED_ARITHMETIC_DATATYPE_LABELS \
case NvParameterized::TYPE_I8:\
case NvParameterized::TYPE_I16:\
case NvParameterized::TYPE_I32:\
case NvParameterized::TYPE_I64:\
case NvParameterized::TYPE_U8:\
case NvParameterized::TYPE_U16:\
case NvParameterized::TYPE_U32:\
case NvParameterized::TYPE_U64:\
case NvParameterized::TYPE_F32:\
case NvParameterized::TYPE_F64:\
case NvParameterized::TYPE_BOOL: 

#define NV_PARAMETRIZED_STRING_DATATYPE_LABELS \
case NvParameterized::TYPE_STRING:

#define NV_PARAMETRIZED_REF_DATATYPE_LABELS \
case NvParameterized::TYPE_REF:

#define NV_PARAMETRIZED_ENUM_DATATYPE_LABELS \
case NvParameterized::TYPE_ENUM:

#define NV_PARAMETRIZED_SERVICE_DATATYPE_LABELS \
case NvParameterized::TYPE_POINTER:

#define NV_PARAMETRIZED_UNDEFINED_AND_LAST_DATATYPE_LABELS \
case NvParameterized::TYPE_UNDEFINED:\
case NvParameterized::TYPE_LAST:

/** Case labels for composite conditions of switch conditions*/
/***********************************************************************/
#define NV_PARAMETRIZED_NO_AGGREGATE_DATATYPE_LABELS \
/* NV_PARAMETRIZED_AGGREGATE_DATATYPE_LABELS*/ \
NV_PARAMETRIZED_LINAL_DATATYPE_LABELS \
NV_PARAMETRIZED_ARITHMETIC_DATATYPE_LABELS \
NV_PARAMETRIZED_STRING_DATATYPE_LABELS \
NV_PARAMETRIZED_REF_DATATYPE_LABELS \
NV_PARAMETRIZED_ENUM_DATATYPE_LABELS \
NV_PARAMETRIZED_SERVICE_DATATYPE_LABELS \
NV_PARAMETRIZED_UNDEFINED_AND_LAST_DATATYPE_LABELS

#define NV_PARAMETRIZED_NO_AGGREGATE_AND_ARITHMETIC_DATATYPE_LABELS \
/* NV_PARAMETRIZED_AGGREGATE_DATATYPE_LABELS*/ \
NV_PARAMETRIZED_LINAL_DATATYPE_LABELS \
/*NV_PARAMETRIZED_ARITHMETIC_DATATYPE_LABELS*/ \
NV_PARAMETRIZED_STRING_DATATYPE_LABELS \
NV_PARAMETRIZED_REF_DATATYPE_LABELS \
NV_PARAMETRIZED_ENUM_DATATYPE_LABELS \
NV_PARAMETRIZED_SERVICE_DATATYPE_LABELS \
NV_PARAMETRIZED_UNDEFINED_AND_LAST_DATATYPE_LABELS

#define NV_PARAMETRIZED_NO_AGGREGATE_AND_REF_DATATYPE_LABELS \
/* NV_PARAMETRIZED_AGGREGATE_DATATYPE_LABELS*/ \
NV_PARAMETRIZED_LINAL_DATATYPE_LABELS \
NV_PARAMETRIZED_ARITHMETIC_DATATYPE_LABELS \
NV_PARAMETRIZED_STRING_DATATYPE_LABELS \
/*NV_PARAMETRIZED_REF_DATATYPE_LABELS*/ \
NV_PARAMETRIZED_ENUM_DATATYPE_LABELS \
NV_PARAMETRIZED_SERVICE_DATATYPE_LABELS \
NV_PARAMETRIZED_UNDEFINED_AND_LAST_DATATYPE_LABELS

#define NV_PARAMETRIZED_NO_ARITHMETIC_AND_LINAL_DATATYPE_LABELS \
NV_PARAMETRIZED_AGGREGATE_DATATYPE_LABELS \
/*NV_PARAMETRIZED_LINAL_DATATYPE_LABELS*/ \
/*NV_PARAMETRIZED_ARITHMETIC_DATATYPE_LABELS*/ \
NV_PARAMETRIZED_STRING_DATATYPE_LABELS \
NV_PARAMETRIZED_REF_DATATYPE_LABELS \
NV_PARAMETRIZED_ENUM_DATATYPE_LABELS \
NV_PARAMETRIZED_SERVICE_DATATYPE_LABELS \
NV_PARAMETRIZED_UNDEFINED_AND_LAST_DATATYPE_LABELS

#define NV_PARAMETRIZED_SERVICE_AND_LAST_DATATYPE_LABELS \
NV_PARAMETRIZED_SERVICE_DATATYPE_LABELS \
case NvParameterized::TYPE_LAST:

#define NV_PARAMETRIZED_LEGACY_DATATYPE_LABELS \
case NvParameterized::TYPE_MAT34:

#define NV_PARAMETRIZED_NO_MATH_DATATYPE_LABELS \
NV_PARAMETRIZED_AGGREGATE_DATATYPE_LABELS \
NV_PARAMETRIZED_STRING_DATATYPE_LABELS \
NV_PARAMETRIZED_REF_DATATYPE_LABELS \
NV_PARAMETRIZED_ENUM_DATATYPE_LABELS \
NV_PARAMETRIZED_SERVICE_DATATYPE_LABELS \
NV_PARAMETRIZED_UNDEFINED_AND_LAST_DATATYPE_LABELS

/***********************************************************************/

#endif // NV_PARAMETERIZED_MACROSES_H
