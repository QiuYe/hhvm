/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_ORACLE_H__
#define __EXTPROFILE_ORACLE_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_oracle.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Variant x_oci_connect(CStrRef username, CStrRef password, CStrRef db = null_string, CStrRef charset = null_string, int session_mode = k_OCI_DEFAULT) {
  FUNCTION_INJECTION_BUILTIN(oci_connect);
  return f_oci_connect(username, password, db, charset, session_mode);
}

inline Variant x_oci_new_connect(CStrRef username, CStrRef password, CStrRef db = null_string, CStrRef charset = null_string, int session_mode = k_OCI_DEFAULT) {
  FUNCTION_INJECTION_BUILTIN(oci_new_connect);
  return f_oci_new_connect(username, password, db, charset, session_mode);
}

inline Variant x_oci_pconnect(CStrRef username, CStrRef password, CStrRef db = null_string, CStrRef charset = null_string, int session_mode = k_OCI_DEFAULT) {
  FUNCTION_INJECTION_BUILTIN(oci_pconnect);
  return f_oci_pconnect(username, password, db, charset, session_mode);
}

inline Variant x_oci_server_version(CObjRef connection) {
  FUNCTION_INJECTION_BUILTIN(oci_server_version);
  return f_oci_server_version(connection);
}

inline Variant x_oci_password_change(CVarRef connection, CStrRef username, CStrRef old_password, CStrRef new_password) {
  FUNCTION_INJECTION_BUILTIN(oci_password_change);
  return f_oci_password_change(connection, username, old_password, new_password);
}

inline Variant x_oci_new_cursor(CObjRef connection) {
  FUNCTION_INJECTION_BUILTIN(oci_new_cursor);
  return f_oci_new_cursor(connection);
}

inline Variant x_oci_new_descriptor(CObjRef connection, int type = k_OCI_DTYPE_LOB) {
  FUNCTION_INJECTION_BUILTIN(oci_new_descriptor);
  return f_oci_new_descriptor(connection, type);
}

inline bool x_oci_close(CObjRef connection) {
  FUNCTION_INJECTION_BUILTIN(oci_close);
  return f_oci_close(connection);
}

inline bool x_oci_commit(CObjRef connection) {
  FUNCTION_INJECTION_BUILTIN(oci_commit);
  return f_oci_commit(connection);
}

inline bool x_oci_rollback(CObjRef connection) {
  FUNCTION_INJECTION_BUILTIN(oci_rollback);
  return f_oci_rollback(connection);
}

inline Variant x_oci_error(CObjRef source = null) {
  FUNCTION_INJECTION_BUILTIN(oci_error);
  return f_oci_error(source);
}

inline void x_oci_internal_debug(bool onoff) {
  FUNCTION_INJECTION_BUILTIN(oci_internal_debug);
  f_oci_internal_debug(onoff);
}

inline Variant x_oci_parse(CObjRef connection, CStrRef query) {
  FUNCTION_INJECTION_BUILTIN(oci_parse);
  return f_oci_parse(connection, query);
}

inline Variant x_oci_statement_type(CObjRef statement) {
  FUNCTION_INJECTION_BUILTIN(oci_statement_type);
  return f_oci_statement_type(statement);
}

inline bool x_oci_free_statement(CObjRef statement) {
  FUNCTION_INJECTION_BUILTIN(oci_free_statement);
  return f_oci_free_statement(statement);
}

inline bool x_oci_free_descriptor(CObjRef lob) {
  FUNCTION_INJECTION_BUILTIN(oci_free_descriptor);
  return f_oci_free_descriptor(lob);
}

inline bool x_oci_bind_array_by_name(CObjRef statement, CStrRef name, VRefParam var_array, int max_table_length, int max_item_length = -1, int type = k_SQLT_AFC) {
  FUNCTION_INJECTION_BUILTIN(oci_bind_array_by_name);
  return f_oci_bind_array_by_name(statement, name, var_array, max_table_length, max_item_length, type);
}

inline bool x_oci_bind_by_name(CObjRef statement, CStrRef name, VRefParam variable, int max_length = -1, int type = 0) {
  FUNCTION_INJECTION_BUILTIN(oci_bind_by_name);
  return f_oci_bind_by_name(statement, name, variable, max_length, type);
}

