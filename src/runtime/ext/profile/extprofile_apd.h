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

#ifndef __EXTPROFILE_APD_H__
#define __EXTPROFILE_APD_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_apd.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline bool x_override_function(CStrRef name, CStrRef args, CStrRef code) {
  FUNCTION_INJECTION_BUILTIN(override_function);
  return f_override_function(name, args, code);
}

inline bool x_rename_function(CStrRef orig_name, CStrRef new_name) {
  FUNCTION_INJECTION_BUILTIN(rename_function);
  return f_rename_function(orig_name, new_name);
}

inline void x_apd_set_browser_trace() {
  FUNCTION_INJECTION_BUILTIN(apd_set_browser_trace);
  f_apd_set_browser_trace();
}

inline String x_apd_set_pprof_trace(CStrRef dumpdir = null_string, CStrRef frament = null_string) {
  FUNCTION_INJECTION_BUILTIN(apd_set_pprof_trace);
  return f_apd_set_pprof_trace(dumpdir, frament);
}

inline bool x_apd_set_session_trace_socket(CStrRef ip_or_filename, int domain, int port, int mask) {
  FUNCTION_INJECTION_BUILTIN(apd_set_session_trace_socket);
  return f_apd_set_session_trace_socket(ip_or_filename, domain, port, mask);
}

inline void x_apd_stop_trace() {
  FUNCTION_INJECTION_BUILTIN(apd_stop_trace);
  f_apd_stop_trace();
}

inline bool x_apd_breakpoint() {
  FUNCTION_INJECTION_BUILTIN(apd_breakpoint);
  return f_apd_breakpoint();
}

inline bool x_apd_continue() {
  FUNCTION_INJECTION_BUILTIN(apd_continue);
  return f_apd_continue();
}

inline bool x_apd_echo(CStrRef output) {
  FUNCTION_INJECTION_BUILTIN(apd_echo);
  return f_apd_echo(output);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_APD_H__
