// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_LongViewBufferImpl__
#define __java_nio_LongViewBufferImpl__

#pragma interface

#include <java/nio/LongBuffer.h>

extern "Java"
{
  namespace java
  {
    namespace nio
    {
      class LongViewBufferImpl;
      class LongBuffer;
      class ByteOrder;
      class ByteBuffer;
    }
  }
}

class java::nio::LongViewBufferImpl : public ::java::nio::LongBuffer
{
public:
  LongViewBufferImpl (::java::nio::ByteBuffer *, jint, jint, jint, jint, jint, jboolean, ::java::nio::ByteOrder *);
  virtual jlong get ();
  virtual jlong get (jint);
  virtual ::java::nio::LongBuffer *put (jlong);
  virtual ::java::nio::LongBuffer *put (jint, jlong);
  virtual ::java::nio::LongBuffer *compact ();
  virtual ::java::nio::LongBuffer *slice ();
public: // actually package-private
  virtual ::java::nio::LongBuffer *duplicate (jboolean);
public:
  virtual ::java::nio::LongBuffer *duplicate ();
  virtual ::java::nio::LongBuffer *asReadOnlyBuffer ();
  virtual jboolean isReadOnly () { return readOnly; }
  virtual jboolean isDirect ();
  virtual ::java::nio::ByteOrder *order () { return endian; }
private:
  jint __attribute__((aligned(__alignof__( ::java::nio::LongBuffer ))))  offset;
  ::java::nio::ByteBuffer *bb;
  jboolean readOnly;
  ::java::nio::ByteOrder *endian;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_nio_LongViewBufferImpl__ */
