/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mob_paysdk_unity_OnPayListener */
#include "stdio.h"
#ifndef _Included_com_mob_paysdk_unity_OnPayListener
#define _Included_com_mob_paysdk_unity_OnPayListener
#ifdef __cplusplus
extern "C" {
#endif

typedef int (* ComMobPaySDKUnityHookFunctionWillPay)(void* jListener, void* jOrder, void* jApi, void* jTicket);
typedef void (* ComMobPaySDKUnityHookFunctionPayEnd)(void* jListener, void* jOrder, void* jApi, void* result);

JNIEXPORT jboolean JNICALL Java_com_mob_paysdk_unity_OnPayListener_nativeOnWillPay
  (JNIEnv *, jobject, jstring, jobject, jobject, jlong);

JNIEXPORT void JNICALL Java_com_mob_paysdk_unity_OnPayListener_nativeOnPayEnd
  (JNIEnv *, jobject, jobject, jobject, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif