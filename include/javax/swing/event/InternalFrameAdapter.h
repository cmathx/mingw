// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_event_InternalFrameAdapter__
#define __javax_swing_event_InternalFrameAdapter__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class InternalFrameAdapter;
        class InternalFrameEvent;
      }
    }
  }
}

class javax::swing::event::InternalFrameAdapter : public ::java::lang::Object
{
public:
  InternalFrameAdapter ();
  virtual void internalFrameActivated (::javax::swing::event::InternalFrameEvent *) { }
  virtual void internalFrameClosed (::javax::swing::event::InternalFrameEvent *) { }
  virtual void internalFrameClosing (::javax::swing::event::InternalFrameEvent *) { }
  virtual void internalFrameDeactivated (::javax::swing::event::InternalFrameEvent *) { }
  virtual void internalFrameDeiconified (::javax::swing::event::InternalFrameEvent *) { }
  virtual void internalFrameIconified (::javax::swing::event::InternalFrameEvent *) { }
  virtual void internalFrameOpened (::javax::swing::event::InternalFrameEvent *) { }

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_event_InternalFrameAdapter__ */
