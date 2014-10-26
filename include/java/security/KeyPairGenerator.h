// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_KeyPairGenerator__
#define __java_security_KeyPairGenerator__

#pragma interface

#include <java/security/KeyPairGeneratorSpi.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      class KeyPair;
      namespace spec
      {
        class AlgorithmParameterSpec;
      }
      class SecureRandom;
      class KeyPairGenerator;
      class Provider;
    }
  }
}

class java::security::KeyPairGenerator : public ::java::security::KeyPairGeneratorSpi
{
public:  // actually protected
  KeyPairGenerator (::java::lang::String *);
public:
  virtual ::java::lang::String *getAlgorithm () { return algorithm; }
  static ::java::security::KeyPairGenerator *getInstance (::java::lang::String *);
  static ::java::security::KeyPairGenerator *getInstance (::java::lang::String *, ::java::lang::String *);
  static ::java::security::KeyPairGenerator *getInstance (::java::lang::String *, ::java::security::Provider *);
  ::java::security::Provider *getProvider () { return provider; }
  virtual void initialize (jint);
  virtual void initialize (jint, ::java::security::SecureRandom *);
  virtual void initialize (::java::security::spec::AlgorithmParameterSpec *);
  virtual void initialize (::java::security::spec::AlgorithmParameterSpec *, ::java::security::SecureRandom *);
  ::java::security::KeyPair *genKeyPair ();
  virtual ::java::security::KeyPair *generateKeyPair ();
private:
  static ::java::lang::String *KEY_PAIR_GENERATOR;
public: // actually package-private
  ::java::security::Provider * __attribute__((aligned(__alignof__( ::java::security::KeyPairGeneratorSpi )))) provider;
private:
  ::java::lang::String *algorithm;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_KeyPairGenerator__ */
