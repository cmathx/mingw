// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_server_SkeletonNotFoundException__
#define __java_rmi_server_SkeletonNotFoundException__

#pragma interface

#include <java/rmi/RemoteException.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace server
      {
        class SkeletonNotFoundException;
      }
    }
  }
}

class java::rmi::server::SkeletonNotFoundException : public ::java::rmi::RemoteException
{
public:
  SkeletonNotFoundException (::java::lang::String *);
  SkeletonNotFoundException (::java::lang::String *, ::java::lang::Exception *);
private:
  static const jlong serialVersionUID = -7860299673822761231LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_rmi_server_SkeletonNotFoundException__ */
