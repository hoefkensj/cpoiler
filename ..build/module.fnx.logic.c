/* Generated code for Python module 'fnx.logic'
 * created by Nuitka version 0.7.7
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_fnx$logic" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_fnx$logic;
PyDictObject *moduledict_fnx$logic;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[100];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[100];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("fnx.logic"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 100; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_fnx$logic(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 100; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_324ed1f72eb3ae3ec09df0ae9f76a007;
static PyCodeObject *codeobj_99f9812743a62f644ddb4cd6ed7f2ebd;
static PyCodeObject *codeobj_439f2d2b0bff260b22e0ffe2ba1f139b;
static PyCodeObject *codeobj_c5459eb6bc12eca2b88e8b55a89a3986;
static PyCodeObject *codeobj_7565e33616395cd96966b72e0ebe34b7;
static PyCodeObject *codeobj_f401008fd5d0f0847d6696a435d69e0b;
static PyCodeObject *codeobj_759cd855dada2f9f1c49dc5ca5648ea5;
static PyCodeObject *codeobj_364804ccab943f372ff0884befe882e9;
static PyCodeObject *codeobj_50f5f6d1b9937608f14f74533cbd8208;
static PyCodeObject *codeobj_d27e82be3d96b43a3cc3f7e824765d91;
static PyCodeObject *codeobj_05a3d434e498c793f8d2e519b6b7c850;
static PyCodeObject *codeobj_f25970634c717377efd4114296ee49db;
static PyCodeObject *codeobj_a5dd39b87b9e50213b569daa6e98615f;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[72]; CHECK_OBJECT(module_filename_obj);
    codeobj_324ed1f72eb3ae3ec09df0ae9f76a007 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[87], NULL, 1, 0, 0);
    codeobj_99f9812743a62f644ddb4cd6ed7f2ebd = MAKE_CODEOBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[88], NULL, 1, 0, 0);
    codeobj_439f2d2b0bff260b22e0ffe2ba1f139b = MAKE_CODEOBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[89], NULL, 1, 0, 0);
    codeobj_c5459eb6bc12eca2b88e8b55a89a3986 = MAKE_CODEOBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[90], NULL, 1, 0, 0);
    codeobj_7565e33616395cd96966b72e0ebe34b7 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[91], NULL, NULL, 0, 0, 0);
    codeobj_f401008fd5d0f0847d6696a435d69e0b = MAKE_CODEOBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[92], NULL, 2, 0, 0);
    codeobj_759cd855dada2f9f1c49dc5ca5648ea5 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[66], mod_consts[93], NULL, 1, 0, 0);
    codeobj_364804ccab943f372ff0884befe882e9 = MAKE_CODEOBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[94], NULL, 1, 0, 0);
    codeobj_50f5f6d1b9937608f14f74533cbd8208 = MAKE_CODEOBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[95], NULL, 2, 0, 0);
    codeobj_d27e82be3d96b43a3cc3f7e824765d91 = MAKE_CODEOBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[96], NULL, 2, 0, 0);
    codeobj_05a3d434e498c793f8d2e519b6b7c850 = MAKE_CODEOBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[97], NULL, 1, 0, 0);
    codeobj_f25970634c717377efd4114296ee49db = MAKE_CODEOBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[98], NULL, 1, 0, 0);
    codeobj_a5dd39b87b9e50213b569daa6e98615f = MAKE_CODEOBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[99], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_fnx$logic$$$function__1_xnot_bitwise();


static PyObject *MAKE_FUNCTION_fnx$logic$$$function__2_xnot();


static PyObject *MAKE_FUNCTION_fnx$logic$$$function__3_xnand();


static PyObject *MAKE_FUNCTION_fnx$logic$$$function__4_xnand_bitwise();


static PyObject *MAKE_FUNCTION_fnx$logic$$$function__5_xtonib();


static PyObject *MAKE_FUNCTION_fnx$logic$$$function__6_rebase2ctx();


static PyObject *MAKE_FUNCTION_fnx$logic$$$function__7_rowboat();


static PyObject *MAKE_FUNCTION_fnx$logic$$$function__8_table();


// The module function definitions.
static PyObject *impl_fnx$logic$$$function__1_xnot_bitwise(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[0];
    PyObject *var_ln = NULL;
    PyObject *var_output = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_f25970634c717377efd4114296ee49db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_99f9812743a62f644ddb4cd6ed7f2ebd_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_99f9812743a62f644ddb4cd6ed7f2ebd_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_f25970634c717377efd4114296ee49db = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f25970634c717377efd4114296ee49db)) {
        Py_XDECREF(cache_frame_f25970634c717377efd4114296ee49db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f25970634c717377efd4114296ee49db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f25970634c717377efd4114296ee49db = MAKE_FUNCTION_FRAME(codeobj_f25970634c717377efd4114296ee49db, module_fnx$logic, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f25970634c717377efd4114296ee49db->m_type_description == NULL);
    frame_f25970634c717377efd4114296ee49db = cache_frame_f25970634c717377efd4114296ee49db;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f25970634c717377efd4114296ee49db);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f25970634c717377efd4114296ee49db) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_A);
        tmp_len_arg_1 = par_A;
        tmp_assign_source_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_ln == NULL);
        var_ln = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_A);
        tmp_expression_value_1 = par_A;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert(old != NULL);
            par_A = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_A);
        tmp_expression_value_2 = par_A;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ln);
        tmp_args_element_value_1 = var_ln;
        tmp_args_element_value_2 = mod_consts[2];
        frame_f25970634c717377efd4114296ee49db->m_frame.f_lineno = 11;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert(old != NULL);
            par_A = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[3];
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            CHECK_OBJECT(var_ln);
            tmp_xrange_low_1 = var_ln;
            tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_6;
        }
        if (isFrameUnusable(cache_frame_99f9812743a62f644ddb4cd6ed7f2ebd_2)) {
            Py_XDECREF(cache_frame_99f9812743a62f644ddb4cd6ed7f2ebd_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_99f9812743a62f644ddb4cd6ed7f2ebd_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_99f9812743a62f644ddb4cd6ed7f2ebd_2 = MAKE_FUNCTION_FRAME(codeobj_99f9812743a62f644ddb4cd6ed7f2ebd, module_fnx$logic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_99f9812743a62f644ddb4cd6ed7f2ebd_2->m_type_description == NULL);
        frame_99f9812743a62f644ddb4cd6ed7f2ebd_2 = cache_frame_99f9812743a62f644ddb4cd6ed7f2ebd_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_99f9812743a62f644ddb4cd6ed7f2ebd_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_99f9812743a62f644ddb4cd6ed7f2ebd_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 13;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_8;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(par_A);
            tmp_expression_value_3 = par_A;
            CHECK_OBJECT(outline_0_var_i);
            tmp_subscript_value_2 = outline_0_var_i;
            tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            frame_99f9812743a62f644ddb4cd6ed7f2ebd_2->m_frame.f_lineno = 13;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_99f9812743a62f644ddb4cd6ed7f2ebd_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_99f9812743a62f644ddb4cd6ed7f2ebd_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_99f9812743a62f644ddb4cd6ed7f2ebd_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_99f9812743a62f644ddb4cd6ed7f2ebd_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_99f9812743a62f644ddb4cd6ed7f2ebd_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_99f9812743a62f644ddb4cd6ed7f2ebd_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_99f9812743a62f644ddb4cd6ed7f2ebd_2,
            type_description_2,
            outline_0_var_i,
            par_A
        );


        // Release cached frame if used for exception.
        if (frame_99f9812743a62f644ddb4cd6ed7f2ebd_2 == cache_frame_99f9812743a62f644ddb4cd6ed7f2ebd_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_99f9812743a62f644ddb4cd6ed7f2ebd_2);
            cache_frame_99f9812743a62f644ddb4cd6ed7f2ebd_2 = NULL;
        }

        assertFrameObject(frame_99f9812743a62f644ddb4cd6ed7f2ebd_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 13;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_assign_source_4 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f25970634c717377efd4114296ee49db);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f25970634c717377efd4114296ee49db);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f25970634c717377efd4114296ee49db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f25970634c717377efd4114296ee49db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f25970634c717377efd4114296ee49db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f25970634c717377efd4114296ee49db,
        type_description_1,
        par_A,
        var_ln,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_f25970634c717377efd4114296ee49db == cache_frame_f25970634c717377efd4114296ee49db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f25970634c717377efd4114296ee49db);
        cache_frame_f25970634c717377efd4114296ee49db = NULL;
    }

    assertFrameObject(frame_f25970634c717377efd4114296ee49db);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    {
        PyObject *tmp_str_arg_value_2;
        CHECK_OBJECT(var_output);
        tmp_str_arg_value_2 = var_output;
        tmp_return_value = UNICODE_UPPER(tmp_str_arg_value_2);
        assert(!(tmp_return_value == NULL));
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    par_A = NULL;
    CHECK_OBJECT(var_ln);
    Py_DECREF(var_ln);
    var_ln = NULL;
    CHECK_OBJECT(var_output);
    Py_DECREF(var_output);
    var_output = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(var_ln);
    var_ln = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fnx$logic$$$function__2_xnot(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    struct Nuitka_FrameObject *frame_05a3d434e498c793f8d2e519b6b7c850;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_05a3d434e498c793f8d2e519b6b7c850 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_05a3d434e498c793f8d2e519b6b7c850)) {
        Py_XDECREF(cache_frame_05a3d434e498c793f8d2e519b6b7c850);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05a3d434e498c793f8d2e519b6b7c850 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05a3d434e498c793f8d2e519b6b7c850 = MAKE_FUNCTION_FRAME(codeobj_05a3d434e498c793f8d2e519b6b7c850, module_fnx$logic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_05a3d434e498c793f8d2e519b6b7c850->m_type_description == NULL);
    frame_05a3d434e498c793f8d2e519b6b7c850 = cache_frame_05a3d434e498c793f8d2e519b6b7c850;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_05a3d434e498c793f8d2e519b6b7c850);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_05a3d434e498c793f8d2e519b6b7c850) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        CHECK_OBJECT(par_a);
        tmp_args_element_value_2 = par_a;
        frame_05a3d434e498c793f8d2e519b6b7c850->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05a3d434e498c793f8d2e519b6b7c850);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_05a3d434e498c793f8d2e519b6b7c850);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05a3d434e498c793f8d2e519b6b7c850);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05a3d434e498c793f8d2e519b6b7c850, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05a3d434e498c793f8d2e519b6b7c850->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05a3d434e498c793f8d2e519b6b7c850, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05a3d434e498c793f8d2e519b6b7c850,
        type_description_1,
        par_a
    );


    // Release cached frame if used for exception.
    if (frame_05a3d434e498c793f8d2e519b6b7c850 == cache_frame_05a3d434e498c793f8d2e519b6b7c850) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_05a3d434e498c793f8d2e519b6b7c850);
        cache_frame_05a3d434e498c793f8d2e519b6b7c850 = NULL;
    }

    assertFrameObject(frame_05a3d434e498c793f8d2e519b6b7c850);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fnx$logic$$$function__3_xnand(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_b = python_pars[1];
    PyObject *var_nand = NULL;
    struct Nuitka_FrameObject *frame_50f5f6d1b9937608f14f74533cbd8208;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_50f5f6d1b9937608f14f74533cbd8208 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_50f5f6d1b9937608f14f74533cbd8208)) {
        Py_XDECREF(cache_frame_50f5f6d1b9937608f14f74533cbd8208);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50f5f6d1b9937608f14f74533cbd8208 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50f5f6d1b9937608f14f74533cbd8208 = MAKE_FUNCTION_FRAME(codeobj_50f5f6d1b9937608f14f74533cbd8208, module_fnx$logic, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_50f5f6d1b9937608f14f74533cbd8208->m_type_description == NULL);
    frame_50f5f6d1b9937608f14f74533cbd8208 = cache_frame_50f5f6d1b9937608f14f74533cbd8208;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_50f5f6d1b9937608f14f74533cbd8208);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_50f5f6d1b9937608f14f74533cbd8208) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_value_value_1;
        PyObject *tmp_base_value_1;
        CHECK_OBJECT(par_a);
        tmp_value_value_1 = par_a;
        tmp_base_value_1 = mod_consts[6];
        tmp_assign_source_1 = BUILTIN_INT2(tmp_value_value_1, tmp_base_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert(old != NULL);
            par_a = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_value_value_2;
        PyObject *tmp_base_value_2;
        CHECK_OBJECT(par_b);
        tmp_value_value_2 = par_b;
        tmp_base_value_2 = mod_consts[6];
        tmp_assign_source_2 = BUILTIN_INT2(tmp_value_value_2, tmp_base_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_b;
            assert(old != NULL);
            par_b = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_1;
        PyObject *tmp_right_value_2;
        CHECK_OBJECT(par_a);
        tmp_left_value_2 = par_a;
        CHECK_OBJECT(par_b);
        tmp_right_value_1 = par_b;
        tmp_operand_value_1 = BINARY_OPERATION_BITAND_OBJECT_LONG_LONG(tmp_left_value_2, tmp_right_value_1);
        assert(!(tmp_operand_value_1 == NULL));
        tmp_left_value_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_2 = mod_consts[6];
        tmp_assign_source_3 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_2);
        Py_DECREF(tmp_left_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_nand == NULL);
        var_nand = tmp_assign_source_3;
    }
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_hex_arg_1;
        PyObject *tmp_chars_value_1;
        CHECK_OBJECT(var_nand);
        tmp_hex_arg_1 = var_nand;
        tmp_str_arg_value_1 = BUILTIN_HEX(tmp_hex_arg_1);
        if (tmp_str_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_chars_value_1 = mod_consts[7];
        tmp_return_value = UNICODE_LSTRIP2(tmp_str_arg_value_1, tmp_chars_value_1);
        Py_DECREF(tmp_str_arg_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_50f5f6d1b9937608f14f74533cbd8208);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_50f5f6d1b9937608f14f74533cbd8208);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_50f5f6d1b9937608f14f74533cbd8208);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_50f5f6d1b9937608f14f74533cbd8208, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50f5f6d1b9937608f14f74533cbd8208->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50f5f6d1b9937608f14f74533cbd8208, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50f5f6d1b9937608f14f74533cbd8208,
        type_description_1,
        par_a,
        par_b,
        var_nand
    );


    // Release cached frame if used for exception.
    if (frame_50f5f6d1b9937608f14f74533cbd8208 == cache_frame_50f5f6d1b9937608f14f74533cbd8208) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_50f5f6d1b9937608f14f74533cbd8208);
        cache_frame_50f5f6d1b9937608f14f74533cbd8208 = NULL;
    }

    assertFrameObject(frame_50f5f6d1b9937608f14f74533cbd8208);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    par_a = NULL;
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    par_b = NULL;
    CHECK_OBJECT(var_nand);
    Py_DECREF(var_nand);
    var_nand = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    par_a = NULL;
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    par_b = NULL;
    Py_XDECREF(var_nand);
    var_nand = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fnx$logic$$$function__4_xnand_bitwise(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[0];
    PyObject *par_B = python_pars[1];
    PyObject *var_ln = NULL;
    PyObject *var_output = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_d27e82be3d96b43a3cc3f7e824765d91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_439f2d2b0bff260b22e0ffe2ba1f139b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_439f2d2b0bff260b22e0ffe2ba1f139b_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d27e82be3d96b43a3cc3f7e824765d91 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d27e82be3d96b43a3cc3f7e824765d91)) {
        Py_XDECREF(cache_frame_d27e82be3d96b43a3cc3f7e824765d91);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d27e82be3d96b43a3cc3f7e824765d91 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d27e82be3d96b43a3cc3f7e824765d91 = MAKE_FUNCTION_FRAME(codeobj_d27e82be3d96b43a3cc3f7e824765d91, module_fnx$logic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d27e82be3d96b43a3cc3f7e824765d91->m_type_description == NULL);
    frame_d27e82be3d96b43a3cc3f7e824765d91 = cache_frame_d27e82be3d96b43a3cc3f7e824765d91;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d27e82be3d96b43a3cc3f7e824765d91);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d27e82be3d96b43a3cc3f7e824765d91) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(par_A);
        tmp_len_arg_2 = par_A;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_B);
        tmp_len_arg_3 = par_B;
        tmp_cmp_expr_right_1 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 26;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_A);
        tmp_len_arg_1 = par_A;
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_B);
        tmp_len_arg_1 = par_B;
        condexpr_end_1:;
        tmp_assign_source_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_ln == NULL);
        var_ln = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_A);
        tmp_expression_value_2 = par_A;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d27e82be3d96b43a3cc3f7e824765d91->m_frame.f_lineno = 27;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[9]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ln);
        tmp_args_element_value_1 = var_ln;
        tmp_args_element_value_2 = mod_consts[2];
        frame_d27e82be3d96b43a3cc3f7e824765d91->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert(old != NULL);
            par_A = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_B);
        tmp_expression_value_4 = par_B;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d27e82be3d96b43a3cc3f7e824765d91->m_frame.f_lineno = 28;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[9]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ln);
        tmp_args_element_value_3 = var_ln;
        tmp_args_element_value_4 = mod_consts[2];
        frame_d27e82be3d96b43a3cc3f7e824765d91->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_B;
            assert(old != NULL);
            par_B = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[3];
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            CHECK_OBJECT(var_ln);
            tmp_xrange_low_1 = var_ln;
            tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_6;
        }
        if (isFrameUnusable(cache_frame_439f2d2b0bff260b22e0ffe2ba1f139b_2)) {
            Py_XDECREF(cache_frame_439f2d2b0bff260b22e0ffe2ba1f139b_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_439f2d2b0bff260b22e0ffe2ba1f139b_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_439f2d2b0bff260b22e0ffe2ba1f139b_2 = MAKE_FUNCTION_FRAME(codeobj_439f2d2b0bff260b22e0ffe2ba1f139b, module_fnx$logic, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_439f2d2b0bff260b22e0ffe2ba1f139b_2->m_type_description == NULL);
        frame_439f2d2b0bff260b22e0ffe2ba1f139b_2 = cache_frame_439f2d2b0bff260b22e0ffe2ba1f139b_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_439f2d2b0bff260b22e0ffe2ba1f139b_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_439f2d2b0bff260b22e0ffe2ba1f139b_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 29;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_8;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(par_A);
            tmp_expression_value_5 = par_A;
            CHECK_OBJECT(outline_0_var_i);
            tmp_subscript_value_1 = outline_0_var_i;
            tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
            if (tmp_args_element_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(par_B);
            tmp_expression_value_6 = par_B;
            CHECK_OBJECT(outline_0_var_i);
            tmp_subscript_value_2 = outline_0_var_i;
            tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_5);

                exception_lineno = 29;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            frame_439f2d2b0bff260b22e0ffe2ba1f139b_2->m_frame.f_lineno = 29;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
            }

            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_439f2d2b0bff260b22e0ffe2ba1f139b_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_439f2d2b0bff260b22e0ffe2ba1f139b_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_439f2d2b0bff260b22e0ffe2ba1f139b_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_439f2d2b0bff260b22e0ffe2ba1f139b_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_439f2d2b0bff260b22e0ffe2ba1f139b_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_439f2d2b0bff260b22e0ffe2ba1f139b_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_439f2d2b0bff260b22e0ffe2ba1f139b_2,
            type_description_2,
            outline_0_var_i,
            par_A,
            par_B
        );


        // Release cached frame if used for exception.
        if (frame_439f2d2b0bff260b22e0ffe2ba1f139b_2 == cache_frame_439f2d2b0bff260b22e0ffe2ba1f139b_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_439f2d2b0bff260b22e0ffe2ba1f139b_2);
            cache_frame_439f2d2b0bff260b22e0ffe2ba1f139b_2 = NULL;
        }

        assertFrameObject(frame_439f2d2b0bff260b22e0ffe2ba1f139b_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 29;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_assign_source_4 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d27e82be3d96b43a3cc3f7e824765d91);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d27e82be3d96b43a3cc3f7e824765d91);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d27e82be3d96b43a3cc3f7e824765d91, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d27e82be3d96b43a3cc3f7e824765d91->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d27e82be3d96b43a3cc3f7e824765d91, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d27e82be3d96b43a3cc3f7e824765d91,
        type_description_1,
        par_A,
        par_B,
        var_ln,
        var_output
    );


    // Release cached frame if used for exception.
    if (frame_d27e82be3d96b43a3cc3f7e824765d91 == cache_frame_d27e82be3d96b43a3cc3f7e824765d91) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d27e82be3d96b43a3cc3f7e824765d91);
        cache_frame_d27e82be3d96b43a3cc3f7e824765d91 = NULL;
    }

    assertFrameObject(frame_d27e82be3d96b43a3cc3f7e824765d91);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_str_arg_value_2;
        tmp_left_value_1 = mod_consts[7];
        CHECK_OBJECT(var_output);
        tmp_str_arg_value_2 = var_output;
        tmp_right_value_1 = UNICODE_UPPER(tmp_str_arg_value_2);
        assert(!(tmp_right_value_1 == NULL));
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        assert(!(tmp_return_value == NULL));
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    par_A = NULL;
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    par_B = NULL;
    CHECK_OBJECT(var_ln);
    Py_DECREF(var_ln);
    var_ln = NULL;
    CHECK_OBJECT(var_output);
    Py_DECREF(var_output);
    var_output = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_B);
    par_B = NULL;
    Py_XDECREF(var_ln);
    var_ln = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fnx$logic$$$function__5_xtonib(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_a5dd39b87b9e50213b569daa6e98615f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a5dd39b87b9e50213b569daa6e98615f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a5dd39b87b9e50213b569daa6e98615f)) {
        Py_XDECREF(cache_frame_a5dd39b87b9e50213b569daa6e98615f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a5dd39b87b9e50213b569daa6e98615f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a5dd39b87b9e50213b569daa6e98615f = MAKE_FUNCTION_FRAME(codeobj_a5dd39b87b9e50213b569daa6e98615f, module_fnx$logic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a5dd39b87b9e50213b569daa6e98615f->m_type_description == NULL);
    frame_a5dd39b87b9e50213b569daa6e98615f = cache_frame_a5dd39b87b9e50213b569daa6e98615f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a5dd39b87b9e50213b569daa6e98615f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a5dd39b87b9e50213b569daa6e98615f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_hex_arg_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_x);
        tmp_hex_arg_1 = par_x;
        tmp_capi_result_1 = BUILTIN_HEX(tmp_hex_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_capi_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a5dd39b87b9e50213b569daa6e98615f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a5dd39b87b9e50213b569daa6e98615f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a5dd39b87b9e50213b569daa6e98615f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5dd39b87b9e50213b569daa6e98615f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5dd39b87b9e50213b569daa6e98615f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a5dd39b87b9e50213b569daa6e98615f,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_a5dd39b87b9e50213b569daa6e98615f == cache_frame_a5dd39b87b9e50213b569daa6e98615f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a5dd39b87b9e50213b569daa6e98615f);
        cache_frame_a5dd39b87b9e50213b569daa6e98615f = NULL;
    }

    assertFrameObject(frame_a5dd39b87b9e50213b569daa6e98615f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fnx$logic$$$function__6_rebase2ctx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[0];
    PyObject *par_term = python_pars[1];
    PyObject *var_root = NULL;
    PyObject *var_lfill = NULL;
    struct Nuitka_FrameObject *frame_f401008fd5d0f0847d6696a435d69e0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f401008fd5d0f0847d6696a435d69e0b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f401008fd5d0f0847d6696a435d69e0b)) {
        Py_XDECREF(cache_frame_f401008fd5d0f0847d6696a435d69e0b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f401008fd5d0f0847d6696a435d69e0b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f401008fd5d0f0847d6696a435d69e0b = MAKE_FUNCTION_FRAME(codeobj_f401008fd5d0f0847d6696a435d69e0b, module_fnx$logic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f401008fd5d0f0847d6696a435d69e0b->m_type_description == NULL);
    frame_f401008fd5d0f0847d6696a435d69e0b = cache_frame_f401008fd5d0f0847d6696a435d69e0b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f401008fd5d0f0847d6696a435d69e0b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f401008fd5d0f0847d6696a435d69e0b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_3 = par_ctx;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[11];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_term);
        tmp_args_element_value_1 = par_term;
        frame_f401008fd5d0f0847d6696a435d69e0b->m_frame.f_lineno = 37;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_6 = par_ctx;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[13];
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[12]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_term);
        tmp_args_element_value_2 = par_term;
        frame_f401008fd5d0f0847d6696a435d69e0b->m_frame.f_lineno = 37;
        tmp_or_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_root == NULL);
        var_root = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_9 = par_ctx;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[14];
        tmp_expression_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[12]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_term);
        tmp_args_element_value_3 = par_term;
        frame_f401008fd5d0f0847d6696a435d69e0b->m_frame.f_lineno = 38;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_lfill == NULL);
        var_lfill = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_root);
        tmp_expression_value_10 = var_root;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[1]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[15];
        CHECK_OBJECT(var_lfill);
        tmp_expression_value_11 = var_lfill;
        tmp_subscript_value_4 = mod_consts[16];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_4, 0);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f401008fd5d0f0847d6696a435d69e0b->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_format_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[3];
        tmp_ass_subvalue_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_14 = par_ctx;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[10]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[17];
        tmp_expression_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_term);
        tmp_subscript_value_6 = par_term;
        tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[18];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_format_value_2;
        PyObject *tmp_value_value_1;
        PyObject *tmp_base_value_1;
        PyObject *tmp_format_spec_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_root);
        tmp_value_value_1 = var_root;
        tmp_base_value_1 = mod_consts[6];
        tmp_format_value_2 = BUILTIN_INT2(tmp_value_value_1, tmp_base_value_1);
        if (tmp_format_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_2 = mod_consts[3];
        tmp_ass_subvalue_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
        Py_DECREF(tmp_format_value_2);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_17 = par_ctx;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[10]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = mod_consts[17];
        tmp_expression_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_term);
        tmp_subscript_value_8 = par_term;
        tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[19];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_format_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_bin_arg_1;
        PyObject *tmp_value_value_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_base_value_2;
        PyObject *tmp_chars_value_1;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_format_spec_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_root);
        tmp_expression_value_19 = var_root;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[1]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[15];
        CHECK_OBJECT(var_lfill);
        tmp_expression_value_20 = var_lfill;
        tmp_subscript_value_9 = mod_consts[16];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_20, tmp_subscript_value_9, 0);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f401008fd5d0f0847d6696a435d69e0b->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_value_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_value_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_base_value_2 = mod_consts[6];
        tmp_bin_arg_1 = BUILTIN_INT2(tmp_value_value_2, tmp_base_value_2);
        Py_DECREF(tmp_value_value_2);
        if (tmp_bin_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_str_arg_value_1 = BUILTIN_BIN(tmp_bin_arg_1);
        Py_DECREF(tmp_bin_arg_1);
        if (tmp_str_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_chars_value_1 = mod_consts[20];
        tmp_expression_value_18 = UNICODE_LSTRIP2(tmp_str_arg_value_1, tmp_chars_value_1);
        Py_DECREF(tmp_str_arg_value_1);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[1]);
        Py_DECREF(tmp_expression_value_18);
        assert(!(tmp_called_value_5 == NULL));
        tmp_args_element_value_8 = mod_consts[21];
        CHECK_OBJECT(var_lfill);
        tmp_expression_value_21 = var_lfill;
        tmp_subscript_value_10 = mod_consts[22];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_10, 1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f401008fd5d0f0847d6696a435d69e0b->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_format_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_format_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_3 = mod_consts[3];
        tmp_ass_subvalue_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
        Py_DECREF(tmp_format_value_3);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_24 = par_ctx;
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[10]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[17];
        tmp_expression_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_term);
        tmp_subscript_value_12 = par_term;
        tmp_ass_subscribed_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_12);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[23];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_ass_subscript_4;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[25]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_29 = par_ctx;
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[10]);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = mod_consts[17];
        tmp_expression_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_13);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_term);
        tmp_subscript_value_14 = par_term;
        tmp_expression_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_14);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = mod_consts[23];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_15);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[26];
        frame_f401008fd5d0f0847d6696a435d69e0b->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_ass_subvalue_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_32 = par_ctx;
        tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[10]);
        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = mod_consts[17];
        tmp_expression_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_16);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_term);
        tmp_subscript_value_17 = par_term;
        tmp_ass_subscribed_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_17);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[27];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f401008fd5d0f0847d6696a435d69e0b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f401008fd5d0f0847d6696a435d69e0b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f401008fd5d0f0847d6696a435d69e0b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f401008fd5d0f0847d6696a435d69e0b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f401008fd5d0f0847d6696a435d69e0b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f401008fd5d0f0847d6696a435d69e0b,
        type_description_1,
        par_ctx,
        par_term,
        var_root,
        var_lfill
    );


    // Release cached frame if used for exception.
    if (frame_f401008fd5d0f0847d6696a435d69e0b == cache_frame_f401008fd5d0f0847d6696a435d69e0b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f401008fd5d0f0847d6696a435d69e0b);
        cache_frame_f401008fd5d0f0847d6696a435d69e0b = NULL;
    }

    assertFrameObject(frame_f401008fd5d0f0847d6696a435d69e0b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_root);
    Py_DECREF(var_root);
    var_root = NULL;
    CHECK_OBJECT(var_lfill);
    Py_DECREF(var_lfill);
    var_lfill = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_root);
    var_root = NULL;
    Py_XDECREF(var_lfill);
    var_lfill = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_term);
    Py_DECREF(par_term);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_term);
    Py_DECREF(par_term);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fnx$logic$$$function__7_rowboat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[0];
    PyObject *par_k = python_pars[1];
    PyObject *var_SPL = NULL;
    PyObject *var_A1 = NULL;
    PyObject *var_A2 = NULL;
    PyObject *var_HEX = NULL;
    PyObject *var_NIB = NULL;
    PyObject *var_HEAD = NULL;
    PyObject *var_ACTIVE = NULL;
    PyObject *var_COL1 = NULL;
    PyObject *var_COL2 = NULL;
    PyObject *var_CSD = NULL;
    PyObject *var_CSE = NULL;
    PyObject *var_CSI = NULL;
    PyObject *var_CSS = NULL;
    PyObject *var_G = NULL;
    PyObject *var_Y = NULL;
    PyObject *var_R = NULL;
    PyObject *var_S = NULL;
    PyObject *var_css = NULL;
    PyObject *var_head = NULL;
    PyObject *var_csi = NULL;
    PyObject *var_a1 = NULL;
    PyObject *var_hexx = NULL;
    PyObject *var_csd = NULL;
    PyObject *var_a2 = NULL;
    PyObject *var_nib = NULL;
    PyObject *var_cse = NULL;
    PyObject *var_row = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_1_var_NIBLE = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_759cd855dada2f9f1c49dc5ca5648ea5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_c5459eb6bc12eca2b88e8b55a89a3986_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c5459eb6bc12eca2b88e8b55a89a3986_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_324ed1f72eb3ae3ec09df0ae9f76a007_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_324ed1f72eb3ae3ec09df0ae9f76a007_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_759cd855dada2f9f1c49dc5ca5648ea5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_759cd855dada2f9f1c49dc5ca5648ea5)) {
        Py_XDECREF(cache_frame_759cd855dada2f9f1c49dc5ca5648ea5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_759cd855dada2f9f1c49dc5ca5648ea5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_759cd855dada2f9f1c49dc5ca5648ea5 = MAKE_FUNCTION_FRAME(codeobj_759cd855dada2f9f1c49dc5ca5648ea5, module_fnx$logic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_759cd855dada2f9f1c49dc5ca5648ea5->m_type_description == NULL);
    frame_759cd855dada2f9f1c49dc5ca5648ea5 = cache_frame_759cd855dada2f9f1c49dc5ca5648ea5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_759cd855dada2f9f1c49dc5ca5648ea5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_759cd855dada2f9f1c49dc5ca5648ea5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_1 = par_k;
        tmp_key_value_1 = mod_consts[28];
        tmp_or_left_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_or_left_value_1 == NULL) {
            tmp_or_left_value_1 = Py_None;
        }
        assert(!(tmp_or_left_value_1 == NULL));
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = mod_consts[29];
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_SPL == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_SPL = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_2 = par_k;
        tmp_key_value_2 = mod_consts[30];
        tmp_or_left_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_or_left_value_2 == NULL) {
            tmp_or_left_value_2 = Py_None;
        }
        assert(!(tmp_or_left_value_2 == NULL));
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = mod_consts[31];
        tmp_assign_source_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_2 = tmp_or_left_value_2;
        or_end_2:;
        assert(var_A1 == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_A1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_key_value_3;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_3 = par_k;
        tmp_key_value_3 = mod_consts[32];
        tmp_or_left_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_3, tmp_key_value_3);
        if (tmp_or_left_value_3 == NULL) {
            tmp_or_left_value_3 = Py_None;
        }
        assert(!(tmp_or_left_value_3 == NULL));
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = mod_consts[33];
        tmp_assign_source_3 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_assign_source_3 = tmp_or_left_value_3;
        or_end_3:;
        assert(var_A2 == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_A2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        int tmp_or_left_truth_4;
        PyObject *tmp_or_left_value_4;
        PyObject *tmp_or_right_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_key_value_4;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_4 = par_k;
        tmp_key_value_4 = mod_consts[34];
        tmp_or_left_value_4 = DICT_GET_ITEM0(tmp_dict_arg_value_4, tmp_key_value_4);
        if (tmp_or_left_value_4 == NULL) {
            tmp_or_left_value_4 = Py_None;
        }
        assert(!(tmp_or_left_value_4 == NULL));
        tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        tmp_or_right_value_4 = mod_consts[2];
        tmp_assign_source_4 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_assign_source_4 = tmp_or_left_value_4;
        or_end_4:;
        assert(var_HEX == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_HEX = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        int tmp_or_left_truth_5;
        PyObject *tmp_or_left_value_5;
        PyObject *tmp_or_right_value_5;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_5 = par_k;
        tmp_key_value_5 = mod_consts[35];
        tmp_or_left_value_5 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_or_left_value_5 == NULL) {
            tmp_or_left_value_5 = Py_None;
        }
        assert(!(tmp_or_left_value_5 == NULL));
        tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
        if (tmp_or_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        tmp_or_right_value_5 = mod_consts[3];
        tmp_assign_source_5 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_assign_source_5 = tmp_or_left_value_5;
        or_end_5:;
        assert(var_NIB == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_NIB = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        int tmp_or_left_truth_6;
        PyObject *tmp_or_left_value_6;
        PyObject *tmp_or_right_value_6;
        PyObject *tmp_dict_arg_value_6;
        PyObject *tmp_key_value_6;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_6 = par_k;
        tmp_key_value_6 = mod_consts[36];
        tmp_or_left_value_6 = DICT_GET_ITEM0(tmp_dict_arg_value_6, tmp_key_value_6);
        if (tmp_or_left_value_6 == NULL) {
            tmp_or_left_value_6 = Py_None;
        }
        assert(!(tmp_or_left_value_6 == NULL));
        tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
        if (tmp_or_left_truth_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_6 == 1) {
            goto or_left_6;
        } else {
            goto or_right_6;
        }
        or_right_6:;
        tmp_or_right_value_6 = mod_consts[3];
        tmp_assign_source_6 = tmp_or_right_value_6;
        goto or_end_6;
        or_left_6:;
        tmp_assign_source_6 = tmp_or_left_value_6;
        or_end_6:;
        assert(var_HEAD == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_HEAD = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        int tmp_or_left_truth_7;
        PyObject *tmp_or_left_value_7;
        PyObject *tmp_or_right_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_key_value_7;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_7 = par_k;
        tmp_key_value_7 = mod_consts[37];
        tmp_or_left_value_7 = DICT_GET_ITEM0(tmp_dict_arg_value_7, tmp_key_value_7);
        if (tmp_or_left_value_7 == NULL) {
            tmp_or_left_value_7 = Py_None;
        }
        assert(!(tmp_or_left_value_7 == NULL));
        tmp_or_left_truth_7 = CHECK_IF_TRUE(tmp_or_left_value_7);
        if (tmp_or_left_truth_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_7 == 1) {
            goto or_left_7;
        } else {
            goto or_right_7;
        }
        or_right_7:;
        tmp_or_right_value_7 = mod_consts[3];
        tmp_assign_source_7 = tmp_or_right_value_7;
        goto or_end_7;
        or_left_7:;
        tmp_assign_source_7 = tmp_or_left_value_7;
        or_end_7:;
        assert(var_ACTIVE == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_ACTIVE = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        int tmp_or_left_truth_8;
        PyObject *tmp_or_left_value_8;
        PyObject *tmp_or_right_value_8;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_8 = par_k;
        tmp_key_value_8 = mod_consts[38];
        tmp_or_left_value_8 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_or_left_value_8 == NULL) {
            tmp_or_left_value_8 = Py_None;
        }
        assert(!(tmp_or_left_value_8 == NULL));
        tmp_or_left_truth_8 = CHECK_IF_TRUE(tmp_or_left_value_8);
        if (tmp_or_left_truth_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_8 == 1) {
            goto or_left_8;
        } else {
            goto or_right_8;
        }
        or_right_8:;
        tmp_or_right_value_8 = mod_consts[3];
        tmp_assign_source_8 = tmp_or_right_value_8;
        goto or_end_8;
        or_left_8:;
        tmp_assign_source_8 = tmp_or_left_value_8;
        or_end_8:;
        assert(var_COL1 == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_COL1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        int tmp_or_left_truth_9;
        PyObject *tmp_or_left_value_9;
        PyObject *tmp_or_right_value_9;
        PyObject *tmp_dict_arg_value_9;
        PyObject *tmp_key_value_9;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_9 = par_k;
        tmp_key_value_9 = mod_consts[39];
        tmp_or_left_value_9 = DICT_GET_ITEM0(tmp_dict_arg_value_9, tmp_key_value_9);
        if (tmp_or_left_value_9 == NULL) {
            tmp_or_left_value_9 = Py_None;
        }
        assert(!(tmp_or_left_value_9 == NULL));
        tmp_or_left_truth_9 = CHECK_IF_TRUE(tmp_or_left_value_9);
        if (tmp_or_left_truth_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_9 == 1) {
            goto or_left_9;
        } else {
            goto or_right_9;
        }
        or_right_9:;
        tmp_or_right_value_9 = mod_consts[3];
        tmp_assign_source_9 = tmp_or_right_value_9;
        goto or_end_9;
        or_left_9:;
        tmp_assign_source_9 = tmp_or_left_value_9;
        or_end_9:;
        assert(var_COL2 == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_COL2 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        int tmp_or_left_truth_10;
        PyObject *tmp_or_left_value_10;
        PyObject *tmp_or_right_value_10;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_key_value_10;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_10 = par_k;
        tmp_key_value_10 = mod_consts[40];
        tmp_or_left_value_10 = DICT_GET_ITEM0(tmp_dict_arg_value_10, tmp_key_value_10);
        if (tmp_or_left_value_10 == NULL) {
            tmp_or_left_value_10 = Py_None;
        }
        assert(!(tmp_or_left_value_10 == NULL));
        tmp_or_left_truth_10 = CHECK_IF_TRUE(tmp_or_left_value_10);
        if (tmp_or_left_truth_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_10 == 1) {
            goto or_left_10;
        } else {
            goto or_right_10;
        }
        or_right_10:;
        tmp_or_right_value_10 = mod_consts[41];
        tmp_assign_source_10 = tmp_or_right_value_10;
        goto or_end_10;
        or_left_10:;
        tmp_assign_source_10 = tmp_or_left_value_10;
        or_end_10:;
        assert(var_CSD == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_CSD = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        int tmp_or_left_truth_11;
        PyObject *tmp_or_left_value_11;
        PyObject *tmp_or_right_value_11;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_key_value_11;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_11 = par_k;
        tmp_key_value_11 = mod_consts[42];
        tmp_or_left_value_11 = DICT_GET_ITEM0(tmp_dict_arg_value_11, tmp_key_value_11);
        if (tmp_or_left_value_11 == NULL) {
            tmp_or_left_value_11 = Py_None;
        }
        assert(!(tmp_or_left_value_11 == NULL));
        tmp_or_left_truth_11 = CHECK_IF_TRUE(tmp_or_left_value_11);
        if (tmp_or_left_truth_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_11 == 1) {
            goto or_left_11;
        } else {
            goto or_right_11;
        }
        or_right_11:;
        tmp_or_right_value_11 = mod_consts[41];
        tmp_assign_source_11 = tmp_or_right_value_11;
        goto or_end_11;
        or_left_11:;
        tmp_assign_source_11 = tmp_or_left_value_11;
        or_end_11:;
        assert(var_CSE == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_CSE = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        int tmp_or_left_truth_12;
        PyObject *tmp_or_left_value_12;
        PyObject *tmp_or_right_value_12;
        PyObject *tmp_dict_arg_value_12;
        PyObject *tmp_key_value_12;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_12 = par_k;
        tmp_key_value_12 = mod_consts[43];
        tmp_or_left_value_12 = DICT_GET_ITEM0(tmp_dict_arg_value_12, tmp_key_value_12);
        if (tmp_or_left_value_12 == NULL) {
            tmp_or_left_value_12 = Py_None;
        }
        assert(!(tmp_or_left_value_12 == NULL));
        tmp_or_left_truth_12 = CHECK_IF_TRUE(tmp_or_left_value_12);
        if (tmp_or_left_truth_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_12 == 1) {
            goto or_left_12;
        } else {
            goto or_right_12;
        }
        or_right_12:;
        tmp_or_right_value_12 = mod_consts[41];
        tmp_assign_source_12 = tmp_or_right_value_12;
        goto or_end_12;
        or_left_12:;
        tmp_assign_source_12 = tmp_or_left_value_12;
        or_end_12:;
        assert(var_CSI == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_CSI = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        int tmp_or_left_truth_13;
        PyObject *tmp_or_left_value_13;
        PyObject *tmp_or_right_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_key_value_13;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_13 = par_k;
        tmp_key_value_13 = mod_consts[44];
        tmp_or_left_value_13 = DICT_GET_ITEM0(tmp_dict_arg_value_13, tmp_key_value_13);
        if (tmp_or_left_value_13 == NULL) {
            tmp_or_left_value_13 = Py_None;
        }
        assert(!(tmp_or_left_value_13 == NULL));
        tmp_or_left_truth_13 = CHECK_IF_TRUE(tmp_or_left_value_13);
        if (tmp_or_left_truth_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_13 == 1) {
            goto or_left_13;
        } else {
            goto or_right_13;
        }
        or_right_13:;
        tmp_or_right_value_13 = mod_consts[41];
        tmp_assign_source_13 = tmp_or_right_value_13;
        goto or_end_13;
        or_left_13:;
        tmp_assign_source_13 = tmp_or_left_value_13;
        or_end_13:;
        assert(var_CSS == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_CSS = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        int tmp_or_left_truth_14;
        PyObject *tmp_or_left_value_14;
        PyObject *tmp_or_right_value_14;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_14 = par_k;
        tmp_key_value_14 = mod_consts[45];
        tmp_or_left_value_14 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_or_left_value_14 == NULL) {
            tmp_or_left_value_14 = Py_None;
        }
        assert(!(tmp_or_left_value_14 == NULL));
        tmp_or_left_truth_14 = CHECK_IF_TRUE(tmp_or_left_value_14);
        if (tmp_or_left_truth_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_14 == 1) {
            goto or_left_14;
        } else {
            goto or_right_14;
        }
        or_right_14:;
        tmp_or_right_value_14 = mod_consts[46];
        tmp_assign_source_14 = tmp_or_right_value_14;
        goto or_end_14;
        or_left_14:;
        tmp_assign_source_14 = tmp_or_left_value_14;
        or_end_14:;
        assert(var_G == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_G = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        int tmp_or_left_truth_15;
        PyObject *tmp_or_left_value_15;
        PyObject *tmp_or_right_value_15;
        PyObject *tmp_dict_arg_value_15;
        PyObject *tmp_key_value_15;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_15 = par_k;
        tmp_key_value_15 = mod_consts[47];
        tmp_or_left_value_15 = DICT_GET_ITEM0(tmp_dict_arg_value_15, tmp_key_value_15);
        if (tmp_or_left_value_15 == NULL) {
            tmp_or_left_value_15 = Py_None;
        }
        assert(!(tmp_or_left_value_15 == NULL));
        tmp_or_left_truth_15 = CHECK_IF_TRUE(tmp_or_left_value_15);
        if (tmp_or_left_truth_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_15 == 1) {
            goto or_left_15;
        } else {
            goto or_right_15;
        }
        or_right_15:;
        tmp_or_right_value_15 = mod_consts[48];
        tmp_assign_source_15 = tmp_or_right_value_15;
        goto or_end_15;
        or_left_15:;
        tmp_assign_source_15 = tmp_or_left_value_15;
        or_end_15:;
        assert(var_Y == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_Y = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        int tmp_or_left_truth_16;
        PyObject *tmp_or_left_value_16;
        PyObject *tmp_or_right_value_16;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_key_value_16;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_16 = par_k;
        tmp_key_value_16 = mod_consts[49];
        tmp_or_left_value_16 = DICT_GET_ITEM0(tmp_dict_arg_value_16, tmp_key_value_16);
        if (tmp_or_left_value_16 == NULL) {
            tmp_or_left_value_16 = Py_None;
        }
        assert(!(tmp_or_left_value_16 == NULL));
        tmp_or_left_truth_16 = CHECK_IF_TRUE(tmp_or_left_value_16);
        if (tmp_or_left_truth_16 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_16 == 1) {
            goto or_left_16;
        } else {
            goto or_right_16;
        }
        or_right_16:;
        tmp_or_right_value_16 = mod_consts[50];
        tmp_assign_source_16 = tmp_or_right_value_16;
        goto or_end_16;
        or_left_16:;
        tmp_assign_source_16 = tmp_or_left_value_16;
        or_end_16:;
        assert(var_R == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_R = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        int tmp_or_left_truth_17;
        PyObject *tmp_or_left_value_17;
        PyObject *tmp_or_right_value_17;
        PyObject *tmp_dict_arg_value_17;
        PyObject *tmp_key_value_17;
        CHECK_OBJECT(par_k);
        tmp_dict_arg_value_17 = par_k;
        tmp_key_value_17 = mod_consts[51];
        tmp_or_left_value_17 = DICT_GET_ITEM0(tmp_dict_arg_value_17, tmp_key_value_17);
        if (tmp_or_left_value_17 == NULL) {
            tmp_or_left_value_17 = Py_None;
        }
        assert(!(tmp_or_left_value_17 == NULL));
        tmp_or_left_truth_17 = CHECK_IF_TRUE(tmp_or_left_value_17);
        if (tmp_or_left_truth_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_17 == 1) {
            goto or_left_17;
        } else {
            goto or_right_17;
        }
        or_right_17:;
        tmp_or_right_value_17 = mod_consts[52];
        tmp_assign_source_17 = tmp_or_right_value_17;
        goto or_end_17;
        or_left_17:;
        tmp_assign_source_17 = tmp_or_left_value_17;
        or_end_17:;
        assert(var_S == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_S = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[53];
        tmp_string_concat_values_1 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_CSS);
            tmp_format_value_1 = var_CSS;
            tmp_format_spec_1 = mod_consts[3];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_18 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_css == NULL);
        var_css = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[53];
        tmp_string_concat_values_2 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_HEAD);
            tmp_format_value_2 = var_HEAD;
            tmp_format_spec_2 = mod_consts[3];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_19 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_head == NULL);
        var_head = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[54];
        tmp_string_concat_values_3 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_CSI);
            tmp_format_value_3 = var_CSI;
            tmp_format_spec_3 = mod_consts[3];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[53];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_20 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_csi == NULL);
        var_csi = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = mod_consts[55];
        tmp_string_concat_values_4 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_A1);
            tmp_format_value_4 = var_A1;
            tmp_format_spec_4 = mod_consts[3];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[53];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_21 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_a1 == NULL);
        var_a1 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[3];
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_HEX);
            tmp_iter_arg_1 = var_HEX;
            tmp_assign_source_23 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_24;
        }
        if (isFrameUnusable(cache_frame_c5459eb6bc12eca2b88e8b55a89a3986_2)) {
            Py_XDECREF(cache_frame_c5459eb6bc12eca2b88e8b55a89a3986_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c5459eb6bc12eca2b88e8b55a89a3986_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c5459eb6bc12eca2b88e8b55a89a3986_2 = MAKE_FUNCTION_FRAME(codeobj_c5459eb6bc12eca2b88e8b55a89a3986, module_fnx$logic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c5459eb6bc12eca2b88e8b55a89a3986_2->m_type_description == NULL);
        frame_c5459eb6bc12eca2b88e8b55a89a3986_2 = cache_frame_c5459eb6bc12eca2b88e8b55a89a3986_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c5459eb6bc12eca2b88e8b55a89a3986_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c5459eb6bc12eca2b88e8b55a89a3986_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_25 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 68;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_26 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_26;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_string_concat_values_5;
            PyObject *tmp_tuple_element_5;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_tuple_element_5 = mod_consts[56];
            tmp_string_concat_values_5 = PyTuple_New(4);
            {
                PyObject *tmp_format_value_5;
                PyObject *tmp_format_spec_5;
                PyObject *tmp_format_value_6;
                PyObject *tmp_format_spec_6;
                PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
                CHECK_OBJECT(var_Y);
                tmp_format_value_5 = var_Y;
                tmp_format_spec_5 = mod_consts[3];
                tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_2 = "oo";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
                tmp_tuple_element_5 = mod_consts[57];
                PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
                CHECK_OBJECT(outline_0_var_i);
                tmp_format_value_6 = outline_0_var_i;
                tmp_format_spec_6 = mod_consts[3];
                tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_2 = "oo";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_5, 3, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_string_concat_values_5);
            goto try_except_handler_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_append_value_1 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_5);
            Py_DECREF(tmp_string_concat_values_5);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c5459eb6bc12eca2b88e8b55a89a3986_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_c5459eb6bc12eca2b88e8b55a89a3986_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c5459eb6bc12eca2b88e8b55a89a3986_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c5459eb6bc12eca2b88e8b55a89a3986_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c5459eb6bc12eca2b88e8b55a89a3986_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c5459eb6bc12eca2b88e8b55a89a3986_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c5459eb6bc12eca2b88e8b55a89a3986_2,
            type_description_2,
            outline_0_var_i,
            var_Y
        );


        // Release cached frame if used for exception.
        if (frame_c5459eb6bc12eca2b88e8b55a89a3986_2 == cache_frame_c5459eb6bc12eca2b88e8b55a89a3986_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c5459eb6bc12eca2b88e8b55a89a3986_2);
            cache_frame_c5459eb6bc12eca2b88e8b55a89a3986_2 = NULL;
        }

        assertFrameObject(frame_c5459eb6bc12eca2b88e8b55a89a3986_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 68;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_assign_source_22 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hexx == NULL);
        var_hexx = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_string_concat_values_6;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = mod_consts[53];
        tmp_string_concat_values_6 = PyTuple_New(5);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_format_spec_8;
            PyObject *tmp_format_value_9;
            PyObject *tmp_format_spec_9;
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_S);
            tmp_format_value_7 = var_S;
            tmp_format_spec_7 = mod_consts[3];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_7, tmp_format_spec_7);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
            CHECK_OBJECT(var_CSD);
            tmp_format_value_8 = var_CSD;
            tmp_format_spec_8 = mod_consts[3];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_8, tmp_format_spec_8);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
            CHECK_OBJECT(var_S);
            tmp_format_value_9 = var_S;
            tmp_format_spec_9 = mod_consts[3];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_9, tmp_format_spec_9);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 3, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[53];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 4, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_string_concat_values_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_assign_source_27 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_6);
        Py_DECREF(tmp_string_concat_values_6);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_csd == NULL);
        var_csd = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_string_concat_values_7;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = mod_consts[58];
        tmp_string_concat_values_7 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_10;
            PyObject *tmp_format_spec_10;
            PyObject *tmp_format_value_11;
            PyObject *tmp_format_spec_11;
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_7);
            CHECK_OBJECT(var_R);
            tmp_format_value_10 = var_R;
            tmp_format_spec_10 = mod_consts[3];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_10, tmp_format_spec_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_7);
            CHECK_OBJECT(var_A2);
            tmp_format_value_11 = var_A2;
            tmp_format_spec_11 = mod_consts[3];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_11, tmp_format_spec_11);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 3, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_string_concat_values_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_assign_source_28 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_7);
        Py_DECREF(tmp_string_concat_values_7);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_a2 == NULL);
        var_a2 = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_iterable_value_2;
        tmp_str_arg_value_2 = mod_consts[3];
        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_NIB);
            tmp_iter_arg_2 = var_NIB;
            tmp_assign_source_30 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = PyList_New(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_31;
        }
        if (isFrameUnusable(cache_frame_324ed1f72eb3ae3ec09df0ae9f76a007_3)) {
            Py_XDECREF(cache_frame_324ed1f72eb3ae3ec09df0ae9f76a007_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_324ed1f72eb3ae3ec09df0ae9f76a007_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_324ed1f72eb3ae3ec09df0ae9f76a007_3 = MAKE_FUNCTION_FRAME(codeobj_324ed1f72eb3ae3ec09df0ae9f76a007, module_fnx$logic, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_324ed1f72eb3ae3ec09df0ae9f76a007_3->m_type_description == NULL);
        frame_324ed1f72eb3ae3ec09df0ae9f76a007_3 = cache_frame_324ed1f72eb3ae3ec09df0ae9f76a007_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_324ed1f72eb3ae3ec09df0ae9f76a007_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_324ed1f72eb3ae3ec09df0ae9f76a007_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_32 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 71;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_32;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_33 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_NIBLE;
                outline_1_var_NIBLE = tmp_assign_source_33;
                Py_INCREF(outline_1_var_NIBLE);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_string_concat_values_8;
            PyObject *tmp_tuple_element_8;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_tuple_element_8 = mod_consts[59];
            tmp_string_concat_values_8 = PyTuple_New(6);
            {
                PyObject *tmp_format_value_12;
                PyObject *tmp_format_spec_12;
                PyObject *tmp_format_value_13;
                PyObject *tmp_format_spec_13;
                PyObject *tmp_format_value_14;
                PyObject *tmp_format_spec_14;
                PyTuple_SET_ITEM0(tmp_string_concat_values_8, 0, tmp_tuple_element_8);
                CHECK_OBJECT(var_SPL);
                tmp_format_value_12 = var_SPL;
                tmp_format_spec_12 = mod_consts[3];
                tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_12, tmp_format_spec_12);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "ooo";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_8, 1, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[58];
                PyTuple_SET_ITEM0(tmp_string_concat_values_8, 2, tmp_tuple_element_8);
                CHECK_OBJECT(var_G);
                tmp_format_value_13 = var_G;
                tmp_format_spec_13 = mod_consts[3];
                tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_13, tmp_format_spec_13);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "ooo";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_8, 3, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[57];
                PyTuple_SET_ITEM0(tmp_string_concat_values_8, 4, tmp_tuple_element_8);
                CHECK_OBJECT(outline_1_var_NIBLE);
                tmp_format_value_14 = outline_1_var_NIBLE;
                tmp_format_spec_14 = mod_consts[3];
                tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_14, tmp_format_spec_14);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "ooo";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_8, 5, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_string_concat_values_8);
            goto try_except_handler_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_append_value_2 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_8);
            Py_DECREF(tmp_string_concat_values_8);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            assert(PyList_Check(tmp_append_list_2));
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_2 = "ooo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_iterable_value_2 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_iterable_value_2);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_324ed1f72eb3ae3ec09df0ae9f76a007_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_324ed1f72eb3ae3ec09df0ae9f76a007_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_324ed1f72eb3ae3ec09df0ae9f76a007_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_324ed1f72eb3ae3ec09df0ae9f76a007_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_324ed1f72eb3ae3ec09df0ae9f76a007_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_324ed1f72eb3ae3ec09df0ae9f76a007_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_324ed1f72eb3ae3ec09df0ae9f76a007_3,
            type_description_2,
            outline_1_var_NIBLE,
            var_SPL,
            var_G
        );


        // Release cached frame if used for exception.
        if (frame_324ed1f72eb3ae3ec09df0ae9f76a007_3 == cache_frame_324ed1f72eb3ae3ec09df0ae9f76a007_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_324ed1f72eb3ae3ec09df0ae9f76a007_3);
            cache_frame_324ed1f72eb3ae3ec09df0ae9f76a007_3 = NULL;
        }

        assertFrameObject(frame_324ed1f72eb3ae3ec09df0ae9f76a007_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_NIBLE);
        outline_1_var_NIBLE = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_NIBLE);
        outline_1_var_NIBLE = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 71;
        goto frame_exception_exit_1;
        outline_result_2:;
        tmp_assign_source_29 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
        Py_DECREF(tmp_iterable_value_2);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nib == NULL);
        var_nib = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_string_concat_values_9;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = mod_consts[60];
        tmp_string_concat_values_9 = PyTuple_New(5);
        {
            PyObject *tmp_format_value_15;
            PyObject *tmp_format_spec_15;
            PyObject *tmp_format_value_16;
            PyObject *tmp_format_spec_16;
            PyObject *tmp_format_value_17;
            PyObject *tmp_format_spec_17;
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 0, tmp_tuple_element_9);
            CHECK_OBJECT(var_ACTIVE);
            tmp_format_value_15 = var_ACTIVE;
            tmp_format_spec_15 = mod_consts[3];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_15, tmp_format_spec_15);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[61];
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 2, tmp_tuple_element_9);
            CHECK_OBJECT(var_S);
            tmp_format_value_16 = var_S;
            tmp_format_spec_16 = mod_consts[3];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_16, tmp_format_spec_16);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 3, tmp_tuple_element_9);
            CHECK_OBJECT(var_CSE);
            tmp_format_value_17 = var_CSE;
            tmp_format_spec_17 = mod_consts[3];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_17, tmp_format_spec_17);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 4, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_string_concat_values_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_assign_source_34 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_9);
        Py_DECREF(tmp_string_concat_values_9);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cse == NULL);
        var_cse = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_str_arg_value_3;
        PyObject *tmp_iterable_value_3;
        PyObject *tmp_list_element_1;
        tmp_str_arg_value_3 = mod_consts[3];
        CHECK_OBJECT(var_css);
        tmp_list_element_1 = var_css;
        tmp_iterable_value_3 = PyList_New(9);
        PyList_SET_ITEM0(tmp_iterable_value_3, 0, tmp_list_element_1);
        CHECK_OBJECT(var_head);
        tmp_list_element_1 = var_head;
        PyList_SET_ITEM0(tmp_iterable_value_3, 1, tmp_list_element_1);
        CHECK_OBJECT(var_csi);
        tmp_list_element_1 = var_csi;
        PyList_SET_ITEM0(tmp_iterable_value_3, 2, tmp_list_element_1);
        CHECK_OBJECT(var_a1);
        tmp_list_element_1 = var_a1;
        PyList_SET_ITEM0(tmp_iterable_value_3, 3, tmp_list_element_1);
        CHECK_OBJECT(var_hexx);
        tmp_list_element_1 = var_hexx;
        PyList_SET_ITEM0(tmp_iterable_value_3, 4, tmp_list_element_1);
        CHECK_OBJECT(var_csd);
        tmp_list_element_1 = var_csd;
        PyList_SET_ITEM0(tmp_iterable_value_3, 5, tmp_list_element_1);
        CHECK_OBJECT(var_a2);
        tmp_list_element_1 = var_a2;
        PyList_SET_ITEM0(tmp_iterable_value_3, 6, tmp_list_element_1);
        CHECK_OBJECT(var_nib);
        tmp_list_element_1 = var_nib;
        PyList_SET_ITEM0(tmp_iterable_value_3, 7, tmp_list_element_1);
        CHECK_OBJECT(var_cse);
        tmp_list_element_1 = var_cse;
        PyList_SET_ITEM0(tmp_iterable_value_3, 8, tmp_list_element_1);
        tmp_assign_source_35 = UNICODE_JOIN(tmp_str_arg_value_3, tmp_iterable_value_3);
        Py_DECREF(tmp_iterable_value_3);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_row == NULL);
        var_row = tmp_assign_source_35;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_759cd855dada2f9f1c49dc5ca5648ea5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_759cd855dada2f9f1c49dc5ca5648ea5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_759cd855dada2f9f1c49dc5ca5648ea5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_759cd855dada2f9f1c49dc5ca5648ea5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_759cd855dada2f9f1c49dc5ca5648ea5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_759cd855dada2f9f1c49dc5ca5648ea5,
        type_description_1,
        par_ctx,
        par_k,
        var_SPL,
        var_A1,
        var_A2,
        var_HEX,
        var_NIB,
        var_HEAD,
        var_ACTIVE,
        var_COL1,
        var_COL2,
        var_CSD,
        var_CSE,
        var_CSI,
        var_CSS,
        var_G,
        var_Y,
        var_R,
        var_S,
        var_css,
        var_head,
        var_csi,
        var_a1,
        var_hexx,
        var_csd,
        var_a2,
        var_nib,
        var_cse,
        var_row
    );


    // Release cached frame if used for exception.
    if (frame_759cd855dada2f9f1c49dc5ca5648ea5 == cache_frame_759cd855dada2f9f1c49dc5ca5648ea5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_759cd855dada2f9f1c49dc5ca5648ea5);
        cache_frame_759cd855dada2f9f1c49dc5ca5648ea5 = NULL;
    }

    assertFrameObject(frame_759cd855dada2f9f1c49dc5ca5648ea5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    CHECK_OBJECT(var_row);
    tmp_return_value = var_row;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SPL);
    Py_DECREF(var_SPL);
    var_SPL = NULL;
    CHECK_OBJECT(var_A1);
    Py_DECREF(var_A1);
    var_A1 = NULL;
    CHECK_OBJECT(var_A2);
    Py_DECREF(var_A2);
    var_A2 = NULL;
    CHECK_OBJECT(var_HEX);
    Py_DECREF(var_HEX);
    var_HEX = NULL;
    CHECK_OBJECT(var_NIB);
    Py_DECREF(var_NIB);
    var_NIB = NULL;
    CHECK_OBJECT(var_HEAD);
    Py_DECREF(var_HEAD);
    var_HEAD = NULL;
    CHECK_OBJECT(var_ACTIVE);
    Py_DECREF(var_ACTIVE);
    var_ACTIVE = NULL;
    CHECK_OBJECT(var_COL1);
    Py_DECREF(var_COL1);
    var_COL1 = NULL;
    CHECK_OBJECT(var_COL2);
    Py_DECREF(var_COL2);
    var_COL2 = NULL;
    CHECK_OBJECT(var_CSD);
    Py_DECREF(var_CSD);
    var_CSD = NULL;
    CHECK_OBJECT(var_CSE);
    Py_DECREF(var_CSE);
    var_CSE = NULL;
    CHECK_OBJECT(var_CSI);
    Py_DECREF(var_CSI);
    var_CSI = NULL;
    CHECK_OBJECT(var_CSS);
    Py_DECREF(var_CSS);
    var_CSS = NULL;
    CHECK_OBJECT(var_G);
    Py_DECREF(var_G);
    var_G = NULL;
    CHECK_OBJECT(var_Y);
    Py_DECREF(var_Y);
    var_Y = NULL;
    CHECK_OBJECT(var_R);
    Py_DECREF(var_R);
    var_R = NULL;
    CHECK_OBJECT(var_S);
    Py_DECREF(var_S);
    var_S = NULL;
    CHECK_OBJECT(var_css);
    Py_DECREF(var_css);
    var_css = NULL;
    CHECK_OBJECT(var_head);
    Py_DECREF(var_head);
    var_head = NULL;
    CHECK_OBJECT(var_csi);
    Py_DECREF(var_csi);
    var_csi = NULL;
    CHECK_OBJECT(var_a1);
    Py_DECREF(var_a1);
    var_a1 = NULL;
    CHECK_OBJECT(var_hexx);
    Py_DECREF(var_hexx);
    var_hexx = NULL;
    CHECK_OBJECT(var_csd);
    Py_DECREF(var_csd);
    var_csd = NULL;
    CHECK_OBJECT(var_a2);
    Py_DECREF(var_a2);
    var_a2 = NULL;
    CHECK_OBJECT(var_nib);
    Py_DECREF(var_nib);
    var_nib = NULL;
    CHECK_OBJECT(var_cse);
    Py_DECREF(var_cse);
    var_cse = NULL;
    CHECK_OBJECT(var_row);
    Py_DECREF(var_row);
    var_row = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SPL);
    var_SPL = NULL;
    Py_XDECREF(var_A1);
    var_A1 = NULL;
    Py_XDECREF(var_A2);
    var_A2 = NULL;
    Py_XDECREF(var_HEX);
    var_HEX = NULL;
    Py_XDECREF(var_NIB);
    var_NIB = NULL;
    Py_XDECREF(var_HEAD);
    var_HEAD = NULL;
    Py_XDECREF(var_ACTIVE);
    var_ACTIVE = NULL;
    Py_XDECREF(var_COL1);
    var_COL1 = NULL;
    Py_XDECREF(var_COL2);
    var_COL2 = NULL;
    Py_XDECREF(var_CSD);
    var_CSD = NULL;
    Py_XDECREF(var_CSE);
    var_CSE = NULL;
    Py_XDECREF(var_CSI);
    var_CSI = NULL;
    Py_XDECREF(var_CSS);
    var_CSS = NULL;
    Py_XDECREF(var_G);
    var_G = NULL;
    Py_XDECREF(var_Y);
    var_Y = NULL;
    Py_XDECREF(var_R);
    var_R = NULL;
    Py_XDECREF(var_S);
    var_S = NULL;
    Py_XDECREF(var_css);
    var_css = NULL;
    Py_XDECREF(var_head);
    var_head = NULL;
    Py_XDECREF(var_csi);
    var_csi = NULL;
    Py_XDECREF(var_a1);
    var_a1 = NULL;
    Py_XDECREF(var_hexx);
    var_hexx = NULL;
    Py_XDECREF(var_csd);
    var_csd = NULL;
    Py_XDECREF(var_a2);
    var_a2 = NULL;
    Py_XDECREF(var_nib);
    var_nib = NULL;
    Py_XDECREF(var_cse);
    var_cse = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_k);
    Py_DECREF(par_k);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_k);
    Py_DECREF(par_k);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fnx$logic$$$function__8_table(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[0];
    PyObject *var_R_Ttt = NULL;
    PyObject *var_R_Ths_A = NULL;
    PyObject *var_R_Ths_O = NULL;
    PyObject *var_R_Ttb = NULL;
    struct Nuitka_FrameObject *frame_364804ccab943f372ff0884befe882e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_364804ccab943f372ff0884befe882e9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_Copy(mod_consts[62]);
        assert(var_R_Ttt == NULL);
        var_R_Ttt = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyDict_Copy(mod_consts[63]);
        assert(var_R_Ths_A == NULL);
        var_R_Ths_A = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_Copy(mod_consts[64]);
        assert(var_R_Ths_O == NULL);
        var_R_Ths_O = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_Copy(mod_consts[65]);
        assert(var_R_Ttb == NULL);
        var_R_Ttb = tmp_assign_source_4;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_364804ccab943f372ff0884befe882e9)) {
        Py_XDECREF(cache_frame_364804ccab943f372ff0884befe882e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_364804ccab943f372ff0884befe882e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_364804ccab943f372ff0884befe882e9 = MAKE_FUNCTION_FRAME(codeobj_364804ccab943f372ff0884befe882e9, module_fnx$logic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_364804ccab943f372ff0884befe882e9->m_type_description == NULL);
    frame_364804ccab943f372ff0884befe882e9 = cache_frame_364804ccab943f372ff0884befe882e9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_364804ccab943f372ff0884befe882e9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_364804ccab943f372ff0884befe882e9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscript_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_R_Ttt);
        tmp_dircall_arg2_1 = var_R_Ttt;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_ass_subvalue_1 = impl___main__$$$function__5_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_2 = par_ctx;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 151;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[49];
        tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 151;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[67];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscript_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_R_Ths_A);
        tmp_dircall_arg2_2 = var_R_Ths_A;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_ass_subvalue_2 = impl___main__$$$function__5_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_4 = par_ctx;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 152;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[49];
        tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 152;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[68];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_ass_subscript_3;
        tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_3 == NULL)) {
            tmp_dircall_arg1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dircall_arg1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_R_Ths_O);
        tmp_dircall_arg2_3 = var_R_Ths_O;
        Py_INCREF(tmp_dircall_arg1_3);
        Py_INCREF(tmp_dircall_arg2_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3};
            tmp_ass_subvalue_3 = impl___main__$$$function__5_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_6 = par_ctx;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 153;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[49];
        tmp_ass_subscribed_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 153;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[69];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_dircall_arg1_4;
        PyObject *tmp_dircall_arg2_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_ass_subscript_4;
        tmp_dircall_arg1_4 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_4 == NULL)) {
            tmp_dircall_arg1_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dircall_arg1_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_R_Ttb);
        tmp_dircall_arg2_4 = var_R_Ttb;
        Py_INCREF(tmp_dircall_arg1_4);
        Py_INCREF(tmp_dircall_arg2_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4};
            tmp_ass_subvalue_4 = impl___main__$$$function__5_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_8 = par_ctx;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[10]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 154;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[49];
        tmp_ass_subscribed_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 154;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[70];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oNNNNNNNNNNNNNoooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_364804ccab943f372ff0884befe882e9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_364804ccab943f372ff0884befe882e9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_364804ccab943f372ff0884befe882e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_364804ccab943f372ff0884befe882e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_364804ccab943f372ff0884befe882e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_364804ccab943f372ff0884befe882e9,
        type_description_1,
        par_ctx,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        var_R_Ttt,
        var_R_Ths_A,
        var_R_Ths_O,
        var_R_Ttb
    );


    // Release cached frame if used for exception.
    if (frame_364804ccab943f372ff0884befe882e9 == cache_frame_364804ccab943f372ff0884befe882e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_364804ccab943f372ff0884befe882e9);
        cache_frame_364804ccab943f372ff0884befe882e9 = NULL;
    }

    assertFrameObject(frame_364804ccab943f372ff0884befe882e9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_R_Ttt);
    Py_DECREF(var_R_Ttt);
    var_R_Ttt = NULL;
    CHECK_OBJECT(var_R_Ths_A);
    Py_DECREF(var_R_Ths_A);
    var_R_Ths_A = NULL;
    CHECK_OBJECT(var_R_Ths_O);
    Py_DECREF(var_R_Ths_O);
    var_R_Ths_O = NULL;
    CHECK_OBJECT(var_R_Ttb);
    Py_DECREF(var_R_Ttb);
    var_R_Ttb = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_R_Ttt);
    Py_DECREF(var_R_Ttt);
    var_R_Ttt = NULL;
    CHECK_OBJECT(var_R_Ths_A);
    Py_DECREF(var_R_Ths_A);
    var_R_Ths_A = NULL;
    CHECK_OBJECT(var_R_Ths_O);
    Py_DECREF(var_R_Ths_O);
    var_R_Ths_O = NULL;
    CHECK_OBJECT(var_R_Ttb);
    Py_DECREF(var_R_Ttb);
    var_R_Ttb = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_fnx$logic$$$function__1_xnot_bitwise() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnx$logic$$$function__1_xnot_bitwise,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f25970634c717377efd4114296ee49db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fnx$logic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fnx$logic$$$function__2_xnot() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnx$logic$$$function__2_xnot,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_05a3d434e498c793f8d2e519b6b7c850,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fnx$logic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fnx$logic$$$function__3_xnand() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnx$logic$$$function__3_xnand,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_50f5f6d1b9937608f14f74533cbd8208,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fnx$logic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fnx$logic$$$function__4_xnand_bitwise() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnx$logic$$$function__4_xnand_bitwise,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d27e82be3d96b43a3cc3f7e824765d91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fnx$logic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fnx$logic$$$function__5_xtonib() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnx$logic$$$function__5_xtonib,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a5dd39b87b9e50213b569daa6e98615f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fnx$logic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fnx$logic$$$function__6_rebase2ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnx$logic$$$function__6_rebase2ctx,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f401008fd5d0f0847d6696a435d69e0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fnx$logic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fnx$logic$$$function__7_rowboat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnx$logic$$$function__7_rowboat,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_759cd855dada2f9f1c49dc5ca5648ea5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fnx$logic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fnx$logic$$$function__8_table() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fnx$logic$$$function__8_table,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_364804ccab943f372ff0884befe882e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fnx$logic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_fnx$logic[] = {
    impl_fnx$logic$$$function__1_xnot_bitwise,
    impl_fnx$logic$$$function__2_xnot,
    impl_fnx$logic$$$function__3_xnand,
    impl_fnx$logic$$$function__4_xnand_bitwise,
    impl_fnx$logic$$$function__5_xtonib,
    impl_fnx$logic$$$function__6_rebase2ctx,
    impl_fnx$logic$$$function__7_rowboat,
    impl_fnx$logic$$$function__8_table,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_fnx$logic;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_fnx$logic) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_fnx$logic[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_fnx$logic,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_fnx$logic(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("fnx.logic");

    // Store the module for future use.
    module_fnx$logic = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("fnx.logic: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("fnx.logic: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("fnx.logic: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initfnx$logic\n");

    moduledict_fnx$logic = MODULE_DICT(module_fnx$logic);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_fnx$logic,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_fnx$logic,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[3]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_fnx$logic,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_fnx$logic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_fnx$logic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_fnx$logic);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_fnx$logic, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_fnx$logic, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_fnx$logic, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_fnx$logic);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_fnx$logic, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_7565e33616395cd96966b72e0ebe34b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_7565e33616395cd96966b72e0ebe34b7 = MAKE_MODULE_FRAME(codeobj_7565e33616395cd96966b72e0ebe34b7, module_fnx$logic);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_7565e33616395cd96966b72e0ebe34b7);
    assert(Py_REFCNT(frame_7565e33616395cd96966b72e0ebe34b7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[72];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[75], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[76], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[24];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_fnx$logic;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[16];
        frame_7565e33616395cd96966b72e0ebe34b7->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[78];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_fnx$logic;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[16];
        frame_7565e33616395cd96966b72e0ebe34b7->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_fnx$logic$$$function__1_xnot_bitwise();

        UPDATE_STRING_DICT1(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_fnx$logic$$$function__2_xnot();

        UPDATE_STRING_DICT1(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_fnx$logic$$$function__3_xnand();

        UPDATE_STRING_DICT1(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_fnx$logic$$$function__4_xnand_bitwise();

        UPDATE_STRING_DICT1(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_fnx$logic$$$function__5_xtonib();

        UPDATE_STRING_DICT1(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_called_instance_1 == NULL));


        tmp_args_element_value_1 = MAKE_FUNCTION_fnx$logic$$$function__6_rebase2ctx();

        frame_7565e33616395cd96966b72e0ebe34b7->m_frame.f_lineno = 35;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[83], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_2 = MAKE_FUNCTION_fnx$logic$$$function__7_rowboat();

        frame_7565e33616395cd96966b72e0ebe34b7->m_frame.f_lineno = 44;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[83], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_3 = MAKE_FUNCTION_fnx$logic$$$function__8_table();

        frame_7565e33616395cd96966b72e0ebe34b7->m_frame.f_lineno = 76;
        tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[83], tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fnx$logic, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_13);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7565e33616395cd96966b72e0ebe34b7);
#endif
    popFrameStack();

    assertFrameObject(frame_7565e33616395cd96966b72e0ebe34b7);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7565e33616395cd96966b72e0ebe34b7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7565e33616395cd96966b72e0ebe34b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7565e33616395cd96966b72e0ebe34b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7565e33616395cd96966b72e0ebe34b7, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("fnx.logic", false);

    return module_fnx$logic;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fnx$logic, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("fnx$logic", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
