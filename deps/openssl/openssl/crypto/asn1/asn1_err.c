/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2018 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/asn1.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_ASN1,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_ASN1,0,reason)

static ERR_STRING_DATA ASN1_str_functs[] = {
    {ERR_FUNC(ASN1_F_A2D_ASN1_OBJECT), "a2d_ASN1_OBJECT"},
    {ERR_FUNC(ASN1_F_A2I_ASN1_INTEGER), "a2i_ASN1_INTEGER"},
    {ERR_FUNC(ASN1_F_A2I_ASN1_STRING), "a2i_ASN1_STRING"},
    {ERR_FUNC(ASN1_F_APPEND_EXP), "append_exp"},
    {ERR_FUNC(ASN1_F_ASN1_BIT_STRING_SET_BIT), "ASN1_BIT_STRING_set_bit"},
    {ERR_FUNC(ASN1_F_ASN1_CB), "asn1_cb"},
    {ERR_FUNC(ASN1_F_ASN1_CHECK_TLEN), "asn1_check_tlen"},
    {ERR_FUNC(ASN1_F_ASN1_COLLECT), "asn1_collect"},
    {ERR_FUNC(ASN1_F_ASN1_D2I_EX_PRIMITIVE), "asn1_d2i_ex_primitive"},
    {ERR_FUNC(ASN1_F_ASN1_D2I_FP), "ASN1_d2i_fp"},
    {ERR_FUNC(ASN1_F_ASN1_D2I_READ_BIO), "asn1_d2i_read_bio"},
    {ERR_FUNC(ASN1_F_ASN1_DIGEST), "ASN1_digest"},
    {ERR_FUNC(ASN1_F_ASN1_DO_ADB), "asn1_do_adb"},
    {ERR_FUNC(ASN1_F_ASN1_DO_LOCK), "asn1_do_lock"},
    {ERR_FUNC(ASN1_F_ASN1_DUP), "ASN1_dup"},
    {ERR_FUNC(ASN1_F_ASN1_EX_C2I), "asn1_ex_c2i"},
    {ERR_FUNC(ASN1_F_ASN1_FIND_END), "asn1_find_end"},
    {ERR_FUNC(ASN1_F_ASN1_GENERALIZEDTIME_ADJ), "ASN1_GENERALIZEDTIME_adj"},
    {ERR_FUNC(ASN1_F_ASN1_GENERATE_V3), "ASN1_generate_v3"},
    {ERR_FUNC(ASN1_F_ASN1_GET_INT64), "asn1_get_int64"},
    {ERR_FUNC(ASN1_F_ASN1_GET_OBJECT), "ASN1_get_object"},
    {ERR_FUNC(ASN1_F_ASN1_GET_UINT64), "asn1_get_uint64"},
    {ERR_FUNC(ASN1_F_ASN1_I2D_BIO), "ASN1_i2d_bio"},
    {ERR_FUNC(ASN1_F_ASN1_I2D_FP), "ASN1_i2d_fp"},
    {ERR_FUNC(ASN1_F_ASN1_ITEM_D2I_FP), "ASN1_item_d2i_fp"},
    {ERR_FUNC(ASN1_F_ASN1_ITEM_DUP), "ASN1_item_dup"},
    {ERR_FUNC(ASN1_F_ASN1_ITEM_EMBED_D2I), "asn1_item_embed_d2i"},
    {ERR_FUNC(ASN1_F_ASN1_ITEM_EMBED_NEW), "asn1_item_embed_new"},
    {ERR_FUNC(ASN1_F_ASN1_ITEM_I2D_BIO), "ASN1_item_i2d_bio"},
    {ERR_FUNC(ASN1_F_ASN1_ITEM_I2D_FP), "ASN1_item_i2d_fp"},
    {ERR_FUNC(ASN1_F_ASN1_ITEM_PACK), "ASN1_item_pack"},
    {ERR_FUNC(ASN1_F_ASN1_ITEM_SIGN), "ASN1_item_sign"},
    {ERR_FUNC(ASN1_F_ASN1_ITEM_SIGN_CTX), "ASN1_item_sign_ctx"},
    {ERR_FUNC(ASN1_F_ASN1_ITEM_UNPACK), "ASN1_item_unpack"},
    {ERR_FUNC(ASN1_F_ASN1_ITEM_VERIFY), "ASN1_item_verify"},
    {ERR_FUNC(ASN1_F_ASN1_MBSTRING_NCOPY), "ASN1_mbstring_ncopy"},
    {ERR_FUNC(ASN1_F_ASN1_OBJECT_NEW), "ASN1_OBJECT_new"},
    {ERR_FUNC(ASN1_F_ASN1_OUTPUT_DATA), "asn1_output_data"},
    {ERR_FUNC(ASN1_F_ASN1_PCTX_NEW), "ASN1_PCTX_new"},
    {ERR_FUNC(ASN1_F_ASN1_SCTX_NEW), "ASN1_SCTX_new"},
    {ERR_FUNC(ASN1_F_ASN1_SIGN), "ASN1_sign"},
    {ERR_FUNC(ASN1_F_ASN1_STR2TYPE), "asn1_str2type"},
    {ERR_FUNC(ASN1_F_ASN1_STRING_GET_INT64), "asn1_string_get_int64"},
    {ERR_FUNC(ASN1_F_ASN1_STRING_GET_UINT64), "asn1_string_get_uint64"},
    {ERR_FUNC(ASN1_F_ASN1_STRING_SET), "ASN1_STRING_set"},
    {ERR_FUNC(ASN1_F_ASN1_STRING_TABLE_ADD), "ASN1_STRING_TABLE_add"},
    {ERR_FUNC(ASN1_F_ASN1_STRING_TO_BN), "asn1_string_to_bn"},
    {ERR_FUNC(ASN1_F_ASN1_STRING_TYPE_NEW), "ASN1_STRING_type_new"},
    {ERR_FUNC(ASN1_F_ASN1_TEMPLATE_EX_D2I), "asn1_template_ex_d2i"},
    {ERR_FUNC(ASN1_F_ASN1_TEMPLATE_NEW), "asn1_template_new"},
    {ERR_FUNC(ASN1_F_ASN1_TEMPLATE_NOEXP_D2I), "asn1_template_noexp_d2i"},
    {ERR_FUNC(ASN1_F_ASN1_TIME_ADJ), "ASN1_TIME_adj"},
    {ERR_FUNC(ASN1_F_ASN1_TYPE_GET_INT_OCTETSTRING),
     "ASN1_TYPE_get_int_octetstring"},
    {ERR_FUNC(ASN1_F_ASN1_TYPE_GET_OCTETSTRING), "ASN1_TYPE_get_octetstring"},
    {ERR_FUNC(ASN1_F_ASN1_UTCTIME_ADJ), "ASN1_UTCTIME_adj"},
    {ERR_FUNC(ASN1_F_ASN1_VERIFY), "ASN1_verify"},
    {ERR_FUNC(ASN1_F_B64_READ_ASN1), "b64_read_asn1"},
    {ERR_FUNC(ASN1_F_B64_WRITE_ASN1), "B64_write_ASN1"},
    {ERR_FUNC(ASN1_F_BIO_NEW_NDEF), "BIO_new_NDEF"},
    {ERR_FUNC(ASN1_F_BITSTR_CB), "bitstr_cb"},
    {ERR_FUNC(ASN1_F_BN_TO_ASN1_STRING), "bn_to_asn1_string"},
    {ERR_FUNC(ASN1_F_C2I_ASN1_BIT_STRING), "c2i_ASN1_BIT_STRING"},
    {ERR_FUNC(ASN1_F_C2I_ASN1_INTEGER), "c2i_ASN1_INTEGER"},
    {ERR_FUNC(ASN1_F_C2I_ASN1_OBJECT), "c2i_ASN1_OBJECT"},
    {ERR_FUNC(ASN1_F_C2I_IBUF), "c2i_ibuf"},
    {ERR_FUNC(ASN1_F_C2I_UINT64_INT), "c2i_uint64_int"},
    {ERR_FUNC(ASN1_F_COLLECT_DATA), "collect_data"},
    {ERR_FUNC(ASN1_F_D2I_ASN1_OBJECT), "d2i_ASN1_OBJECT"},
    {ERR_FUNC(ASN1_F_D2I_ASN1_UINTEGER), "d2i_ASN1_UINTEGER"},
    {ERR_FUNC(ASN1_F_D2I_AUTOPRIVATEKEY), "d2i_AutoPrivateKey"},
    {ERR_FUNC(ASN1_F_D2I_PRIVATEKEY), "d2i_PrivateKey"},
    {ERR_FUNC(ASN1_F_D2I_PUBLICKEY), "d2i_PublicKey"},
    {ERR_FUNC(ASN1_F_DO_BUF), "do_buf"},
    {ERR_FUNC(ASN1_F_DO_TCREATE), "do_tcreate"},
    {ERR_FUNC(ASN1_F_I2D_ASN1_BIO_STREAM), "i2d_ASN1_bio_stream"},
    {ERR_FUNC(ASN1_F_I2D_ASN1_OBJECT), "i2d_ASN1_OBJECT"},
    {ERR_FUNC(ASN1_F_I2D_DSA_PUBKEY), "i2d_DSA_PUBKEY"},
    {ERR_FUNC(ASN1_F_I2D_EC_PUBKEY), "i2d_EC_PUBKEY"},
    {ERR_FUNC(ASN1_F_I2D_PRIVATEKEY), "i2d_PrivateKey"},
    {ERR_FUNC(ASN1_F_I2D_PUBLICKEY), "i2d_PublicKey"},
    {ERR_FUNC(ASN1_F_I2D_RSA_PUBKEY), "i2d_RSA_PUBKEY"},
    {ERR_FUNC(ASN1_F_LONG_C2I), "long_c2i"},
    {ERR_FUNC(ASN1_F_OID_MODULE_INIT), "oid_module_init"},
    {ERR_FUNC(ASN1_F_PARSE_TAGGING), "parse_tagging"},
    {ERR_FUNC(ASN1_F_PKCS5_PBE2_SET_IV), "PKCS5_pbe2_set_iv"},
    {ERR_FUNC(ASN1_F_PKCS5_PBE2_SET_SCRYPT), "PKCS5_pbe2_set_scrypt"},
    {ERR_FUNC(ASN1_F_PKCS5_PBE_SET), "PKCS5_pbe_set"},
    {ERR_FUNC(ASN1_F_PKCS5_PBE_SET0_ALGOR), "PKCS5_pbe_set0_algor"},
    {ERR_FUNC(ASN1_F_PKCS5_PBKDF2_SET), "PKCS5_pbkdf2_set"},
    {ERR_FUNC(ASN1_F_PKCS5_SCRYPT_SET), "pkcs5_scrypt_set"},
    {ERR_FUNC(ASN1_F_SMIME_READ_ASN1), "SMIME_read_ASN1"},
    {ERR_FUNC(ASN1_F_SMIME_TEXT), "SMIME_text"},
    {ERR_FUNC(ASN1_F_STBL_MODULE_INIT), "stbl_module_init"},
    {ERR_FUNC(ASN1_F_UINT32_C2I), "uint32_c2i"},
    {ERR_FUNC(ASN1_F_UINT64_C2I), "uint64_c2i"},
    {ERR_FUNC(ASN1_F_X509_CRL_ADD0_REVOKED), "X509_CRL_add0_revoked"},
    {ERR_FUNC(ASN1_F_X509_INFO_NEW), "X509_INFO_new"},
    {ERR_FUNC(ASN1_F_X509_NAME_ENCODE), "x509_name_encode"},
    {ERR_FUNC(ASN1_F_X509_NAME_EX_D2I), "x509_name_ex_d2i"},
    {ERR_FUNC(ASN1_F_X509_NAME_EX_NEW), "x509_name_ex_new"},
    {ERR_FUNC(ASN1_F_X509_PKEY_NEW), "X509_PKEY_new"},
    {0, NULL}
};

