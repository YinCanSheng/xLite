/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_GANSSSatelliteInformation_H_
#define	_GANSSSatelliteInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtraDoppler;
struct AzimuthAndElevation;

/* GANSSSatelliteInformation */
typedef struct GANSSSatelliteInformation {
	long	 ganssSatId;
	long	 dopplerZeroOrder;
	struct ExtraDoppler	*extraDoppler	/* OPTIONAL */;
	long	 codePhase;
	long	 integerCodePhase;
	BIT_STRING_t	 codePhaseSearchWindow;
	struct AzimuthAndElevation	*azimuthandElevation	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSSatelliteInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSSatelliteInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtraDoppler.h"
#include "AzimuthAndElevation.h"

#endif	/* _GANSSSatelliteInformation_H_ */
#include <asn_internal.h>
