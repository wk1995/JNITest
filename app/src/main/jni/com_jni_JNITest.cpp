//
// Created by administrator on 2017/9/26.
//

#include "com_jni_JNITest.h"

JNIEXPORT jstring JNICALL Java_com_jni_JNITest_Helloworld
        (JNIEnv *env, jobject,jstring str) {
    return str;
}
