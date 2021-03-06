/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_valjni_caller_JniClientImplementation */

#ifndef _Included_com_valjni_caller_JniClientImplementation
#define _Included_com_valjni_caller_JniClientImplementation
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_valjni_caller_JniClientImplementation
 * Method:    invokeJniClientMain
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_valjni_caller_JniClientImplementation_invokeJniClientMain
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_valjni_caller_JniClientImplementation
 * Method:    pushJint
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_valjni_caller_JniClientImplementation_pushJint
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_valjni_caller_JniClientImplementation
 * Method:    pushJfloat
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_valjni_caller_JniClientImplementation_pushJfloat
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_valjni_caller_JniClientImplementation
 * Method:    pushJobject
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_valjni_caller_JniClientImplementation_pushJobject
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_valjni_caller_JniClientImplementation
 * Method:    pushJarray
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_valjni_caller_JniClientImplementation_pushJarray
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
