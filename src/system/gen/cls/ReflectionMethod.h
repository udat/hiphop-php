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
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_ReflectionMethod_hf3cea799__
#define __GENERATED_cls_ReflectionMethod_hf3cea799__

#include <cls/ReflectionMethod.fw.h>
#include <cls/ReflectionFunctionAbstract.h>
#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 1570 */
FORWARD_DECLARE_CLASS(ReflectionMethod);
class c_ReflectionMethod : public c_ReflectionFunctionAbstract {
  public:

  // Properties
  Variant m_name;
  Variant m_class;

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(ReflectionMethod, ReflectionMethod)
  DECLARE_INVOKE_EX(ReflectionMethod, ReflectionMethod, ReflectionFunctionAbstract)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(CStrRef s);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_ReflectionMethod 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_ReflectionMethod 1
  static Variant os_constant(const char *s);

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual void o_getArray(Array &props, bool pubOnly = false) const;
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_ReflectionMethod 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_ReflectionMethod 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_ReflectionMethod 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  virtual Variant *o_realPropPublic(CStrRef s, int flags) const;

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_ReflectionMethod 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  void init();
  public: void t___construct(Variant v_cls, Variant v_name = NAMSTR(s_sys_ss00000000, ""));
  public: c_ReflectionMethod *create(Variant v_cls, Variant v_name = NAMSTR(s_sys_ss00000000, ""));
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: String t___tostring();
  public: static Variant ti_export(CStrRef cls, Variant v_cls, CVarRef v_name, CVarRef v_ret);
  public: Variant t_invoke(int num_args, CVarRef v_obj, Array args = Array());
  public: Variant t_invokeargs(CVarRef v_obj, CVarRef v_args);
  public: Variant t_isfinal();
  public: Variant t_isabstract();
  public: bool t_ispublic();
  public: bool t_isprivate();
  public: bool t_isprotected();
  public: Variant t_isstatic();
  public: bool t_isconstructor();
  public: bool t_isdestructor();
  public: Variant t_getmodifiers();
  public: Variant t_getclosure();
  public: Variant t_getdeclaringclass();
  public: static Variant t_export(CVarRef v_cls, CVarRef v_name, CVarRef v_ret) { return ti_export(c_ReflectionMethod::s_class_name, v_cls, v_name, v_ret); }
  DECLARE_METHOD_INVOKE_HELPERS(isprivate);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(isprotected);
  DECLARE_METHOD_INVOKE_HELPERS(isstatic);
  DECLARE_METHOD_INVOKE_HELPERS(getdeclaringclass);
  DECLARE_METHOD_INVOKE_HELPERS(isconstructor);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(isfinal);
  DECLARE_METHOD_INVOKE_HELPERS(invokeargs);
  DECLARE_METHOD_INVOKE_HELPERS(getmodifiers);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(invoke);
  DECLARE_METHOD_INVOKE_HELPERS(ispublic);
  DECLARE_METHOD_INVOKE_HELPERS(isdestructor);
  DECLARE_METHOD_INVOKE_HELPERS(getclosure);
  DECLARE_METHOD_INVOKE_HELPERS(isabstract);
};
extern const int64 q_ReflectionMethod_IS_STATIC;
extern const int64 q_ReflectionMethod_IS_PUBLIC;
extern const int64 q_ReflectionMethod_IS_PROTECTED;
extern const int64 q_ReflectionMethod_IS_PRIVATE;
extern const int64 q_ReflectionMethod_IS_ABSTRACT;
extern const int64 q_ReflectionMethod_IS_FINAL;
extern struct ObjectStaticCallbacks cw_ReflectionMethod;
Object co_ReflectionMethod(CArrRef params, bool init = true);
Object coo_ReflectionMethod();

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionMethod_hf3cea799__