static ERR_STRING_DATA ASN1_str_reasons[] = {
    {ERR_REASON(ASN1_R_ADDING_OBJECT), "adding object"},
    {ERR_REASON(ASN1_R_ASN1_PARSE_ERROR), "asn1 parse error"},
    {ERR_REASON(ASN1_R_ASN1_SIG_PARSE_ERROR), "asn1 sig parse error"},
    {ERR_REASON(ASN1_R_AUX_ERROR), "aux error"},
    {ERR_REASON(ASN1_R_BAD_OBJECT_HEADER), "bad object header"},
    {ERR_REASON(ASN1_R_BMPSTRING_IS_WRONG_LENGTH),
     "bmpstring is wrong length"},
    {ERR_REASON(ASN1_R_BN_LIB), "bn lib"},
    {ERR_REASON(ASN1_R_BOOLEAN_IS_WRONG_LENGTH), "boolean is wrong length"},
    {ERR_REASON(ASN1_R_BUFFER_TOO_SMALL), "buffer too small"},
    {ERR_REASON(ASN1_R_CIPHER_HAS_NO_OBJECT_IDENTIFIER),
     "cipher has no object identifier"},
    {ERR_REASON(ASN1_R_CONTEXT_NOT_INITIALISED), "context not initialised"},
    {ERR_REASON(ASN1_R_DATA_IS_WRONG), "data is wrong"},
    {ERR_REASON(ASN1_R_DECODE_ERROR), "decode error"},
    {ERR_REASON(ASN1_R_DEPTH_EXCEEDED), "depth exceeded"},
    {ERR_REASON(ASN1_R_DIGEST_AND_KEY_TYPE_NOT_SUPPORTED),
     "digest and key type not supported"},
    {ERR_REASON(ASN1_R_ENCODE_ERROR), "encode error"},
    {ERR_REASON(ASN1_R_ERROR_GETTING_TIME), "error getting time"},
    {ERR_REASON(ASN1_R_ERROR_LOADING_SECTION), "error loading section"},
    {ERR_REASON(ASN1_R_ERROR_SETTING_CIPHER_PARAMS),
     "error setting cipher params"},
    {ERR_REASON(ASN1_R_EXPECTING_AN_INTEGER), "expecting an integer"},
    {ERR_REASON(ASN1_R_EXPECTING_AN_OBJECT), "expecting an object"},
    {ERR_REASON(ASN1_R_EXPLICIT_LENGTH_MISMATCH), "explicit length mismatch"},
    {ERR_REASON(ASN1_R_EXPLICIT_TAG_NOT_CONSTRUCTED),
     "explicit tag not constructed"},
    {ERR_REASON(ASN1_R_FIELD_MISSING), "field missing"},
    {ERR_REASON(ASN1_R_FIRST_NUM_TOO_LARGE), "first num too large"},
    {ERR_REASON(ASN1_R_HEADER_TOO_LONG), "header too long"},
    {ERR_REASON(ASN1_R_ILLEGAL_BITSTRING_FORMAT), "illegal bitstring format"},
    {ERR_REASON(ASN1_R_ILLEGAL_BOOLEAN), "illegal boolean"},
    {ERR_REASON(ASN1_R_ILLEGAL_CHARACTERS), "illegal characters"},
    {ERR_REASON(ASN1_R_ILLEGAL_FORMAT), "illegal format"},
    {ERR_REASON(ASN1_R_ILLEGAL_HEX), "illegal hex"},
    {ERR_REASON(ASN1_R_ILLEGAL_IMPLICIT_TAG), "illegal implicit tag"},
    {ERR_REASON(ASN1_R_ILLEGAL_INTEGER), "illegal integer"},
    {ERR_REASON(ASN1_R_ILLEGAL_NEGATIVE_VALUE), "illegal negative value"},
    {ERR_REASON(ASN1_R_ILLEGAL_NESTED_TAGGING), "illegal nested tagging"},
    {ERR_REASON(ASN1_R_ILLEGAL_NULL), "illegal null"},
    {ERR_REASON(ASN1_R_ILLEGAL_NULL_VALUE), "illegal null value"},
    {ERR_REASON(ASN1_R_ILLEGAL_OBJECT), "illegal object"},
    {ERR_REASON(ASN1_R_ILLEGAL_OPTIONAL_ANY), "illegal optional any"},
    {ERR_REASON(ASN1_R_ILLEGAL_OPTIONS_ON_ITEM_TEMPLATE),
     "illegal options on item template"},
    {ERR_REASON(ASN1_R_ILLEGAL_PADDING), "illegal padding"},
    {ERR_REASON(ASN1_R_ILLEGAL_TAGGED_ANY), "illegal tagged any"},
    {ERR_REASON(ASN1_R_ILLEGAL_TIME_VALUE), "illegal time value"},
    {ERR_REASON(ASN1_R_ILLEGAL_ZERO_CONTENT), "illegal zero content"},
    {ERR_REASON(ASN1_R_INTEGER_NOT_ASCII_FORMAT), "integer not ascii format"},
    {ERR_REASON(ASN1_R_INTEGER_TOO_LARGE_FOR_LONG),
     "integer too large for long"},
    {ERR_REASON(ASN1_R_INVALID_BIT_STRING_BITS_LEFT),
     "invalid bit string bits left"},
    {ERR_REASON(ASN1_R_INVALID_BMPSTRING_LENGTH), "invalid bmpstring length"},
    {ERR_REASON(ASN1_R_INVALID_DIGIT), "invalid digit"},
    {ERR_REASON(ASN1_R_INVALID_MIME_TYPE), "invalid mime type"},
    {ERR_REASON(ASN1_R_INVALID_MODIFIER), "invalid modifier"},
    {ERR_REASON(ASN1_R_INVALID_NUMBER), "invalid number"},
    {ERR_REASON(ASN1_R_INVALID_OBJECT_ENCODING), "invalid object encoding"},
    {ERR_REASON(ASN1_R_INVALID_SCRYPT_PARAMETERS),
     "invalid scrypt parameters"},
    {ERR_REASON(ASN1_R_INVALID_SEPARATOR), "invalid separator"},
    {ERR_REASON(ASN1_R_INVALID_STRING_TABLE_VALUE),
     "invalid string table value"},
    {ERR_REASON(ASN1_R_INVALID_UNIVERSALSTRING_LENGTH),
     "invalid universalstring length"},
    {ERR_REASON(ASN1_R_INVALID_UTF8STRING), "invalid utf8string"},
    {ERR_REASON(ASN1_R_INVALID_VALUE), "invalid value"},
    {ERR_REASON(ASN1_R_LIST_ERROR), "list error"},
    {ERR_REASON(ASN1_R_MIME_NO_CONTENT_TYPE), "mime no content type"},
    {ERR_REASON(ASN1_R_MIME_PARSE_ERROR), "mime parse error"},
    {ERR_REASON(ASN1_R_MIME_SIG_PARSE_ERROR), "mime sig parse error"},
    {ERR_REASON(ASN1_R_MISSING_EOC), "missing eoc"},
    {ERR_REASON(ASN1_R_MISSING_SECOND_NUMBER), "missing second number"},
    {ERR_REASON(ASN1_R_MISSING_VALUE), "missing value"},
    {ERR_REASON(ASN1_R_MSTRING_NOT_UNIVERSAL), "mstring not universal"},
    {ERR_REASON(ASN1_R_MSTRING_WRONG_TAG), "mstring wrong tag"},
    {ERR_REASON(ASN1_R_NESTED_ASN1_STRING), "nested asn1 string"},
    {ERR_REASON(ASN1_R_NESTED_TOO_DEEP), "nested too deep"},
    {ERR_REASON(ASN1_R_NON_HEX_CHARACTERS), "non hex characters"},
    {ERR_REASON(ASN1_R_NOT_ASCII_FORMAT), "not ascii format"},
    {ERR_REASON(ASN1_R_NOT_ENOUGH_DATA), "not enough data"},
    {ERR_REASON(ASN1_R_NO_CONTENT_TYPE), "no content type"},
    {ERR_REASON(ASN1_R_NO_MATCHING_CHOICE_TYPE), "no matching choice type"},
    {ERR_REASON(ASN1_R_NO_MULTIPART_BODY_FAILURE),
     "no multipart body failure"},
    {ERR_REASON(ASN1_R_NO_MULTIPART_BOUNDARY), "no multipart boundary"},
    {ERR_REASON(ASN1_R_NO_SIG_CONTENT_TYPE), "no sig content type"},
    {ERR_REASON(ASN1_R_NULL_IS_WRONG_LENGTH), "null is wrong length"},
    {ERR_REASON(ASN1_R_OBJECT_NOT_ASCII_FORMAT), "object not ascii format"},
    {ERR_REASON(ASN1_R_ODD_NUMBER_OF_CHARS), "odd number of chars"},
    {ERR_REASON(ASN1_R_SECOND_NUMBER_TOO_LARGE), "second number too large"},
    {ERR_REASON(ASN1_R_SEQUENCE_LENGTH_MISMATCH), "sequence length mismatch"},
    {ERR_REASON(ASN1_R_SEQUENCE_NOT_CONSTRUCTED), "sequence not constructed"},
    {ERR_REASON(ASN1_R_SEQUENCE_OR_SET_NEEDS_CONFIG),
     "sequence or set needs config"},
    {ERR_REASON(ASN1_R_SHORT_LINE), "short line"},
    {ERR_REASON(ASN1_R_SIG_INVALID_MIME_TYPE), "sig invalid mime type"},
    {ERR_REASON(ASN1_R_STREAMING_NOT_SUPPORTED), "streaming not supported"},
    {ERR_REASON(ASN1_R_STRING_TOO_LONG), "string too long"},
    {ERR_REASON(ASN1_R_STRING_TOO_SHORT), "string too short"},
    {ERR_REASON(ASN1_R_THE_ASN1_OBJECT_IDENTIFIER_IS_NOT_KNOWN_FOR_THIS_MD),
     "the asn1 object identifier is not known for this md"},
    {ERR_REASON(ASN1_R_TIME_NOT_ASCII_FORMAT), "time not ascii format"},
    {ERR_REASON(ASN1_R_TOO_LARGE), "too large"},
    {ERR_REASON(ASN1_R_TOO_LONG), "too long"},
    {ERR_REASON(ASN1_R_TOO_SMALL), "too small"},
    {ERR_REASON(ASN1_R_TYPE_NOT_CONSTRUCTED), "type not constructed"},
    {ERR_REASON(ASN1_R_TYPE_NOT_PRIMITIVE), "type not primitive"},
    {ERR_REASON(ASN1_R_UNEXPECTED_EOC), "unexpected eoc"},
    {ERR_REASON(ASN1_R_UNIVERSALSTRING_IS_WRONG_LENGTH),
     "universalstring is wrong length"},
    {ERR_REASON(ASN1_R_UNKNOWN_FORMAT), "unknown format"},
    {ERR_REASON(ASN1_R_UNKNOWN_MESSAGE_DIGEST_ALGORITHM),
     "unknown message digest algorithm"},
    {ERR_REASON(ASN1_R_UNKNOWN_OBJECT_TYPE), "unknown object type"},
    {ERR_REASON(ASN1_R_UNKNOWN_PUBLIC_KEY_TYPE), "unknown public key type"},
    {ERR_REASON(ASN1_R_UNKNOWN_SIGNATURE_ALGORITHM),
     "unknown signature algorithm"},
    {ERR_REASON(ASN1_R_UNKNOWN_TAG), "unknown tag"},
    {ERR_REASON(ASN1_R_UNSUPPORTED_ANY_DEFINED_BY_TYPE),
     "unsupported any defined by type"},
    {ERR_REASON(ASN1_R_UNSUPPORTED_PUBLIC_KEY_TYPE),
     "unsupported public key type"},
    {ERR_REASON(ASN1_R_UNSUPPORTED_TYPE), "unsupported type"},
    {ERR_REASON(ASN1_R_WRONG_INTEGER_TYPE), "wrong integer type"},
    {ERR_REASON(ASN1_R_WRONG_PUBLIC_KEY_TYPE), "wrong public key type"},
    {ERR_REASON(ASN1_R_WRONG_TAG), "wrong tag"},
    {0, NULL}
};

#endif

int ERR_load_ASN1_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(ASN1_str_functs[0].error) == NULL) {
        ERR_load_strings(0, ASN1_str_functs);
        ERR_load_strings(0, ASN1_str_reasons);
    }
#endif
    return 1;
}
