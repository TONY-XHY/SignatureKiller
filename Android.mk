LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := SignatureKiller
LOCAL_SRC_FILES := signature_killer.c
include $(BUILD_SHARED_LIBRARY)
