/* Generated from /Users/sam/Projects/AOS-Downloader/projects/Heimdal-398.1.2/lib/asn1/asn1_err.et */
/* $Id$ */

#ifndef __asn1_err_h__
#define __asn1_err_h__

struct et_list;

void initialize_asn1_error_table_r(struct et_list **);

void initialize_asn1_error_table(void);
#define init_asn1_err_tbl initialize_asn1_error_table

typedef enum asn1_error_number{
	ASN1_BAD_TIMEFORMAT = 1859794432,
	ASN1_MISSING_FIELD = 1859794433,
	ASN1_MISPLACED_FIELD = 1859794434,
	ASN1_TYPE_MISMATCH = 1859794435,
	ASN1_OVERFLOW = 1859794436,
	ASN1_OVERRUN = 1859794437,
	ASN1_BAD_ID = 1859794438,
	ASN1_BAD_LENGTH = 1859794439,
	ASN1_BAD_FORMAT = 1859794440,
	ASN1_PARSE_ERROR = 1859794441,
	ASN1_EXTRA_DATA = 1859794442,
	ASN1_BAD_CHARACTER = 1859794443,
	ASN1_MIN_CONSTRAINT = 1859794444,
	ASN1_MAX_CONSTRAINT = 1859794445,
	ASN1_EXACT_CONSTRAINT = 1859794446,
	ASN1_INDEF_OVERRUN = 1859794447,
	ASN1_INDEF_UNDERRUN = 1859794448,
	ASN1_GOT_BER = 1859794449,
	ASN1_INDEF_EXTRA_DATA = 1859794450,
	ASN1_INVALID_CHOICE = 1859794451
} asn1_error_number;

#define ERROR_TABLE_BASE_asn1 1859794432

#define COM_ERR_BINDDOMAIN_asn1 "heim_com_err1859794432"

#endif /* __asn1_err_h__ */
