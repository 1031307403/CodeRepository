/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ansen_activity_JNIActivity */


/*
 * Class:     com_ansen_activity_JNIActivity
 * Method:    test
 * Signature: ()Ljava/lang/String;
 */
jstring JNICALL Java_com_ansen_activity_JNIActivity_hello(JNIEnv *env, jobject obj){

    //jstring     (*NewStringUTF)(JNIEnv*, const char*); 把C字符串转化为java中字符串
    return (*env)->NewStringUTF(env,"C : hello world");
}
