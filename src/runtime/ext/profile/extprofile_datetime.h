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

#ifndef __EXTPROFILE_DATETIME_H__
#define __EXTPROFILE_DATETIME_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_datetime.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline bool x_checkdate(int month, int day, int year) {
  FUNCTION_INJECTION_BUILTIN(checkdate);
  return f_checkdate(month, day, year);
}

inline Object x_date_create(CStrRef time = null_string, CObjRef timezone = null_object) {
  FUNCTION_INJECTION_BUILTIN(date_create);
  return f_date_create(time, timezone);
}

inline void x_date_date_set(CObjRef object, int year, int month, int day) {
  FUNCTION_INJECTION_BUILTIN(date_date_set);
  f_date_date_set(object, year, month, day);
}

inline String x_date_default_timezone_get() {
  FUNCTION_INJECTION_BUILTIN(date_default_timezone_get);
  return f_date_default_timezone_get();
}

inline bool x_date_default_timezone_set(CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(date_default_timezone_set);
  return f_date_default_timezone_set(name);
}

inline String x_date_format(CObjRef object, CStrRef format) {
  FUNCTION_INJECTION_BUILTIN(date_format);
  return f_date_format(object, format);
}

inline void x_date_isodate_set(CObjRef object, int year, int week, int day = 1) {
  FUNCTION_INJECTION_BUILTIN(date_isodate_set);
  f_date_isodate_set(object, year, week, day);
}

inline void x_date_modify(CObjRef object, CStrRef modify) {
  FUNCTION_INJECTION_BUILTIN(date_modify);
  f_date_modify(object, modify);
}

inline int x_date_offset_get(CObjRef object) {
  FUNCTION_INJECTION_BUILTIN(date_offset_get);
  return f_date_offset_get(object);
}

inline Variant x_date_parse(CStrRef date) {
  FUNCTION_INJECTION_BUILTIN(date_parse);
  return f_date_parse(date);
}

inline Array x_date_sun_info(int64 ts, double latitude, double longitude) {
  FUNCTION_INJECTION_BUILTIN(date_sun_info);
  return f_date_sun_info(ts, latitude, longitude);
}

inline Variant x_date_sunrise(int64 timestamp, int format = 0, double latitude = 0.0, double longitude = 0.0, double zenith = 0.0, double gmt_offset = 99999.0) {
  FUNCTION_INJECTION_BUILTIN(date_sunrise);
  return f_date_sunrise(timestamp, format, latitude, longitude, zenith, gmt_offset);
}

inline Variant x_date_sunset(int64 timestamp, int format = 0, double latitude = 0.0, double longitude = 0.0, double zenith = 0.0, double gmt_offset = 99999.0) {
  FUNCTION_INJECTION_BUILTIN(date_sunset);
  return f_date_sunset(timestamp, format, latitude, longitude, zenith, gmt_offset);
}

inline void x_date_time_set(CObjRef object, int hour, int minute, int second = 0) {
  FUNCTION_INJECTION_BUILTIN(date_time_set);
  f_date_time_set(object, hour, minute, second);
}

inline Variant x_date_timezone_get(CObjRef object) {
  FUNCTION_INJECTION_BUILTIN(date_timezone_get);
  return f_date_timezone_get(object);
}

inline void x_date_timezone_set(CObjRef object, CObjRef timezone) {
  FUNCTION_INJECTION_BUILTIN(date_timezone_set);
  f_date_timezone_set(object, timezone);
}

inline Variant x_date(CStrRef format, int64 timestamp = TimeStamp::Current()) {
  FUNCTION_INJECTION_BUILTIN(date);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_date(format, timestamp);
}

inline Array x_getdate(int64 timestamp = TimeStamp::Current()) {
  FUNCTION_INJECTION_BUILTIN(getdate);
  return f_getdate(timestamp);
}