inline bool x_oci_cancel(CObjRef statement) {
  FUNCTION_INJECTION_BUILTIN(oci_cancel);
  return f_oci_cancel(statement);
}

inline bool x_oci_define_by_name(CObjRef statement, CStrRef column_name, VRefParam variable, int type = 0) {
  FUNCTION_INJECTION_BUILTIN(oci_define_by_name);
  return f_oci_define_by_name(statement, column_name, variable, type);
}

inline bool x_oci_execute(CObjRef statement, int mode = k_OCI_COMMIT_ON_SUCCESS) {
  FUNCTION_INJECTION_BUILTIN(oci_execute);
  return f_oci_execute(statement, mode);
}

inline Variant x_oci_num_fields(CObjRef statement) {
  FUNCTION_INJECTION_BUILTIN(oci_num_fields);
  return f_oci_num_fields(statement);
}

inline Variant x_oci_num_rows(CObjRef statement) {
  FUNCTION_INJECTION_BUILTIN(oci_num_rows);
  return f_oci_num_rows(statement);
}

inline Variant x_oci_result(CObjRef statement, CVarRef field) {
  FUNCTION_INJECTION_BUILTIN(oci_result);
  return f_oci_result(statement, field);
}

inline bool x_oci_set_prefetch(CObjRef statement, int rows) {
  FUNCTION_INJECTION_BUILTIN(oci_set_prefetch);
  return f_oci_set_prefetch(statement, rows);
}

inline Variant x_oci_fetch_all(CObjRef statement, VRefParam output, int skip = 0, int maxrows = -1, int flags = 0) {
  FUNCTION_INJECTION_BUILTIN(oci_fetch_all);
  return f_oci_fetch_all(statement, output, skip, maxrows, flags);
}

inline Variant x_oci_fetch_array(CObjRef statement, int mode = k_OCI_BOTH | k_OCI_RETURN_NULLS) {
  FUNCTION_INJECTION_BUILTIN(oci_fetch_array);
  return f_oci_fetch_array(statement, mode);
}

inline Variant x_oci_fetch_assoc(CObjRef statement) {
  FUNCTION_INJECTION_BUILTIN(oci_fetch_assoc);
  return f_oci_fetch_assoc(statement);
}

inline Variant x_oci_fetch_object(CObjRef statement, int mode = k_OCI_ASSOC | k_OCI_RETURN_NULLS) {
  FUNCTION_INJECTION_BUILTIN(oci_fetch_object);
  return f_oci_fetch_object(statement, mode);
}

inline Variant x_oci_fetch_row(CObjRef statement) {
  FUNCTION_INJECTION_BUILTIN(oci_fetch_row);
  return f_oci_fetch_row(statement);
}

inline bool x_oci_fetch(CObjRef statement) {
  FUNCTION_INJECTION_BUILTIN(oci_fetch);
  return f_oci_fetch(statement);
}

inline bool x_oci_field_is_null(CObjRef statement, CVarRef field) {
  FUNCTION_INJECTION_BUILTIN(oci_field_is_null);
  return f_oci_field_is_null(statement, field);
}

inline Variant x_oci_field_name(CObjRef statement, CVarRef field) {
  FUNCTION_INJECTION_BUILTIN(oci_field_name);
  return f_oci_field_name(statement, field);
}

inline Variant x_oci_field_precision(CObjRef statement, CVarRef field) {
  FUNCTION_INJECTION_BUILTIN(oci_field_precision);
  return f_oci_field_precision(statement, field);
}

inline Variant x_oci_field_scale(CObjRef statement, CVarRef field) {
  FUNCTION_INJECTION_BUILTIN(oci_field_scale);
  return f_oci_field_scale(statement, field);
}

inline Variant x_oci_field_size(CObjRef statement, CVarRef field) {
  FUNCTION_INJECTION_BUILTIN(oci_field_size);
  return f_oci_field_size(statement, field);
}

inline Variant x_oci_field_type_raw(CObjRef statement, CVarRef field) {
  FUNCTION_INJECTION_BUILTIN(oci_field_type_raw);
  return f_oci_field_type_raw(statement, field);
}

inline Variant x_oci_field_type(CObjRef statement, CVarRef field) {
  FUNCTION_INJECTION_BUILTIN(oci_field_type);
  return f_oci_field_type(statement, field);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_ORACLE_H__
