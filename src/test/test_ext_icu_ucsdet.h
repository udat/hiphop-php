/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
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

#ifndef __TEST_EXT_ICU_UCSDET_H__
#define __TEST_EXT_ICU_UCSDET_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtIcu_ucsdet : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

 private:
  bool detect_and_convert_to_utf8(CStrRef bytes, CStrRef utf8);

  bool test_basics();

  bool test_uninitialized();
  bool test_empty();
  bool test_cannot_detect();
  bool test_declared_encoding();

  // English and Western European
  bool test_hello_world();
  bool test_windows_1252();

  // Eastern European
  bool test_windows_1250();

  // Arabic
  bool test_windows_1256();

  // Japanese
  bool test_shift_jis();
  bool test_euc_jp();
  bool test_iso_2022_jp();

  // Chinese
  bool test_gb2312();
  bool test_big5();

  // Cyrillic
  bool test_koi8r();
  bool test_windows_1251();

  // Universal
  bool test_utf8();
  bool test_utf16();
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_ICU_UCSDET_H__
