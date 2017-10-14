package com.va.ndktaste.util;

/**
 * Created by Junmeng.Chen on 2017/10/14.
 */

public class JniUtil {


    static {
        System.loadLibrary("com_va_ndktaste_util_JniUtil");
    }

    public native String getName();

    public native int add(int a,int b);

}
