// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/BuildInfo

#ifndef org_chromium_base_BuildInfo_JNI
#define org_chromium_base_BuildInfo_JNI

#include <jni.h>
#include "base/android/jni_generator/jni_generator_helper.h"
// Step 1: forward declarations.
namespace {
const char kBuildInfoClassPath[] = "org/chromium/base/BuildInfo";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_BuildInfo_clazz = NULL;

}  // namespace

// Step 2: method stubs.

static base::subtle::AtomicWord g_BuildInfo_getLanguage = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_BuildInfo_getLanguage(JNIEnv* env, jobject context) {
  /* Must call RegisterNativesImpl()  */
  CHECK_CLAZZ(env, g_BuildInfo_clazz,
      g_BuildInfo_clazz, NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_BuildInfo_clazz,
      "getLanguage",

"("
"Landroid/content/Context;"
")"
"Ljava/lang/String;",
      &g_BuildInfo_getLanguage);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(g_BuildInfo_clazz,
          method_id, context));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_BuildInfo_getDevice = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_BuildInfo_getDevice(JNIEnv* env) {
  /* Must call RegisterNativesImpl()  */
  CHECK_CLAZZ(env, g_BuildInfo_clazz,
      g_BuildInfo_clazz, NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_BuildInfo_clazz,
      "getDevice",

"("
")"
"Ljava/lang/String;",
      &g_BuildInfo_getDevice);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(g_BuildInfo_clazz,
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_BuildInfo_getBrand = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_BuildInfo_getBrand(JNIEnv* env) {
  /* Must call RegisterNativesImpl()  */
  CHECK_CLAZZ(env, g_BuildInfo_clazz,
      g_BuildInfo_clazz, NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_BuildInfo_clazz,
      "getBrand",

"("
")"
"Ljava/lang/String;",
      &g_BuildInfo_getBrand);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(g_BuildInfo_clazz,
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_BuildInfo_getAndroidBuildId = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_BuildInfo_getAndroidBuildId(JNIEnv* env) {
  /* Must call RegisterNativesImpl()  */
  CHECK_CLAZZ(env, g_BuildInfo_clazz,
      g_BuildInfo_clazz, NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_BuildInfo_clazz,
      "getAndroidBuildId",

"("
")"
"Ljava/lang/String;",
      &g_BuildInfo_getAndroidBuildId);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(g_BuildInfo_clazz,
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_BuildInfo_getAndroidBuildFingerprint = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_BuildInfo_getAndroidBuildFingerprint(JNIEnv* env) {
  /* Must call RegisterNativesImpl()  */
  CHECK_CLAZZ(env, g_BuildInfo_clazz,
      g_BuildInfo_clazz, NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_BuildInfo_clazz,
      "getAndroidBuildFingerprint",

"("
")"
"Ljava/lang/String;",
      &g_BuildInfo_getAndroidBuildFingerprint);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(g_BuildInfo_clazz,
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_BuildInfo_getDeviceModel = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_BuildInfo_getDeviceModel(JNIEnv* env) {
  /* Must call RegisterNativesImpl()  */
  CHECK_CLAZZ(env, g_BuildInfo_clazz,
      g_BuildInfo_clazz, NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_BuildInfo_clazz,
      "getDeviceModel",

"("
")"
"Ljava/lang/String;",
      &g_BuildInfo_getDeviceModel);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(g_BuildInfo_clazz,
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_BuildInfo_getPackageVersionCode = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_BuildInfo_getPackageVersionCode(JNIEnv* env, jobject context) {
  /* Must call RegisterNativesImpl()  */
  CHECK_CLAZZ(env, g_BuildInfo_clazz,
      g_BuildInfo_clazz, NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_BuildInfo_clazz,
      "getPackageVersionCode",

"("
"Landroid/content/Context;"
")"
"Ljava/lang/String;",
      &g_BuildInfo_getPackageVersionCode);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(g_BuildInfo_clazz,
          method_id, context));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_BuildInfo_getPackageVersionName = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_BuildInfo_getPackageVersionName(JNIEnv* env, jobject context) {
  /* Must call RegisterNativesImpl()  */
  CHECK_CLAZZ(env, g_BuildInfo_clazz,
      g_BuildInfo_clazz, NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_BuildInfo_clazz,
      "getPackageVersionName",

"("
"Landroid/content/Context;"
")"
"Ljava/lang/String;",
      &g_BuildInfo_getPackageVersionName);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(g_BuildInfo_clazz,
          method_id, context));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_BuildInfo_getPackageLabel = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_BuildInfo_getPackageLabel(JNIEnv* env, jobject context) {
  /* Must call RegisterNativesImpl()  */
  CHECK_CLAZZ(env, g_BuildInfo_clazz,
      g_BuildInfo_clazz, NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_BuildInfo_clazz,
      "getPackageLabel",

"("
"Landroid/content/Context;"
")"
"Ljava/lang/String;",
      &g_BuildInfo_getPackageLabel);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(g_BuildInfo_clazz,
          method_id, context));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_BuildInfo_getPackageName = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_BuildInfo_getPackageName(JNIEnv* env, jobject context) {
  /* Must call RegisterNativesImpl()  */
  CHECK_CLAZZ(env, g_BuildInfo_clazz,
      g_BuildInfo_clazz, NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_BuildInfo_clazz,
      "getPackageName",

"("
"Landroid/content/Context;"
")"
"Ljava/lang/String;",
      &g_BuildInfo_getPackageName);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(g_BuildInfo_clazz,
          method_id, context));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_BuildInfo_getSdkInt = 0;
static jint Java_BuildInfo_getSdkInt(JNIEnv* env) {
  /* Must call RegisterNativesImpl()  */
  CHECK_CLAZZ(env, g_BuildInfo_clazz,
      g_BuildInfo_clazz, 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_BuildInfo_clazz,
      "getSdkInt",

"("
")"
"I",
      &g_BuildInfo_getSdkInt);

  jint ret =
      env->CallStaticIntMethod(g_BuildInfo_clazz,
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {
  g_BuildInfo_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kBuildInfoClassPath).obj()));

  return true;
}

#endif  // org_chromium_base_BuildInfo_JNI
