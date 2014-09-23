/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SysInfoType15_3_H_
#define	_SysInfoType15_3_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GPS-TOW-1sec.h"
#include <BIT_STRING.h>
#include "SysInfoType15-3-va40ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GPS_Almanac;
struct UE_Positioning_GPS_IonosphericModel;
struct UE_Positioning_GPS_UTC_Model;

/* SysInfoType15-3 */
typedef struct SysInfoType15_3 {
	GPS_TOW_1sec_t	 transmissionTOW;
	struct UE_Positioning_GPS_Almanac	*ue_positioning_GPS_Almanac	/* OPTIONAL */;
	struct UE_Positioning_GPS_IonosphericModel	*ue_positioning_GPS_IonosphericModel	/* OPTIONAL */;
	struct UE_Positioning_GPS_UTC_Model	*ue_positioning_GPS_UTC_Model	/* OPTIONAL */;
	BIT_STRING_t	*satMask	/* OPTIONAL */;
	BIT_STRING_t	*lsbTOW	/* OPTIONAL */;
	struct SysInfoType15_3__va40NonCriticalExtensions {
		SysInfoType15_3_va40ext_IEs_t	 sysInfoType15_3_va40ext;
		struct SysInfoType15_3__va40NonCriticalExtensions__nonCriticalExtensions {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *va40NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15_3;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-GPS-Almanac.h"
#include "UE-Positioning-GPS-IonosphericModel.h"
#include "UE-Positioning-GPS-UTC-Model.h"

#endif	/* _SysInfoType15_3_H_ */
#include <asn_internal.h>