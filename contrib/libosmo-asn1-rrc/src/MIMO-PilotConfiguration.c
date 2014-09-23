/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "MIMO-PilotConfiguration.h"

static asn_per_constraints_t asn_PER_type_secondCPICH_Pattern_constr_2 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_diversityPattern_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MIMO_PilotConfiguration__secondCPICH_Pattern__diversityPattern, channelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelisationCode256,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelisationCode"
		},
};
static ber_tlv_tag_t asn_DEF_diversityPattern_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_diversityPattern_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* channelisationCode at 9690 */
};
static asn_SEQUENCE_specifics_t asn_SPC_diversityPattern_specs_4 = {
	sizeof(struct MIMO_PilotConfiguration__secondCPICH_Pattern__diversityPattern),
	offsetof(struct MIMO_PilotConfiguration__secondCPICH_Pattern__diversityPattern, _asn_ctx),
	asn_MAP_diversityPattern_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_diversityPattern_4 = {
	"diversityPattern",
	"diversityPattern",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_diversityPattern_tags_4,
	sizeof(asn_DEF_diversityPattern_tags_4)
		/sizeof(asn_DEF_diversityPattern_tags_4[0]) - 1, /* 1 */
	asn_DEF_diversityPattern_tags_4,	/* Same as above */
	sizeof(asn_DEF_diversityPattern_tags_4)
		/sizeof(asn_DEF_diversityPattern_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_diversityPattern_4,
	1,	/* Elements count */
	&asn_SPC_diversityPattern_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_secondCPICH_Pattern_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MIMO_PilotConfiguration__secondCPICH_Pattern, choice.normalPattern),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"normalPattern"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MIMO_PilotConfiguration__secondCPICH_Pattern, choice.diversityPattern),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_diversityPattern_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"diversityPattern"
		},
};
static asn_TYPE_tag2member_t asn_MAP_secondCPICH_Pattern_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* normalPattern at 9687 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* diversityPattern at 9690 */
};
static asn_CHOICE_specifics_t asn_SPC_secondCPICH_Pattern_specs_2 = {
	sizeof(struct MIMO_PilotConfiguration__secondCPICH_Pattern),
	offsetof(struct MIMO_PilotConfiguration__secondCPICH_Pattern, _asn_ctx),
	offsetof(struct MIMO_PilotConfiguration__secondCPICH_Pattern, present),
	sizeof(((struct MIMO_PilotConfiguration__secondCPICH_Pattern *)0)->present),
	asn_MAP_secondCPICH_Pattern_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_secondCPICH_Pattern_2 = {
	"secondCPICH-Pattern",
	"secondCPICH-Pattern",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_secondCPICH_Pattern_constr_2,
	asn_MBR_secondCPICH_Pattern_2,
	2,	/* Elements count */
	&asn_SPC_secondCPICH_Pattern_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MIMO_PilotConfiguration_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MIMO_PilotConfiguration, secondCPICH_Pattern),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_secondCPICH_Pattern_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"secondCPICH-Pattern"
		},
};
static ber_tlv_tag_t asn_DEF_MIMO_PilotConfiguration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MIMO_PilotConfiguration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* secondCPICH-Pattern at 9687 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MIMO_PilotConfiguration_specs_1 = {
	sizeof(struct MIMO_PilotConfiguration),
	offsetof(struct MIMO_PilotConfiguration, _asn_ctx),
	asn_MAP_MIMO_PilotConfiguration_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MIMO_PilotConfiguration = {
	"MIMO-PilotConfiguration",
	"MIMO-PilotConfiguration",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_MIMO_PilotConfiguration_tags_1,
	sizeof(asn_DEF_MIMO_PilotConfiguration_tags_1)
		/sizeof(asn_DEF_MIMO_PilotConfiguration_tags_1[0]), /* 1 */
	asn_DEF_MIMO_PilotConfiguration_tags_1,	/* Same as above */
	sizeof(asn_DEF_MIMO_PilotConfiguration_tags_1)
		/sizeof(asn_DEF_MIMO_PilotConfiguration_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MIMO_PilotConfiguration_1,
	1,	/* Elements count */
	&asn_SPC_MIMO_PilotConfiguration_specs_1	/* Additional specs */
};
