// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_reflect_Proxy__
#define __java_lang_reflect_Proxy__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

class java::lang::reflect::Proxy : public ::java::lang::Object
{
public:  // actually protected
  Proxy (::java::lang::reflect::InvocationHandler *);
public:
  static ::java::lang::Class *getProxyClass (::java::lang::ClassLoader *, JArray< ::java::lang::Class *> *);
  static ::java::lang::Object *newProxyInstance (::java::lang::ClassLoader *, JArray< ::java::lang::Class *> *, ::java::lang::reflect::InvocationHandler *);
  static jboolean isProxyClass (::java::lang::Class *);
  static ::java::lang::reflect::InvocationHandler *getInvocationHandler (::java::lang::Object *);
private:
  static ::java::lang::Class *getProxyClass0 (::java::lang::ClassLoader *, JArray< ::java::lang::Class *> *);
  static ::java::lang::reflect::Proxy$ProxyData *getProxyData0 (::java::lang::ClassLoader *, JArray< ::java::lang::Class *> *);
  static ::java::lang::Class *generateProxyClass0 (::java::lang::ClassLoader *, ::java::lang::reflect::Proxy$ProxyData *);
  static const jlong serialVersionUID = -2222568056686623797LL;
  static ::java::util::Map *proxyClasses;
public:  // actually protected
  ::java::lang::reflect::InvocationHandler * __attribute__((aligned(__alignof__( ::java::lang::Object )))) h;

  friend class java_lang_reflect_Proxy$ClassFactory;
  friend class java_lang_reflect_Proxy$ProxyData;
  friend class java_lang_reflect_Proxy$ProxySignature;
  friend class java_lang_reflect_Proxy$ProxyType;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_reflect_Proxy__ */
