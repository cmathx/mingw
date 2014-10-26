// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_accessibility_AccessibleSelection__
#define __javax_accessibility_AccessibleSelection__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleSelection;
      class Accessible;
    }
  }
}

class javax::accessibility::AccessibleSelection : public ::java::lang::Object
{
public:
  virtual jint getAccessibleSelectionCount () = 0;
  virtual ::javax::accessibility::Accessible *getAccessibleSelection (jint) = 0;
  virtual jboolean isAccessibleChildSelected (jint) = 0;
  virtual void addAccessibleSelection (jint) = 0;
  virtual void removeAccessibleSelection (jint) = 0;
  virtual void clearAccessibleSelection () = 0;
  virtual void selectAllAccessibleSelection () = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_accessibility_AccessibleSelection__ */
