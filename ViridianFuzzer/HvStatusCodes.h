//
// Auto-generated header file from extract_ret_codes_from_pdf.py
//
#define HV_STATUS_SUCCESS 0x0000
#define Reserved0 0x0001
#define HV_STATUS_INVALID_HYPERCALL_CODE 0x0002
#define HV_STATUS_INVALID_HYPERCALL_INPUT 0x0003
#define HV_STATUS_INVALID_ALIGNMENT 0x0004
#define HV_STATUS_INVALID_PARAMETER 0x0005
#define HV_STATUS_ACCESS_DENIED 0x0006
#define HV_STATUS_INVALID_PARTITION_STATE 0x0007
#define HV_STATUS_OPERATION_DENIED 0x0008
#define HV_STATUS_UNKNOWN_PROPERTY 0x0009
#define HV_STATUS_PROPERTY_VALUE_OUT_OF_RANGE 0x000A
#define HV_STATUS_INSUFFICIENT_MEMORY 0x000B
#define HV_STATUS_PARTITION_TOO_DEEP 0x000C
#define HV_STATUS_INVALID_PARTITION_ID 0x000D
#define HV_STATUS_INVALID_VP_INDEX 0x000E
#define Reserved1 0x000F
#define Reserved2 0x0010
#define HV_STATUS_INVALID_PORT_ID 0x0011
#define HV_STATUS_INVALID_CONNECTION_ID 0x0012
#define HV_STATUS_INSUFFICIENT_BUFFERS 0x0033
#define HV_STATUS_NOT_ACKNOWLEDGED 0x0014
#define HV_STATUS_INVALID_VP_STATE 0x0015
#define HV_STATUS_ACKNOWLEDGED 0x0016
#define HV_STATUS_INVALID_SAVE_RESTORE_STATE 0x0017
#define HV_STATUS_INVALID_SYNIC_STATE 0x0018
#define HV_STATUS_OBJECT_IN_USE 0x0019
#define HV_STATUS_INVALID_PROXIMITY_DOMAIN_INFO 0x001A
#define HV_STATUS_NO_DATA 0x001B
#define HV_STATUS_INACTIVE 0x001C
#define HV_STATUS_NO_RESOURCES 0x001D
#define HV_STATUS_FEATURE_UNAVAILABLE 0x001E
#define HV_STATUS_PARTIAL_PACKET 0x001F
#define HV_STATUS_PROCESSOR_FEATURE_SSE3_NOT_SUPPORTED 0x0020
#define HV_STATUS_PROCESSOR_FEATURE_LAHFSAHF_NOT_SUPPORTED 0x0021
#define HV_STATUS_PROCESSOR_FEATURE_SSSE3_NOT_SUPPORTED 0x0022
#define HV_STATUS_PROCESSOR_FEATURE_SSE4_1_NOT_SUPPORTED 0x0023
#define HV_STATUS_PROCESSOR_FEATURE_SSE4_2_NOT_SUPPORTED 0x0024
#define HV_STATUS_PROCESSOR_FEATURE_SSE4A_NOT_SUPPORTED 0x0025
#define HV_STATUS_PROCESSOR_FEATURE_XOP_NOT_SUPPORTED 0x0026
#define HV_STATUS_PROCESSOR_FEATURE_POPCNT_NOT_SUPPORTED 0x0027
#define HV_STATUS_PROCESSOR_FEATURE_CMPXCHG16B_NOT_SUPPORTED 0x0028
#define HV_STATUS_PROCESSOR_FEATURE_ALTMOVCR8_NOT_SUPPORTED 0x0029
#define HV_STATUS_PROCESSOR_FEATURE_LZCNT_NOT_SUPPORTED 0x002A
#define HV_STATUS_PROCESSOR_FEATURE_MISALIGNED_SSE_NOT_SUPPORTED 0x002B
#define HV_STATUS_PROCESSOR_FEATURE_MMX_EXT_NOT_SUPPORTED 0x002C
#define HV_STATUS_PROCESSOR_FEATURE_3DNOW_NOT_SUPPORTED 0x002D
#define HV_STATUS_PROCESSOR_FEATURE_EXTENDED_3DNOW_NOT_SUPPORTED 0x002E
#define HV_STATUS_PROCESSOR_FEATURE_PAGE_1GB_NOT_SUPPORTED 0x002F
#define HV_STATUS_PROCESSOR_CACHE_LINE_FLUSH_SIZE_INCOMPATIBLE 0x0030
#define HV_STATUS_PROCESSOR_FEATURE_XSAVE_NOT_SUPPORTED 0x0031
#define HV_STATUS_PROCESSOR_FEATURE_XSAVEOPT_NOT_SUPPORTED 0x0032
#define HV_STATUS_INSUFFICIENT_BUFFER 0x0033
#define HV_STATUS_PROCESSOR_FEATURE_XSAVE_AVX_NOT_SUPPORTED 0x0034
#define HV_STATUS_PROCESSOR_FEATURE_XSAVE_ FEATURE_NOT_SUPPORTED 0x0035
#define HV_STATUS_PROCESSOR_XSAVE_SAVE_AREA_INCOMPATIBLE 0x0036
#define HV_STATUS_INCOMPATIBLE_PROCESSOR 0x0037
#define HV_STATUS_INSUFFICIENT_DEVICE_DOMAINS 0x0038
#define HV_STATUS_PROCESSOR_FEATURE_AES_NOT_SUPPORTED 0x0039
#define HV_STATUS_PROCESSOR_FEATURE_PCLMULQDQ_NOT_SUPPORTED 0x003A
#define HV_STATUS_PROCESSOR_FEATURE_INCOMPATIBLE_XSAVE_FEATURES 0x003B
#define HV_STATUS_CPUID_FEATURE_VALIDATION_ERROR 0x003C
#define HV_STATUS_CPUID_XSAVE_FEATURE_VALIDATION_ERROR 0x003D
#define HV_STATUS_PROCESSOR_STARTUP_TIMEOUT 0x003E
#define HV_STATUS_SMX_ENABLED 0x003F
#define HV_STATUS_PROCESSOR_FEATURE_PCID_NOT_SUPPORTED 0x0040
#define HV_STATUS_INVALID_LP_INDEX 0x0041
#define HV_STATUS_FEATURE_FMA4_NOT_SUPPORTED 0x0042
#define HV_STATUS_FEATURE_F16C_NOT_SUPPORTED 0x0043
#define HV_STATUS_PROCESSOR_FEATURE_RDRAND_NOT_SUPPORTED 0x0044
#define HV_STATUS_PROCESSOR_FEATURE_RDWRFSGS_NOT_SUPPORTED 0x0045
#define HV_STATUS_PROCESSOR_FEATURE_SMEP_NOT_SUPPORTED 0x0046
#define HV_STATUS_PROCESSOR_FEATURE_ENHANCED_FAST_STRING_NOT_SUPPORTED 0x0047
#define HV_STATUS_PROCESSOR_FEATURE_MOVBE_NOT_SUPPORTED 0x0048
#define HV_STATUS_PROCESSOR_FEATURE_BMI1_NOT_SUPPORTED 0x0049
#define HV_STATUS_PROCESSOR_FEATURE_BMI2_NOT_SUPPORTED 0x004A
#define HV_STATUS_PROCESSOR_FEATURE_HLE_NOT_SUPPORTED 0x004B
#define HV_STATUS_PROCESSOR_FEATURE_RTM_NOT_SUPPORTED 0x004C
#define HV_STATUS_PROCESSOR_FEATURE_XSAVE_FMA_NOT_SUPPORTED 0x004D
#define HV_STATUS_PROCESSOR_FEATURE_XSAVE_AVX2_NOT_SUPPORTED 0x004E
#define HV_STATUS_PROCESSOR_FEATURE_NPIEP1_NOT_SUPPORTED 0x004F
#define HV_STATUS_INVALID_REGISTER_VALUE 0x0050
#define HV_STATUS_PROCESSOR_FEATURE_RDSEED_NOT_SUPPORTED 0x0052
#define HV_STATUS_PROCESSOR_FEATURE_ADX_NOT_SUPPORTED 0x0053
#define HV_STATUS_PROCESSOR_FEATURE_SMAP_NOT_SUPPORTED 0x0054
#define HV_STATUS_NX_NOT_DETECTED 0x0055
#define HV_STATUS_PROCESSOR_FEATURE_INTEL_PREFETCH_NOT_SUPPORTED 0x0056
#define HV_STATUS_INVALID_DEVICE_ID 0x0057
#define HV_STATUS_INVALID_DEVICE_STATE 0x0058
#define HV_STATUS_PENDING_PAGE_REQUESTS 0x0059
#define HV_STATUS_PAGE_REQUEST_INVALID 0x0060
#define HV_STATUS_OPERATION_FAILED 0x0071
#define HV_STATUS_NOT_ALLOWED_WITH_NESTED_VIRT_ACTIVE 0x0072
