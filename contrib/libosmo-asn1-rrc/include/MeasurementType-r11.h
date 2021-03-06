/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MeasurementType_r11_H_
#define	_MeasurementType_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFrequencyMeasurement-r11.h"
#include "InterFrequencyMeasurement-r11.h"
#include "InterRATMeasurement-r11.h"
#include "UE-Positioning-Measurement-r10.h"
#include "TrafficVolumeMeasurement.h"
#include "QualityMeasurement.h"
#include "UE-InternalMeasurement-r4.h"
#include "CSGProximityDetection.h"
#include "EUTRA-MeasurementForCELLFACH.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementType_r11_PR {
	MeasurementType_r11_PR_NOTHING,	/* No components present */
	MeasurementType_r11_PR_intraFrequencyMeasurement,
	MeasurementType_r11_PR_interFrequencyMeasurement,
	MeasurementType_r11_PR_interRATMeasurement,
	MeasurementType_r11_PR_up_Measurement,
	MeasurementType_r11_PR_trafficVolumeMeasurement,
	MeasurementType_r11_PR_qualityMeasurement,
	MeasurementType_r11_PR_ue_InternalMeasurement,
	MeasurementType_r11_PR_csgProximityDetection,
	MeasurementType_r11_PR_eutraMeasurementForCELLFACH
} MeasurementType_r11_PR;

/* MeasurementType-r11 */
typedef struct MeasurementType_r11 {
	MeasurementType_r11_PR present;
	union MeasurementType_r11_u {
		IntraFrequencyMeasurement_r11_t	 intraFrequencyMeasurement;
		InterFrequencyMeasurement_r11_t	 interFrequencyMeasurement;
		InterRATMeasurement_r11_t	 interRATMeasurement;
		UE_Positioning_Measurement_r10_t	 up_Measurement;
		TrafficVolumeMeasurement_t	 trafficVolumeMeasurement;
		QualityMeasurement_t	 qualityMeasurement;
		UE_InternalMeasurement_r4_t	 ue_InternalMeasurement;
		CSGProximityDetection_t	 csgProximityDetection;
		EUTRA_MeasurementForCELLFACH_t	 eutraMeasurementForCELLFACH;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementType_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementType_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementType_r11_H_ */
#include <asn_internal.h>
