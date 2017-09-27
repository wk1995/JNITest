package com.jni;

/**
 * Created by administrator on 2017/9/26.
 */

public class JNITest {
    static
    {
        System.loadLibrary("JniTest");
    }

    public static native String Helloworld(String str);
}