inline Variant x_gettimeofday(bool return_float = false) {
  FUNCTION_INJECTION_BUILTIN(gettimeofday);
  return f_gettimeofday(return_float);
}

inline Variant x_gmdate(CStrRef format, int64 timestamp = TimeStamp::Current()) {
  FUNCTION_INJECTION_BUILTIN(gmdate);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gmdate(format, timestamp);
}

inline Variant x_gmmktime(int hour = INT_MAX, int minute = INT_MAX, int second = INT_MAX, int month = INT_MAX, int day = INT_MAX, int year = INT_MAX) {
  FUNCTION_INJECTION_BUILTIN(gmmktime);
  return f_gmmktime(hour, minute, second, month, day, year);
}

inline String x_gmstrftime(CStrRef format, int64 timestamp = TimeStamp::Current()) {
  FUNCTION_INJECTION_BUILTIN(gmstrftime);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gmstrftime(format, timestamp);
}

inline Variant x_idate(CStrRef format, int64 timestamp = TimeStamp::Current()) {
  FUNCTION_INJECTION_BUILTIN(idate);
  return f_idate(format, timestamp);
}

inline Array x_localtime(int64 timestamp = TimeStamp::Current(), bool is_associative = false) {
  FUNCTION_INJECTION_BUILTIN(localtime);
  return f_localtime(timestamp, is_associative);
}

inline Variant x_microtime(bool get_as_float = false) {
  FUNCTION_INJECTION_BUILTIN(microtime);
  return f_microtime(get_as_float);
}

inline Variant x_mktime(int hour = INT_MAX, int minute = INT_MAX, int second = INT_MAX, int month = INT_MAX, int day = INT_MAX, int year = INT_MAX) {
  FUNCTION_INJECTION_BUILTIN(mktime);
  return f_mktime(hour, minute, second, month, day, year);
}

inline Variant x_strftime(CStrRef format, int64 timestamp = TimeStamp::Current()) {
  FUNCTION_INJECTION_BUILTIN(strftime);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_strftime(format, timestamp);
}

inline Variant x_strptime(CStrRef date, CStrRef format) {
  FUNCTION_INJECTION_BUILTIN(strptime);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_strptime(date, format);
}

inline Variant x_strtotime(CStrRef input, int64 timestamp = TimeStamp::Current()) {
  FUNCTION_INJECTION_BUILTIN(strtotime);
  return f_strtotime(input, timestamp);
}

inline int x_time() {
  FUNCTION_INJECTION_BUILTIN(time);
  return f_time();
}

inline Array x_timezone_abbreviations_list() {
  FUNCTION_INJECTION_BUILTIN(timezone_abbreviations_list);
  return f_timezone_abbreviations_list();
}

inline Array x_timezone_identifiers_list() {
  FUNCTION_INJECTION_BUILTIN(timezone_identifiers_list);
  return f_timezone_identifiers_list();
}

inline Variant x_timezone_name_from_abbr(CStrRef abbr, int gmtoffset = -1, bool isdst = true) {
  FUNCTION_INJECTION_BUILTIN(timezone_name_from_abbr);
  return f_timezone_name_from_abbr(abbr, gmtoffset, isdst);
}

inline String x_timezone_name_get(CObjRef object) {
  FUNCTION_INJECTION_BUILTIN(timezone_name_get);
  return f_timezone_name_get(object);
}

inline int x_timezone_offset_get(CObjRef object, CObjRef dt) {
  FUNCTION_INJECTION_BUILTIN(timezone_offset_get);
  return f_timezone_offset_get(object, dt);
}

inline Object x_timezone_open(CStrRef timezone) {
  FUNCTION_INJECTION_BUILTIN(timezone_open);
  return f_timezone_open(timezone);
}

inline Array x_timezone_transitions_get(CObjRef object) {
  FUNCTION_INJECTION_BUILTIN(timezone_transitions_get);
  return f_timezone_transitions_get(object);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_DATETIME_H__
