// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_directory_AttributeModificationException__
#define __javax_naming_directory_AttributeModificationException__

#pragma interface

#include <javax/naming/NamingException.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      namespace directory
      {
        class AttributeModificationException;
        class ModificationItem;
      }
    }
  }
}

class javax::naming::directory::AttributeModificationException : public ::javax::naming::NamingException
{
public:
  AttributeModificationException ();
  AttributeModificationException (::java::lang::String *);
  virtual void setUnexecutedModifications (JArray< ::javax::naming::directory::ModificationItem *> *);
  virtual JArray< ::javax::naming::directory::ModificationItem *> *getUnexecutedModifications () { return unexecs; }
  virtual ::java::lang::String *toString ();
private:
  JArray< ::javax::naming::directory::ModificationItem *> * __attribute__((aligned(__alignof__( ::javax::naming::NamingException )))) unexecs;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_naming_directory_AttributeModificationException__ */
