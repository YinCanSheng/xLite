/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SysInfoType15_6_H_
#define	_SysInfoType15_6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "UE-Positioning-GANSS-ReferenceMeasurementInfo.h"
#include "SysInfoType15-6-va40ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType15-6 */
typedef struct SysInfoType15_6 {
	long	 ue_positioning_GANSS_TOD;
	UE_Positioning_GANSS_ReferenceMeasurementInfo_t	 ue_positioning_GANSS_ReferenceMeasurementInformation;
	struct SysInfoType15_6__va40NonCriticalExtensions {
		SysInfoType15_6_va40ext_IEs_t	 sysInfoType15_6_va40ext;
		struct SysInfoType15_6__va40NonCriticalExtensions__nonCriticalExtensions {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *va40NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15_6;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType15_6_H_ */
#include <asn_internal.h>
