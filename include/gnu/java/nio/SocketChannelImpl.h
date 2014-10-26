// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_nio_SocketChannelImpl__
#define __gnu_java_nio_SocketChannelImpl__

#pragma interface

#include <java/nio/channels/SocketChannel.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class Socket;
      class SocketAddress;
    }
    namespace nio
    {
      class ByteBuffer;
      namespace channels
      {
        namespace spi
        {
          class SelectorProvider;
        }
      }
    }
  }
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        class SocketChannelImpl;
        class NIOSocket;
      }
      namespace net
      {
        class PlainSocketImpl;
      }
    }
  }
}

class gnu::java::nio::SocketChannelImpl : public ::java::nio::channels::SocketChannel
{
public: // actually package-private
  SocketChannelImpl (::java::nio::channels::spi::SelectorProvider *);
  SocketChannelImpl (::java::nio::channels::spi::SelectorProvider *, ::gnu::java::nio::NIOSocket *);
public:
  void finalizer ();
public: // actually package-private
  ::gnu::java::net::PlainSocketImpl *getPlainSocketImpl () { return impl; }
  jint getNativeFD ();
public:  // actually protected
  void implCloseSelectableChannel ();
  void implConfigureBlocking (jboolean);
public:
  jboolean connect (::java::net::SocketAddress *);
  jboolean finishConnect ();
  jboolean isConnected ();
  jboolean isConnectionPending () { return connectionPending; }
  ::java::net::Socket *socket () { return reinterpret_cast< ::java::net::Socket *> (socket__); }
  jint read (::java::nio::ByteBuffer *);
  jlong read (JArray< ::java::nio::ByteBuffer *> *, jint, jint);
  jint write (::java::nio::ByteBuffer *);
  jlong write (JArray< ::java::nio::ByteBuffer *> *, jint, jint);
private:
  ::gnu::java::net::PlainSocketImpl * __attribute__((aligned(__alignof__( ::java::nio::channels::SocketChannel )))) impl;
  ::gnu::java::nio::NIOSocket *socket__;
  jboolean connectionPending;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_nio_SocketChannelImpl__ */
