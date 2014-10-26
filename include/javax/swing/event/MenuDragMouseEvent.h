// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_event_MenuDragMouseEvent__
#define __javax_swing_event_MenuDragMouseEvent__

#pragma interface

#include <java/awt/event/MouseEvent.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class MenuDragMouseEvent;
      }
      class MenuSelectionManager;
      class MenuElement;
    }
  }
}

class javax::swing::event::MenuDragMouseEvent : public ::java::awt::event::MouseEvent
{
public:
  MenuDragMouseEvent (::java::awt::Component *, jint, jlong, jint, jint, jint, jint, jboolean, JArray< ::javax::swing::MenuElement *> *, ::javax::swing::MenuSelectionManager *);
  virtual JArray< ::javax::swing::MenuElement *> *getPath () { return path; }
  virtual ::javax::swing::MenuSelectionManager *getMenuSelectionManager () { return manager; }
private:
  JArray< ::javax::swing::MenuElement *> * __attribute__((aligned(__alignof__( ::java::awt::event::MouseEvent )))) path;
  ::javax::swing::MenuSelectionManager *manager;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_event_MenuDragMouseEvent__ */