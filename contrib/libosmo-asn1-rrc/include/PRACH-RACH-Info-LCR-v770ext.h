/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PRACH_RACH_Info_LCR_v770ext_H_
#define	_PRACH_RACH_Info_LCR_v770ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Sync-UL-Codes-Bitmap.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PRACH-RACH-Info-LCR-v770ext */
typedef struct PRACH_RACH_Info_LCR_v770ext {
	Sync_UL_Codes_Bitmap_t	 e_RUCCH_Sync_UL_Codes_Bitmap;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_RACH_Info_LCR_v770ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_RACH_Info_LCR_v770ext;

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_RACH_Info_LCR_v770ext_H_ */
#include <asn_internal.h>
