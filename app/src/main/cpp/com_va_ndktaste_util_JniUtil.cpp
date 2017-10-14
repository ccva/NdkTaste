//
// Created by win7 on 2017/10/14.
//

#include <jni.h>
#include "com_va_ndktaste_util_JniUtil.h"

JNIEXPORT jstring JNICALL Java_com_va_ndktaste_util_JniUtil_getName(JNIEnv *env, jobject obj) {
    return env->NewStringUTF("fuck the world");
}

JNIEXPORT jint JNICALL
Java_com_va_ndktaste_util_JniUtil_add(JNIEnv *env, jobject obj, jint a, jint b) {
    return a + b;
}