// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicViewportUI__
#define __javax_swing_plaf_basic_BasicViewportUI__

#pragma interface

#include <javax/swing/plaf/ViewportUI.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Graphics;
      class Dimension;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
          class BasicViewportUI;
        }
        class ComponentUI;
      }
      class JComponent;
    }
  }
}

class javax::swing::plaf::basic::BasicViewportUI : public ::javax::swing::plaf::ViewportUI
{
public:
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void installUI (::javax::swing::JComponent *);
  virtual ::java::awt::Dimension *getPreferredSize (::javax::swing::JComponent *);
  virtual void paint (::java::awt::Graphics *, ::javax::swing::JComponent *);
  BasicViewportUI ();

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicViewportUI__ */