#include <jni.h>

JNIEXPORT void JNICALL Java_bin_mt_signature_KillerApplication_hookApkPath(
    JNIEnv* env, jclass clazz, jstring original_path, jstring target_path) {
    // 空实现
    return;
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved) {
    return JNI_VERSION_1_6;
}
