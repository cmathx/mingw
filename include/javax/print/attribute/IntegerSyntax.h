// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_IntegerSyntax__
#define __javax_print_attribute_IntegerSyntax__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        class IntegerSyntax;
      }
    }
  }
}

class javax::print::attribute::IntegerSyntax : public ::java::lang::Object
{
public:  // actually protected
  IntegerSyntax (jint);
  IntegerSyntax (jint, jint, jint);
public:
  virtual jint getValue () { return value; }
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode () { return value; }
  virtual ::java::lang::String *toString ();
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object ))))  value;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_IntegerSyntax__ */
