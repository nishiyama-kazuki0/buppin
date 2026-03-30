#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
240,
252,
253,
254,
255,
256,
257,
258,
259,
260,
263,
264,
265,
455,
456,
457,
486,
487,
488,
508,
509,
510,
511,
628,
629,
630,
633,
677,
678,
679,
682,
684,
686,
688,
693,
701,
702,
703,
704,
705,
706,
707,
708,
709,
710,
711,
712,
713,
714,
715,
716,
717,
719,
720,
721,
722,
723,
724,
725,
819,
820,
821,
822,
823,
824,
825,
826,
827,
828,
829,
830,
831,
832,
833,
834,
835,
837,
838,
839,
840,
841,
842,
843,
910,
911,
980,
987,
990,
992,
998,
999,
1001,
1002,
1006,
1008,
1011,
1012,
1014,
1016,
1017,
1020,
1021,
1022,
1025,
1027,
1030,
1032,
1034,
1041,
1046,
1121,
1123,
1125,
1135,
1136,
1137,
1138,
1140,
1147,
1148,
1149,
1150,
1151,
1159,
1160,
1161,
1165,
1166,
1169,
1173,
1174,
1175,
1459,
1674,
1675,
10005,
10006,
10008,
10009,
10010,
10011,
10012,
10014,
10016,
10018,
10019,
10030,
10032,
10037,
10039,
10041,
10043,
10095,
10096,
10098,
10099,
10100,
10101,
10102,
10104,
10106,
11249,
11253,
11255,
11256,
11257,
11258,
11521,
11522,
11523,
11524,
11542,
11543,
11544,
11546,
11627,
11723,
11725,
11727,
11737,
11738,
11739,
11740,
11741,
12243,
12244,
12249,
12250,
12288,
12333,
12340,
12347,
12358,
12362,
12388,
12474,
12476,
12487,
12489,
12490,
12491,
12498,
12513,
12534,
12535,
12543,
12545,
12552,
12553,
12556,
12558,
12563,
12569,
12570,
12577,
12579,
12591,
12594,
12595,
12596,
12607,
12616,
12622,
12623,
12624,
12626,
12627,
12644,
12646,
12660,
12683,
12684,
12685,
12710,
12715,
12746,
12747,
13352,
13374,
13470,
13471,
13749,
13750,
13758,
13759,
13760,
13766,
13883,
14523,
14524,
15120,
15121,
15122,
15127,
15137,
16103,
16124,
16126,
16128,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetInterfaceMapData_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_IsUnmanagedFunctionPointerInternal (int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 240,
ves_icall_System_Array_InternalCreate,
// token 252,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 253,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 254,
ves_icall_System_Array_CanChangePrimitive,
// token 255,
ves_icall_System_Array_FastCopy,
// token 256,
ves_icall_System_Array_GetLengthInternal_raw,
// token 257,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 258,
ves_icall_System_Array_GetGenericValue_icall,
// token 259,
ves_icall_System_Array_GetValueImpl_raw,
// token 260,
ves_icall_System_Array_SetGenericValue_icall,
// token 263,
ves_icall_System_Array_SetValueImpl_raw,
// token 264,
ves_icall_System_Array_InitializeInternal_raw,
// token 265,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 455,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 456,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 457,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 486,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 487,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 488,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 508,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 509,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 510,
ves_icall_System_Enum_InternalGetCorElementType,
// token 511,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 628,
ves_icall_System_Environment_get_ProcessorCount,
// token 629,
ves_icall_System_Environment_get_TickCount,
// token 630,
ves_icall_System_Environment_get_TickCount64,
// token 633,
ves_icall_System_Environment_FailFast_raw,
// token 677,
ves_icall_System_GC_GetCollectionCount,
// token 678,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 679,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 682,
ves_icall_System_GC_SuppressFinalize_raw,
// token 684,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 686,
ves_icall_System_GC_GetGCMemoryInfo,
// token 688,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 693,
ves_icall_System_Object_MemberwiseClone_raw,
// token 701,
ves_icall_System_Math_Acos,
// token 702,
ves_icall_System_Math_Acosh,
// token 703,
ves_icall_System_Math_Asin,
// token 704,
ves_icall_System_Math_Asinh,
// token 705,
ves_icall_System_Math_Atan,
// token 706,
ves_icall_System_Math_Atan2,
// token 707,
ves_icall_System_Math_Atanh,
// token 708,
ves_icall_System_Math_Cbrt,
// token 709,
ves_icall_System_Math_Ceiling,
// token 710,
ves_icall_System_Math_Cos,
// token 711,
ves_icall_System_Math_Cosh,
// token 712,
ves_icall_System_Math_Exp,
// token 713,
ves_icall_System_Math_Floor,
// token 714,
ves_icall_System_Math_Log,
// token 715,
ves_icall_System_Math_Log10,
// token 716,
ves_icall_System_Math_Pow,
// token 717,
ves_icall_System_Math_Sin,
// token 719,
ves_icall_System_Math_Sinh,
// token 720,
ves_icall_System_Math_Sqrt,
// token 721,
ves_icall_System_Math_Tan,
// token 722,
ves_icall_System_Math_Tanh,
// token 723,
ves_icall_System_Math_FusedMultiplyAdd,
// token 724,
ves_icall_System_Math_Log2,
// token 725,
ves_icall_System_Math_ModF,
// token 819,
ves_icall_System_MathF_Acos,
// token 820,
ves_icall_System_MathF_Acosh,
// token 821,
ves_icall_System_MathF_Asin,
// token 822,
ves_icall_System_MathF_Asinh,
// token 823,
ves_icall_System_MathF_Atan,
// token 824,
ves_icall_System_MathF_Atan2,
// token 825,
ves_icall_System_MathF_Atanh,
// token 826,
ves_icall_System_MathF_Cbrt,
// token 827,
ves_icall_System_MathF_Ceiling,
// token 828,
ves_icall_System_MathF_Cos,
// token 829,
ves_icall_System_MathF_Cosh,
// token 830,
ves_icall_System_MathF_Exp,
// token 831,
ves_icall_System_MathF_Floor,
// token 832,
ves_icall_System_MathF_Log,
// token 833,
ves_icall_System_MathF_Log10,
// token 834,
ves_icall_System_MathF_Pow,
// token 835,
ves_icall_System_MathF_Sin,
// token 837,
ves_icall_System_MathF_Sinh,
// token 838,
ves_icall_System_MathF_Sqrt,
// token 839,
ves_icall_System_MathF_Tan,
// token 840,
ves_icall_System_MathF_Tanh,
// token 841,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 842,
ves_icall_System_MathF_Log2,
// token 843,
ves_icall_System_MathF_ModF,
// token 910,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 911,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 980,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 987,
ves_icall_RuntimeType_make_array_type_raw,
// token 990,
ves_icall_RuntimeType_make_byref_type_raw,
// token 992,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 998,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 999,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 1001,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 1002,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 1006,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 1008,
ves_icall_RuntimeType_GetPacking_raw,
// token 1011,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 1012,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 1014,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 1016,
ves_icall_System_RuntimeType_getFullName_raw,
// token 1017,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 1020,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 1021,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 1022,
ves_icall_RuntimeType_GetFields_native_raw,
// token 1025,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 1027,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 1030,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 1032,
ves_icall_RuntimeType_GetName_raw,
// token 1034,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1041,
ves_icall_RuntimeType_IsUnmanagedFunctionPointerInternal,
// token 1046,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 1121,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1123,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1125,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1135,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1136,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1137,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1138,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1140,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1147,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1148,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1149,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1150,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1151,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1159,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1160,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1161,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1165,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1166,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1169,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1173,
ves_icall_System_String_FastAllocateString_raw,
// token 1174,
ves_icall_System_String_InternalIsInterned_raw,
// token 1175,
ves_icall_System_String_InternalIntern_raw,
// token 1459,
ves_icall_System_Type_internal_from_handle_raw,
// token 1674,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1675,
ves_icall_System_ValueType_Equals_raw,
// token 10005,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 10006,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 10008,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 10009,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 10010,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 10011,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 10012,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 10014,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 10016,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 10018,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 10019,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 10030,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 10032,
mono_monitor_exit_icall_raw,
// token 10037,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 10039,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 10041,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 10043,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 10095,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 10096,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 10098,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 10099,
ves_icall_System_Threading_Thread_GetState_raw,
// token 10100,
ves_icall_System_Threading_Thread_SetState_raw,
// token 10101,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 10102,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 10104,
ves_icall_System_Threading_Thread_YieldInternal,
// token 10106,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 11249,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 11253,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 11255,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 11256,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 11257,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 11258,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 11521,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 11522,
ves_icall_System_GCHandle_InternalFree_raw,
// token 11523,
ves_icall_System_GCHandle_InternalGet_raw,
// token 11524,
ves_icall_System_GCHandle_InternalSet_raw,
// token 11542,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 11543,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 11544,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 11546,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 11627,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 11723,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 11725,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 11727,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 11737,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 11738,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 11739,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 11740,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 11741,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 12243,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 12244,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 12249,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 12250,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 12288,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 12333,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 12340,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 12347,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 12358,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 12362,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 12388,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 12474,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 12476,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 12487,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 12489,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 12490,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 12491,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 12498,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 12513,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 12534,
ves_icall_reflection_get_token_raw,
// token 12535,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 12543,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 12545,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 12552,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 12553,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 12556,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 12558,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 12563,
ves_icall_reflection_get_token_raw,
// token 12569,
ves_icall_get_method_info_raw,
// token 12570,
ves_icall_get_method_attributes,
// token 12577,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 12579,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 12591,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 12594,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 12595,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 12596,
ves_icall_reflection_get_token_raw,
// token 12607,
ves_icall_InternalInvoke_raw,
// token 12616,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 12622,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 12623,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 12624,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 12626,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 12627,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 12644,
ves_icall_InvokeClassConstructor_raw,
// token 12646,
ves_icall_InternalInvoke_raw,
// token 12660,
ves_icall_reflection_get_token_raw,
// token 12683,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 12684,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 12685,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 12710,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 12715,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 12746,
ves_icall_reflection_get_token_raw,
// token 12747,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 13352,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 13374,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 13470,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 13471,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 13749,
ves_icall_ModuleBuilder_basic_init_raw,
// token 13750,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 13758,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 13759,
ves_icall_ModuleBuilder_getToken_raw,
// token 13760,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 13766,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 13883,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 14523,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 14524,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 15120,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 15121,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 15122,
ves_icall_System_Diagnostics_Debugger_Log,
// token 15127,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 15137,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 16103,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 16124,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 16126,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 16128,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
0,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
};
