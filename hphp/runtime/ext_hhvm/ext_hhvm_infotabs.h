/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
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
#include "../ext/ext_misc.ext_hhvm.h"
#include "../ext/ext_socket.ext_hhvm.h"
#include "../ext/ext_memcache.ext_hhvm.h"
#include "../ext/ext_output.ext_hhvm.h"
#include "../ext/ext_xml.ext_hhvm.h"
#include "../ext/ext_math.ext_hhvm.h"
#include "../ext/ext_network.ext_hhvm.h"
#include "../ext/ext_preg.ext_hhvm.h"
#include "../ext/ext_process.ext_hhvm.h"
#include "../ext/ext_openssl.ext_hhvm.h"
#include "../ext/ext_collections.ext_hhvm.h"
#include "../ext/ext_function.ext_hhvm.h"
#include "../ext/ext_closure.ext_hhvm.h"
#include "../ext/mailparse/mime.ext_hhvm.h"
#include "../ext/mailparse/rfc822.ext_hhvm.h"
#include "../ext/ext_icu_uspoof.ext_hhvm.h"
#include "../ext/crutch.ext_hhvm.h"
#include "../ext/ext_string.ext_hhvm.h"
#include "../ext/ext_iconv.ext_hhvm.h"
#include "../ext/ext_splfile.ext_hhvm.h"
#include "../ext/ext_datetime.ext_hhvm.h"
#include "../ext/ext_reflection.ext_hhvm.h"
#include "../ext/ext_stream.ext_hhvm.h"
#include "../ext/ext_continuation.ext_hhvm.h"
#include "../ext/ext_mb.ext_hhvm.h"
#include "../ext/ext_mailparse.ext_hhvm.h"
#include "../ext/ext_curl.ext_hhvm.h"
#include "../ext/JSON_parser.ext_hhvm.h"
#include "../ext/ext_asio.ext_hhvm.h"
#include "../ext/ext_intl.ext_hhvm.h"
#include "../ext/ext_zlib.ext_hhvm.h"
#include "../ext/pdo_driver.ext_hhvm.h"
#include "../ext/ext_bcmath.ext_hhvm.h"
#include "../ext/ext_ctype.ext_hhvm.h"
#include "../ext/ext_ldap.ext_hhvm.h"
#include "../ext/ext_xmlreader.ext_hhvm.h"
#include "../ext/pdo_sqlite.ext_hhvm.h"
#include "../ext/ext_sqlite3.ext_hhvm.h"
#include "../ext/ext_imap.ext_hhvm.h"
#include "../ext/ext_xmlwriter.ext_hhvm.h"
#include "../ext/ext_apd.ext_hhvm.h"
#include "../ext/ext_variable.ext_hhvm.h"
#include "../ext/pdo_mysql.ext_hhvm.h"
#include "../ext/ext_image.ext_hhvm.h"
#include "../ext/ext_debugger.ext_hhvm.h"
#include "../ext/ext_domdocument.ext_hhvm.h"
#include "../ext/ext_soap.ext_hhvm.h"
#include "../ext/ext_url.ext_hhvm.h"
#include "../ext/ext_hash.ext_hhvm.h"
#include "../ext/ext_ipc.ext_hhvm.h"
#include "../ext/hash/hash_furc.ext_hhvm.h"
#include "../ext/hash/hash_adler32.ext_hhvm.h"
#include "../ext/hash/hash_sha.ext_hhvm.h"
#include "../ext/hash/hash_snefru.ext_hhvm.h"
#include "../ext/hash/hash_whirlpool.ext_hhvm.h"
#include "../ext/hash/hash_crc32.ext_hhvm.h"
#include "../ext/hash/hash_ripemd.ext_hhvm.h"
#include "../ext/hash/hash_haval.ext_hhvm.h"
#include "../ext/hash/hash_salsa.ext_hhvm.h"
#include "../ext/hash/hash_tiger.ext_hhvm.h"
#include "../ext/hash/hash_md.ext_hhvm.h"
#include "../ext/hash/hash_murmur.ext_hhvm.h"
#include "../ext/hash/hash_gost.ext_hhvm.h"
#include "../ext/ext_bzip2.ext_hhvm.h"
#include "../ext/ext_array.ext_hhvm.h"
#include "../ext/ext_class.ext_hhvm.h"
#include "../ext/ext_mcrypt.ext_hhvm.h"
#include "../ext/thrift/binary.ext_hhvm.h"
#include "../ext/thrift/compact.ext_hhvm.h"
#include "../ext/ext_icu.ext_hhvm.h"
#include "../ext/ext_simplexml.ext_hhvm.h"
#include "../ext/ext_mysql.ext_hhvm.h"
#include "../ext/ext_options.ext_hhvm.h"
#include "../ext/ext_json.ext_hhvm.h"
#include "../ext/ext_icu_ucsdet.ext_hhvm.h"
#include "../ext/icu/ICUMatcher.ext_hhvm.h"
#include "../ext/icu/ICUTransliterator.ext_hhvm.h"
#include "../ext/icu/LifeEventTokenizer.ext_hhvm.h"
#include "../ext/ext_icu_ucnv.ext_hhvm.h"
#include "../ext/ext_posix.ext_hhvm.h"
#include "../ext/ext_spl.ext_hhvm.h"
#include "../ext/ext_server.ext_hhvm.h"
#include "../ext/ext_apc.ext_hhvm.h"
#include "../ext/ext_hotprofiler.ext_hhvm.h"
#include "../ext/ext_fb.ext_hhvm.h"
#include "../ext/ext_imagesprite.ext_hhvm.h"
#include "../ext/ext_apache.ext_hhvm.h"
#include "../ext/ext_thread.ext_hhvm.h"
#include "../ext/ext_file.ext_hhvm.h"
#include "../ext/asio/static_wait_handle.ext_hhvm.h"
#include "../ext/asio/blockable_wait_handle.ext_hhvm.h"
#include "../ext/asio/static_result_wait_handle.ext_hhvm.h"
#include "../ext/asio/continuation_wait_handle.ext_hhvm.h"
#include "../ext/asio/asio_context.ext_hhvm.h"
#include "../ext/asio/set_result_to_ref_wait_handle.ext_hhvm.h"
#include "../ext/asio/asio_session.ext_hhvm.h"
#include "../ext/asio/waitable_wait_handle.ext_hhvm.h"
#include "../ext/asio/static_exception_wait_handle.ext_hhvm.h"
#include "../ext/asio/wait_handle.ext_hhvm.h"
#include "../ext/asio/gen_array_wait_handle.ext_hhvm.h"
#include "../ext/asio/reschedule_wait_handle.ext_hhvm.h"
#include "../ext/ext_error.ext_hhvm.h"
#include "../ext/ext_pdo.ext_hhvm.h"
#include "../ext/ext_session.ext_hhvm.h"
#include "../ext/ext_iterator.ext_hhvm.h"
#include "../ext/ext_magick.ext_hhvm.h"
#include "../ext/extension.ext_hhvm.h"
#include "../ext/ext_memcached.ext_hhvm.h"
#include "../ext/mysql_stats.ext_hhvm.h"
#include "../ext/soap/soap.ext_hhvm.h"
#include "../ext/soap/schema.ext_hhvm.h"
#include "../ext/soap/packet.ext_hhvm.h"
#include "../ext/soap/xml.ext_hhvm.h"
#include "../ext/soap/sdl.ext_hhvm.h"
#include "../ext/soap/encoding.ext_hhvm.h"
#include "../base/builtin_functions.ext_hhvm.h"
