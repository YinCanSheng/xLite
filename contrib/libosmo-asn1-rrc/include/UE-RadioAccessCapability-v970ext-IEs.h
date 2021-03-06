/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_RadioAccessCapability_v970ext_IEs_H_
#define	_UE_RadioAccessCapability_v970ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_RadioAccessCapability_v970ext_IEs__ue_ExtendedMeasurementSupport {
	UE_RadioAccessCapability_v970ext_IEs__ue_ExtendedMeasurementSupport_true	= 0
} e_UE_RadioAccessCapability_v970ext_IEs__ue_ExtendedMeasurementSupport;

/* UE-RadioAccessCapability-v970ext-IEs */
typedef struct UE_RadioAccessCapability_v970ext_IEs {
	long	*ue_ExtendedMeasurementSupport	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioAccessCapability_v970ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_ExtendedMeasurementSupport_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapability_v970ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_RadioAccessCapability_v970ext_IEs_H_ */
#include <asn_internal.h>
