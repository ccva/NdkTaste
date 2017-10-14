#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_va_ndktaste_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_va_ndktaste_MainActivity_fuckString(JNIEnv *env, jobject) {
    std::string fuck = "fuck the world";
    return env->NewStringUTF(fuck.c_str());
}
