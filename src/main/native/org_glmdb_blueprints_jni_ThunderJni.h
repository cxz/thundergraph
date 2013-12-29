/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_glmdb_blueprints_jni_ThunderJni */

#ifndef _Included_org_glmdb_blueprints_jni_ThunderJni
#define _Included_org_glmdb_blueprints_jni_ThunderJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_init
  (JNIEnv *, jclass);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_env_get_path
 * Signature: (J[[B)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1env_1get_1path
  (JNIEnv *, jclass, jlong, jobjectArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_strerror
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1strerror
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    print_db
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_print_1db
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_db_entries
 * Signature: (JJI[I)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1db_1entries
  (JNIEnv *, jclass, jlong, jlong, jint, jintArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    glmdb_env_create
 * Signature: (Ljava/lang/String;[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_glmdb_1env_1create
  (JNIEnv *, jclass, jstring, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    glmdb_env_close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_glmdb_1env_1close
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_txn_begin
 * Signature: (JJJ[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1txn_1begin
  (JNIEnv *, jclass, jlong, jlong, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_txn_renew
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1txn_1renew
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_txn_commit
 * Signature: (JJZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1txn_1commit
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_txn_reset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1txn_1reset
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_txn_abort
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1txn_1abort
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_cursor_close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1cursor_1close
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_cursor_renew
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1cursor_1renew
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_cursor_open
 * Signature: (JJI[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1cursor_1open
  (JNIEnv *, jclass, jlong, jlong, jint, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_cursor_open_and_position_on_edge_vertex_db
 * Signature: (JJJIIJ[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1cursor_1open_1and_1position_1on_1edge_1vertex_1db
  (JNIEnv *, jclass, jlong, jlong, jlong, jint, jint, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_cursor_open_and_position_on_vertex_vertex_db
 * Signature: (JJJ[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1cursor_1open_1and_1position_1on_1vertex_1vertex_1db
  (JNIEnv *, jclass, jlong, jlong, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_cursor_open_and_position_on_edge_edge_db
 * Signature: (JJJI[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1cursor_1open_1and_1position_1on_1edge_1edge_1db
  (JNIEnv *, jclass, jlong, jlong, jlong, jint, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_add_vertex
 * Signature: (JJ[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1add_1vertex
  (JNIEnv *, jclass, jlong, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_add_edge
 * Signature: (JJJJI[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1add_1edge
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_set_property_string
 * Signature: (JJJJILjava/lang/String;ZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1set_1property_1string
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint, jstring, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_set_property_boolean
 * Signature: (JJJJIZZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1set_1property_1boolean
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint, jboolean, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_set_property_byte
 * Signature: (JJJJIBZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1set_1property_1byte
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint, jbyte, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_set_property_short
 * Signature: (JJJJISZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1set_1property_1short
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint, jshort, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_set_property_int
 * Signature: (JJJJIIZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1set_1property_1int
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint, jint, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_set_property_long
 * Signature: (JJJJIJZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1set_1property_1long
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint, jlong, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_set_property_float
 * Signature: (JJJJIFZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1set_1property_1float
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint, jfloat, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_set_property_double
 * Signature: (JJJJIDZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1set_1property_1double
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint, jdouble, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_set_property_char
 * Signature: (JJJJICZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1set_1property_1char
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint, jchar, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_property_array
 * Signature: (JJI[[BZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1property_1array
  (JNIEnv *, jclass, jlong, jlong, jint, jobjectArray, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_del_property
 * Signature: (JJI[[BZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1del_1property
  (JNIEnv *, jclass, jlong, jlong, jint, jobjectArray, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_property_keys
 * Signature: (JJ[[IZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1property_1keys
  (JNIEnv *, jclass, jlong, jlong, jobjectArray, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_set_propertykey
 * Signature: (JJLjava/lang/String;I[IZZZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1set_1propertykey
  (JNIEnv *, jclass, jlong, jlong, jstring, jint, jintArray, jboolean, jboolean, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_reindex_property
 * Signature: (JJIIZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1reindex_1property
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_property_key
 * Signature: (J[I[I[Z[[B)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1property_1key
  (JNIEnv *, jclass, jlong, jintArray, jintArray, jbooleanArray, jobjectArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_property_key
 * Signature: (J[I[I[Z[[B)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1property_1key
  (JNIEnv *, jclass, jlong, jintArray, jintArray, jbooleanArray, jobjectArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_label
 * Signature: (J[I[[B)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1label
  (JNIEnv *, jclass, jlong, jintArray, jobjectArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_label
 * Signature: (J[I[[B)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1label
  (JNIEnv *, jclass, jlong, jintArray, jobjectArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_set_label
 * Signature: (JJLjava/lang/String;[I)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1set_1label
  (JNIEnv *, jclass, jlong, jlong, jstring, jintArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_vertex
 * Signature: (JJ[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1vertex
  (JNIEnv *, jclass, jlong, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_remove_vertex
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1remove_1vertex
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex
 * Signature: (J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex
 * Signature: (JJ[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex
  (JNIEnv *, jclass, jlong, jlong, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_string_value
 * Signature: (J[JILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1string_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jstring);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_string_value
 * Signature: (J[JILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1string_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jstring);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_value_from_string_index
 * Signature: (J[JILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1value_1from_1string_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jstring);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_value_for_string_index
 * Signature: (J[JILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1value_1for_1string_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jstring);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_value_from_string_index
 * Signature: (JJILjava/lang/String;[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1value_1from_1string_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jstring, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_value_for_string_index
 * Signature: (JJILjava/lang/String;[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1value_1for_1string_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jstring, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_int_value
 * Signature: (J[JII)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1int_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jint);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_int_value
 * Signature: (J[JII)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1int_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jint);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_value_from_int_index
 * Signature: (J[JII)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1value_1from_1int_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jint);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_value_for_int_index
 * Signature: (J[JII)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1value_1for_1int_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jint);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_value_from_int_index
 * Signature: (JJII[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1value_1from_1int_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_value_for_int_index
 * Signature: (JJII[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1value_1for_1int_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_int_value
 * Signature: (J[J[I[J[JII)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1int_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jint);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_int_value
 * Signature: (J[J[I[J[JII)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1int_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jint);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_long_value
 * Signature: (J[JIJ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1long_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_long_value
 * Signature: (J[JIJ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1long_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_value_from_long_index
 * Signature: (J[JIJ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1value_1from_1long_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_value_for_long_index
 * Signature: (J[JIJ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1value_1for_1long_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_value_from_long_index
 * Signature: (JJIJ[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1value_1from_1long_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jlong, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_value_for_long_index
 * Signature: (JJIJ[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1value_1for_1long_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jlong, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_long_value
 * Signature: (J[J[I[J[JIJ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1long_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_long_value
 * Signature: (J[J[I[J[JIJ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1long_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_float_value
 * Signature: (J[JIF)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1float_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jfloat);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_float_value
 * Signature: (J[JIF)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1float_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jfloat);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_value_from_float_index
 * Signature: (J[JIF)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1value_1from_1float_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jfloat);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_value_for_float_index
 * Signature: (J[JIF)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1value_1for_1float_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jfloat);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_value_from_float_index
 * Signature: (JJIF[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1value_1from_1float_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jfloat, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_value_for_float_index
 * Signature: (JJIF[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1value_1for_1float_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jfloat, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_float_value
 * Signature: (J[J[I[J[JIF)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1float_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jfloat);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_float_value
 * Signature: (J[J[I[J[JIF)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1float_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jfloat);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_double_value
 * Signature: (J[JID)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1double_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jdouble);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_double_value
 * Signature: (J[JID)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1double_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jdouble);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_value_from_double_index
 * Signature: (J[JID)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1value_1from_1double_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jdouble);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_value_for_double_index
 * Signature: (J[JID)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1value_1for_1double_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jdouble);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_value_from_double_index
 * Signature: (JJID[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1value_1from_1double_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jdouble, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_value_for_double_index
 * Signature: (JJID[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1value_1for_1double_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jdouble, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_double_value
 * Signature: (J[J[I[J[JID)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1double_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jdouble);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_double_value
 * Signature: (J[J[I[J[JID)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1double_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jdouble);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_boolean_value
 * Signature: (J[JIZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1boolean_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_boolean_value
 * Signature: (J[JIZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1boolean_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_value_from_boolean_index
 * Signature: (J[JIZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1value_1from_1boolean_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_value_for_boolean_index
 * Signature: (J[JIZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1value_1for_1boolean_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_value_from_boolean_index
 * Signature: (JJIZ[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1value_1from_1boolean_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jboolean, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_value_for_boolean_index
 * Signature: (JJIZ[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1value_1for_1boolean_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jboolean, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_boolean_value
 * Signature: (J[J[I[J[JIZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1boolean_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_boolean_value
 * Signature: (J[J[I[J[JIZ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1boolean_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jboolean);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_short_value
 * Signature: (J[JIS)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1short_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jshort);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_short_value
 * Signature: (J[JIS)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1short_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jshort);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_value_from_short_index
 * Signature: (J[JIS)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1value_1from_1short_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jshort);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_value_for_short_index
 * Signature: (J[JIS)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1value_1for_1short_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jshort);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_value_from_short_index
 * Signature: (JJIS[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1value_1from_1short_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jshort, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_value_for_short_index
 * Signature: (JJIS[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1value_1for_1short_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jshort, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_short_value
 * Signature: (J[J[I[J[JIS)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1short_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jshort);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_short_value
 * Signature: (J[J[I[J[JIS)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1short_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jshort);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_char_value
 * Signature: (J[JIC)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1char_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jchar);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_char_value
 * Signature: (J[JIC)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1char_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jchar);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_value_from_char_index
 * Signature: (J[JIC)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1value_1from_1char_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jchar);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_value_for_char_index
 * Signature: (J[JIC)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1value_1for_1char_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jchar);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_value_from_char_index
 * Signature: (JJIC[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1value_1from_1char_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jchar, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_value_for_char_index
 * Signature: (JJIC[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1value_1for_1char_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jchar, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_char_value
 * Signature: (J[J[I[J[JIC)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1char_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jchar);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_char_value
 * Signature: (J[J[I[J[JIC)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1char_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jchar);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_byte_value
 * Signature: (J[JIB)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1byte_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jbyte);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_byte_value
 * Signature: (J[JIB)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1byte_1value
  (JNIEnv *, jclass, jlong, jlongArray, jint, jbyte);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_vertex_for_key_value_from_byte_index
 * Signature: (J[JIB)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1vertex_1for_1key_1value_1from_1byte_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jbyte);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_vertex_for_key_value_for_byte_index
 * Signature: (J[JIB)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1vertex_1for_1key_1value_1for_1byte_1index
  (JNIEnv *, jclass, jlong, jlongArray, jint, jbyte);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_value_from_byte_index
 * Signature: (JJIB[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1value_1from_1byte_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jbyte, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_value_for_byte_index
 * Signature: (JJIB[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1value_1for_1byte_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jbyte, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_byte_value
 * Signature: (J[J[I[J[JIB)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1byte_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jbyte);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_byte_value
 * Signature: (J[J[I[J[JIB)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1byte_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jbyte);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_edge
 * Signature: (JJ[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1edge
  (JNIEnv *, jclass, jlong, jlong, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_remove_edge
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1remove_1edge
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge
 * Signature: (J[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge
 * Signature: (JJ[J[I[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge
  (JNIEnv *, jclass, jlong, jlong, jlongArray, jintArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_for_key_string_value
 * Signature: (J[J[I[J[JILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1for_1key_1string_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jstring);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_for_key_string_value
 * Signature: (J[J[I[J[JILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1for_1key_1string_1value
  (JNIEnv *, jclass, jlong, jlongArray, jintArray, jlongArray, jlongArray, jint, jstring);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_from_vertex
 * Signature: (JIIJ[J[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1from_1vertex
  (JNIEnv *, jclass, jlong, jint, jint, jlong, jlongArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_from_vertex
 * Signature: (JIIJ[J[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1from_1vertex
  (JNIEnv *, jclass, jlong, jint, jint, jlong, jlongArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_current_edge_from_vertex
 * Signature: (JIIJ[J[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1current_1edge_1from_1vertex
  (JNIEnv *, jclass, jlong, jint, jint, jlong, jlongArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_first_edge_from_vertex_all_labels
 * Signature: (JIJ[I[J[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1first_1edge_1from_1vertex_1all_1labels
  (JNIEnv *, jclass, jlong, jint, jlong, jintArray, jlongArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_next_edge_from_vertex_all_labels
 * Signature: (JIJ[I[J[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1next_1edge_1from_1vertex_1all_1labels
  (JNIEnv *, jclass, jlong, jint, jlong, jintArray, jlongArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_get_current_edge_from_vertex_all_labels
 * Signature: (JIJ[I[J[J[J)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1get_1current_1edge_1from_1vertex_1all_1labels
  (JNIEnv *, jclass, jlong, jint, jlong, jintArray, jlongArray, jlongArray, jlongArray);

/*
 * Class:     org_glmdb_blueprints_jni_ThunderJni
 * Method:    mdb_delete_index
 * Signature: (JJIZI)I
 */
JNIEXPORT jint JNICALL Java_org_glmdb_blueprints_jni_ThunderJni_mdb_1delete_1index
  (JNIEnv *, jclass, jlong, jlong, jint, jboolean, jint);

#ifdef __cplusplus
}
#endif
#endif
