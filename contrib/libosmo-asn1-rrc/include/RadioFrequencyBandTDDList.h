/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RadioFrequencyBandTDDList_H_
#define	_RadioFrequencyBandTDDList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioFrequencyBandTDDList {
	RadioFrequencyBandTDDList_a	= 0,
	RadioFrequencyBandTDDList_b	= 1,
	RadioFrequencyBandTDDList_c	= 2,
	RadioFrequencyBandTDDList_ab	= 3,
	RadioFrequencyBandTDDList_ac	= 4,
	RadioFrequencyBandTDDList_bc	= 5,
	RadioFrequencyBandTDDList_abc	= 6,
	RadioFrequencyBandTDDList_spare	= 7
} e_RadioFrequencyBandTDDList;

/* RadioFrequencyBandTDDList */
typedef long	 RadioFrequencyBandTDDList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioFrequencyBandTDDList;
asn_struct_free_f RadioFrequencyBandTDDList_free;
asn_struct_print_f RadioFrequencyBandTDDList_print;
asn_constr_check_f RadioFrequencyBandTDDList_constraint;
ber_type_decoder_f RadioFrequencyBandTDDList_decode_ber;
der_type_encoder_f RadioFrequencyBandTDDList_encode_der;
xer_type_decoder_f RadioFrequencyBandTDDList_decode_xer;
xer_type_encoder_f RadioFrequencyBandTDDList_encode_xer;
per_type_decoder_f RadioFrequencyBandTDDList_decode_uper;
per_type_encoder_f RadioFrequencyBandTDDList_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RadioFrequencyBandTDDList_H_ */
#include <asn_internal.h>
