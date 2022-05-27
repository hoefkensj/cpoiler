/* Generated code for Python module 'click._compat'
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

/* The "module_click$_compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_click$_compat;
PyDictObject *moduledict_click$_compat;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[292];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[292];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("click._compat"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 292; i++) {
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
void checkModuleConstants_click$_compat(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 292; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_85afcf247299ea445e9b4ca4b08c2596;
static PyCodeObject *codeobj_c49d21da5ee845a5dfd9c75846da343a;
static PyCodeObject *codeobj_9ec1f01d6412484c57c4d048ac67c495;
static PyCodeObject *codeobj_0dc7b0a9946ba9a57bfb0264ad2a13a0;
static PyCodeObject *codeobj_47fde25b08e5c0a251bf29d7b9bc8683;
static PyCodeObject *codeobj_c4ca0153088d8ce8aa9215be167acdf5;
static PyCodeObject *codeobj_c78ee33ea58d3aeb8c1cd60a2e841e91;
static PyCodeObject *codeobj_607d7a116744842a4fb73112ac56c3e2;
static PyCodeObject *codeobj_e4bc79138640ed56abb3f7f69e832301;
static PyCodeObject *codeobj_1959372fce396a40e9acf23c67fd2aa8;
static PyCodeObject *codeobj_271c38511da380f8e83c7708db47327b;
static PyCodeObject *codeobj_fc24d00aa83455a3233e01523f031ec8;
static PyCodeObject *codeobj_f3d0ade73b78fdc407335895c1758a75;
static PyCodeObject *codeobj_7d586151ebbf1efb5c296a398674b39d;
static PyCodeObject *codeobj_2b202ed37fee0d6d0f6f24490cc0e481;
static PyCodeObject *codeobj_cb76d13ec55b9e48c975b37a7a9ce8ae;
static PyCodeObject *codeobj_cf5bcd2a6fcf7d0ed2a085cdb0631d05;
static PyCodeObject *codeobj_44e2e7a99476cdd07d4adba53ed07d41;
static PyCodeObject *codeobj_6d539acb85d1b465d4dd857d4624e9d6;
static PyCodeObject *codeobj_8b8fa78c2a12b3be52c5fa969be8aba8;
static PyCodeObject *codeobj_25e976fb761cf75424f863f1f20fb9d5;
static PyCodeObject *codeobj_232786d4f90ea5f8d68987266fb1ad78;
static PyCodeObject *codeobj_b2bb960061c906b2353ad4aa95fd4dd6;
static PyCodeObject *codeobj_750f5c8feaeaea57610211092329068e;
static PyCodeObject *codeobj_5f1182b7279c6850b775bb556aa679e2;
static PyCodeObject *codeobj_5fae46354ee87fa5ad78a9f6a62c5f4f;
static PyCodeObject *codeobj_8f67f8b667dc4908bbf2129a88f129c7;
static PyCodeObject *codeobj_839f6bfddb3c38a4ba2bed42c14f2751;
static PyCodeObject *codeobj_936288a2ef085159927bec5ceec021a2;
static PyCodeObject *codeobj_099de618e2033a4d9c9bd91719d2b3a0;
static PyCodeObject *codeobj_6f33e4a3092bf5b0f0cbaae0c2684e2d;
static PyCodeObject *codeobj_888533b379aecd0efc622e1bf6684576;
static PyCodeObject *codeobj_c3d1eaf32ce4ae2a70ffa4e0060ca334;
static PyCodeObject *codeobj_7f9638378e922dcde00dc06e4f748498;
static PyCodeObject *codeobj_69fe9d814914c157bfafbd9a5571e994;
static PyCodeObject *codeobj_76a9dfe779a66021dacaba001f931148;
static PyCodeObject *codeobj_6dc4b1f7d7f86de07145d89a4f3551dd;
static PyCodeObject *codeobj_e568ab18a890d60689fb922b1cd8137f;
static PyCodeObject *codeobj_bbdf411065ebeb249a600a28e5a8d1c0;
static PyCodeObject *codeobj_a95ea4e745cc32de89fdbc2cd7c6a45c;
static PyCodeObject *codeobj_ac4fc3a3ba06dffbda1ba0f43b5cb6e4;
static PyCodeObject *codeobj_e836ee714dc5461c6b91b6f6449766d5;
static PyCodeObject *codeobj_526a0206ec30ef4826e5ea851642e2c0;
static PyCodeObject *codeobj_017b15537ccf59bf7a1284c3e9abe910;
static PyCodeObject *codeobj_f06c86e42cce539be41d6456bf4180f9;
static PyCodeObject *codeobj_40ec9a9dbc628125a73dc8fbcd2106cc;
static PyCodeObject *codeobj_1d7528274dc63570c6cf5bb7af351aab;
static PyCodeObject *codeobj_4c8562a60f2b8da4a1cd9a9138fde345;
static PyCodeObject *codeobj_b0da56b1abd525a0ca56ca8a4d7114b9;
static PyCodeObject *codeobj_627a15b1aabfa740dc60694391ff833f;
static PyCodeObject *codeobj_12989bb78c2cf0f948390e3487366d93;
static PyCodeObject *codeobj_2ac884af71fe44f966c2fc5397283b96;
static PyCodeObject *codeobj_43c3212ede3b504b58243d9778ec8741;
static PyCodeObject *codeobj_cd39b1cc253a4add608c44baedee738f;
static PyCodeObject *codeobj_1f7c5f1b2f55d6de58cc97e39ac41f58;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[144]; CHECK_OBJECT(module_filename_obj);
    codeobj_85afcf247299ea445e9b4ca4b08c2596 = MAKE_CODEOBJECT(module_filename_obj, 394, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[257], NULL, 1, 0, 0);
    codeobj_c49d21da5ee845a5dfd9c75846da343a = MAKE_CODEOBJECT(module_filename_obj, 609, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[248], NULL, NULL, 0, 0, 0);
    codeobj_9ec1f01d6412484c57c4d048ac67c495 = MAKE_CODEOBJECT(module_filename_obj, 610, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[248], NULL, NULL, 0, 0, 0);
    codeobj_0dc7b0a9946ba9a57bfb0264ad2a13a0 = MAKE_CODEOBJECT(module_filename_obj, 611, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[248], NULL, NULL, 0, 0, 0);
    codeobj_47fde25b08e5c0a251bf29d7b9bc8683 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[258], NULL, NULL, 0, 0, 0);
    codeobj_c4ca0153088d8ce8aa9215be167acdf5 = MAKE_CODEOBJECT(module_filename_obj, 462, CO_NOFREE, mod_consts[114], mod_consts[259], NULL, 0, 0, 0);
    codeobj_c78ee33ea58d3aeb8c1cd60a2e841e91 = MAKE_CODEOBJECT(module_filename_obj, 87, CO_NOFREE, mod_consts[20], mod_consts[259], NULL, 0, 0, 0);
    codeobj_607d7a116744842a4fb73112ac56c3e2 = MAKE_CODEOBJECT(module_filename_obj, 61, CO_NOFREE, mod_consts[5], mod_consts[259], NULL, 0, 0, 0);
    codeobj_e4bc79138640ed56abb3f7f69e832301 = MAKE_CODEOBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[188], mod_consts[260], NULL, 1, 0, 0);
    codeobj_1959372fce396a40e9acf23c67fd2aa8 = MAKE_CODEOBJECT(module_filename_obj, 483, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[235], mod_consts[260], NULL, 1, 0, 0);
    codeobj_271c38511da380f8e83c7708db47327b = MAKE_CODEOBJECT(module_filename_obj, 486, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[237], mod_consts[261], NULL, 4, 0, 0);
    codeobj_fc24d00aa83455a3233e01523f031ec8 = MAKE_CODEOBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[196], mod_consts[262], NULL, 2, 0, 0);
    codeobj_f3d0ade73b78fdc407335895c1758a75 = MAKE_CODEOBJECT(module_filename_obj, 480, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[196], mod_consts[262], NULL, 2, 0, 0);
    codeobj_7d586151ebbf1efb5c296a398674b39d = MAKE_CODEOBJECT(module_filename_obj, 463, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[263], NULL, 4, 0, 0);
    codeobj_2b202ed37fee0d6d0f6f24490cc0e481 = MAKE_CODEOBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[23], mod_consts[264], mod_consts[259], 6, 0, 0);
    codeobj_cb76d13ec55b9e48c975b37a7a9ce8ae = MAKE_CODEOBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[265], NULL, 4, 0, 0);
    codeobj_cf5bcd2a6fcf7d0ed2a085cdb0631d05 = MAKE_CODEOBJECT(module_filename_obj, 489, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[239], mod_consts[260], NULL, 1, 0, 0);
    codeobj_44e2e7a99476cdd07d4adba53ed07d41 = MAKE_CODEOBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[266], NULL, 1, 0, 0);
    codeobj_6d539acb85d1b465d4dd857d4624e9d6 = MAKE_CODEOBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[266], NULL, 1, 0, 0);
    codeobj_8b8fa78c2a12b3be52c5fa969be8aba8 = MAKE_CODEOBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[267], NULL, 4, 0, 0);
    codeobj_25e976fb761cf75424f863f1f20fb9d5 = MAKE_CODEOBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[268], NULL, 7, 0, 0);
    codeobj_232786d4f90ea5f8d68987266fb1ad78 = MAKE_CODEOBJECT(module_filename_obj, 305, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[269], NULL, 4, 0, 0);
    codeobj_b2bb960061c906b2353ad4aa95fd4dd6 = MAKE_CODEOBJECT(module_filename_obj, 566, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[244], NULL, NULL, 0, 0, 0);
    codeobj_750f5c8feaeaea57610211092329068e = MAKE_CODEOBJECT(module_filename_obj, 569, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[270], NULL, 3, 0, 0);
    codeobj_5f1182b7279c6850b775bb556aa679e2 = MAKE_CODEOBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[271], NULL, 2, 0, 0);
    codeobj_5fae46354ee87fa5ad78a9f6a62c5f4f = MAKE_CODEOBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[271], NULL, 2, 0, 0);
    codeobj_8f67f8b667dc4908bbf2129a88f129c7 = MAKE_CODEOBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[272], NULL, 3, 0, 0);
    codeobj_839f6bfddb3c38a4ba2bed42c14f2751 = MAKE_CODEOBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[273], NULL, 3, 0, 0);
    codeobj_936288a2ef085159927bec5ceec021a2 = MAKE_CODEOBJECT(module_filename_obj, 497, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[274], NULL, 1, 0, 0);
    codeobj_099de618e2033a4d9c9bd91719d2b3a0 = MAKE_CODEOBJECT(module_filename_obj, 586, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[247], mod_consts[275], NULL, 2, 0, 0);
    codeobj_6f33e4a3092bf5b0f0cbaae0c2684e2d = MAKE_CODEOBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[276], NULL, 5, 0, 0);
    codeobj_888533b379aecd0efc622e1bf6684576 = MAKE_CODEOBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[274], NULL, 1, 0, 0);
    codeobj_c3d1eaf32ce4ae2a70ffa4e0060ca334 = MAKE_CODEOBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[277], NULL, 4, 0, 0);
    codeobj_7f9638378e922dcde00dc06e4f748498 = MAKE_CODEOBJECT(module_filename_obj, 473, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], mod_consts[278], NULL, 2, 0, 0);
    codeobj_69fe9d814914c157bfafbd9a5571e994 = MAKE_CODEOBJECT(module_filename_obj, 591, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[136], mod_consts[279], mod_consts[280], 0, 0, 0);
    codeobj_76a9dfe779a66021dacaba001f931148 = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[281], NULL, 1, 0, 0);
    codeobj_6dc4b1f7d7f86de07145d89a4f3551dd = MAKE_CODEOBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[214], mod_consts[282], NULL, 0, 0, 0);
    codeobj_e568ab18a890d60689fb922b1cd8137f = MAKE_CODEOBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[283], NULL, 0, 0, 0);
    codeobj_bbdf411065ebeb249a600a28e5a8d1c0 = MAKE_CODEOBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[282], NULL, 0, 0, 0);
    codeobj_a95ea4e745cc32de89fdbc2cd7c6a45c = MAKE_CODEOBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], NULL, NULL, 0, 0, 0);
    codeobj_ac4fc3a3ba06dffbda1ba0f43b5cb6e4 = MAKE_CODEOBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[216], mod_consts[284], NULL, 2, 0, 0);
    codeobj_e836ee714dc5461c6b91b6f6449766d5 = MAKE_CODEOBJECT(module_filename_obj, 342, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[284], NULL, 2, 0, 0);
    codeobj_526a0206ec30ef4826e5ea851642e2c0 = MAKE_CODEOBJECT(module_filename_obj, 351, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[284], NULL, 2, 0, 0);
    codeobj_017b15537ccf59bf7a1284c3e9abe910 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[285], NULL, 1, 0, 0);
    codeobj_f06c86e42cce539be41d6456bf4180f9 = MAKE_CODEOBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[260], NULL, 1, 0, 0);
    codeobj_40ec9a9dbc628125a73dc8fbcd2106cc = MAKE_CODEOBJECT(module_filename_obj, 579, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[274], NULL, 1, 0, 0);
    codeobj_1d7528274dc63570c6cf5bb7af351aab = MAKE_CODEOBJECT(module_filename_obj, 470, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[260], NULL, 1, 0, 0);
    codeobj_4c8562a60f2b8da4a1cd9a9138fde345 = MAKE_CODEOBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[223], mod_consts[286], NULL, 5, 0, 0);
    codeobj_b0da56b1abd525a0ca56ca8a4d7114b9 = MAKE_CODEOBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[287], NULL, 2, 0, 0);
    codeobj_627a15b1aabfa740dc60694391ff833f = MAKE_CODEOBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[288], NULL, 1, 0, 0);
    codeobj_12989bb78c2cf0f948390e3487366d93 = MAKE_CODEOBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[288], NULL, 1, 0, 0);
    codeobj_2ac884af71fe44f966c2fc5397283b96 = MAKE_CODEOBJECT(module_filename_obj, 504, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[243], mod_consts[289], NULL, 2, 0, 0);
    codeobj_43c3212ede3b504b58243d9778ec8741 = MAKE_CODEOBJECT(module_filename_obj, 493, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[133], mod_consts[290], NULL, 1, 0, 0);
    codeobj_cd39b1cc253a4add608c44baedee738f = MAKE_CODEOBJECT(module_filename_obj, 575, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[246], mod_consts[291], NULL, 1, 0, 0);
    codeobj_1f7c5f1b2f55d6de58cc97e39ac41f58 = MAKE_CODEOBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[288], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_click$_compat$$$function__31_open_stream$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__10_read1(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__11_readable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__12_writable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__13_seekable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__14__is_binary_reader(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__15__is_binary_writer(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__16__find_binary_reader(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__17__find_binary_writer(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__18__stream_is_misconfigured(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__19__is_compat_stream_attr(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__1_get_filesystem_encoding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__20__is_compatible_text_stream(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__21__force_correct_text_stream(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__22__force_correct_text_reader(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__23__force_correct_text_writer(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__24_get_binary_stdin(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__25_get_binary_stdout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__26_get_binary_stderr(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__27_get_text_stdin(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__28_get_text_stdout(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__29_get_text_stderr(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__2__make_text_stream(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__30__wrap_io_open(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__31_open_stream(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__32___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__33_name(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__34_close(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__35___getattr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__36___enter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__37___exit__();


static PyObject *MAKE_FUNCTION_click$_compat$$$function__38___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__39_strip_ansi(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__3_is_ascii_encoding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__40__is_jupyter_kernel_output(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__41_should_strip_ansi(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__44__get_argv_encoding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__45__get_windows_console_stream(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__46_term_len(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__47_isatty(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__48__make_cached_stream_func(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__48__make_cached_stream_func$$$function__1_func(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__49_lambda();


static PyObject *MAKE_FUNCTION_click$_compat$$$function__4_get_best_encoding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__50_lambda();


static PyObject *MAKE_FUNCTION_click$_compat$$$function__51_lambda();


static PyObject *MAKE_FUNCTION_click$_compat$$$function__5___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__6___del__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__7_isatty(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__8___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_compat$$$function__9___getattr__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_click$_compat$$$function__1_get_filesystem_encoding(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_a95ea4e745cc32de89fdbc2cd7c6a45c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a95ea4e745cc32de89fdbc2cd7c6a45c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a95ea4e745cc32de89fdbc2cd7c6a45c)) {
        Py_XDECREF(cache_frame_a95ea4e745cc32de89fdbc2cd7c6a45c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a95ea4e745cc32de89fdbc2cd7c6a45c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a95ea4e745cc32de89fdbc2cd7c6a45c = MAKE_FUNCTION_FRAME(codeobj_a95ea4e745cc32de89fdbc2cd7c6a45c, module_click$_compat, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a95ea4e745cc32de89fdbc2cd7c6a45c->m_type_description == NULL);
    frame_a95ea4e745cc32de89fdbc2cd7c6a45c = cache_frame_a95ea4e745cc32de89fdbc2cd7c6a45c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a95ea4e745cc32de89fdbc2cd7c6a45c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a95ea4e745cc32de89fdbc2cd7c6a45c) == 2); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_a95ea4e745cc32de89fdbc2cd7c6a45c->m_frame.f_lineno = 21;
        tmp_or_left_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        frame_a95ea4e745cc32de89fdbc2cd7c6a45c->m_frame.f_lineno = 21;
        tmp_or_right_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[2]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a95ea4e745cc32de89fdbc2cd7c6a45c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a95ea4e745cc32de89fdbc2cd7c6a45c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a95ea4e745cc32de89fdbc2cd7c6a45c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a95ea4e745cc32de89fdbc2cd7c6a45c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a95ea4e745cc32de89fdbc2cd7c6a45c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a95ea4e745cc32de89fdbc2cd7c6a45c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a95ea4e745cc32de89fdbc2cd7c6a45c,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_a95ea4e745cc32de89fdbc2cd7c6a45c == cache_frame_a95ea4e745cc32de89fdbc2cd7c6a45c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a95ea4e745cc32de89fdbc2cd7c6a45c);
        cache_frame_a95ea4e745cc32de89fdbc2cd7c6a45c = NULL;
    }

    assertFrameObject(frame_a95ea4e745cc32de89fdbc2cd7c6a45c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

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


static PyObject *impl_click$_compat$$$function__2__make_text_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    PyObject *par_errors = python_pars[2];
    PyObject *par_force_readable = python_pars[3];
    PyObject *par_force_writable = python_pars[4];
    struct Nuitka_FrameObject *frame_6f33e4a3092bf5b0f0cbaae0c2684e2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6f33e4a3092bf5b0f0cbaae0c2684e2d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6f33e4a3092bf5b0f0cbaae0c2684e2d)) {
        Py_XDECREF(cache_frame_6f33e4a3092bf5b0f0cbaae0c2684e2d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f33e4a3092bf5b0f0cbaae0c2684e2d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f33e4a3092bf5b0f0cbaae0c2684e2d = MAKE_FUNCTION_FRAME(codeobj_6f33e4a3092bf5b0f0cbaae0c2684e2d, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6f33e4a3092bf5b0f0cbaae0c2684e2d->m_type_description == NULL);
    frame_6f33e4a3092bf5b0f0cbaae0c2684e2d = cache_frame_6f33e4a3092bf5b0f0cbaae0c2684e2d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6f33e4a3092bf5b0f0cbaae0c2684e2d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6f33e4a3092bf5b0f0cbaae0c2684e2d) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_encoding);
        tmp_cmp_expr_left_1 = par_encoding;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream);
        tmp_args_element_value_1 = par_stream;
        frame_6f33e4a3092bf5b0f0cbaae0c2684e2d->m_frame.f_lineno = 32;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_encoding;
            assert(old != NULL);
            par_encoding = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_errors);
        tmp_cmp_expr_left_2 = par_errors;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[4];
        {
            PyObject *old = par_errors;
            assert(old != NULL);
            par_errors = tmp_assign_source_2;
            Py_INCREF(par_errors);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_stream == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_stream;
        CHECK_OBJECT(par_encoding);
        tmp_kw_call_arg_value_1_1 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_kw_call_arg_value_2_1 = par_errors;
        tmp_kw_call_dict_value_0_1 = Py_True;
        CHECK_OBJECT(par_force_readable);
        tmp_kw_call_dict_value_1_1 = par_force_readable;
        CHECK_OBJECT(par_force_writable);
        tmp_kw_call_dict_value_2_1 = par_force_writable;
        frame_6f33e4a3092bf5b0f0cbaae0c2684e2d->m_frame.f_lineno = 35;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[7]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f33e4a3092bf5b0f0cbaae0c2684e2d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f33e4a3092bf5b0f0cbaae0c2684e2d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f33e4a3092bf5b0f0cbaae0c2684e2d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f33e4a3092bf5b0f0cbaae0c2684e2d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f33e4a3092bf5b0f0cbaae0c2684e2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f33e4a3092bf5b0f0cbaae0c2684e2d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f33e4a3092bf5b0f0cbaae0c2684e2d,
        type_description_1,
        par_stream,
        par_encoding,
        par_errors,
        par_force_readable,
        par_force_writable
    );


    // Release cached frame if used for exception.
    if (frame_6f33e4a3092bf5b0f0cbaae0c2684e2d == cache_frame_6f33e4a3092bf5b0f0cbaae0c2684e2d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6f33e4a3092bf5b0f0cbaae0c2684e2d);
        cache_frame_6f33e4a3092bf5b0f0cbaae0c2684e2d = NULL;
    }

    assertFrameObject(frame_6f33e4a3092bf5b0f0cbaae0c2684e2d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    par_encoding = NULL;
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    par_errors = NULL;
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

    Py_XDECREF(par_encoding);
    par_encoding = NULL;
    Py_XDECREF(par_errors);
    par_errors = NULL;
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
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_force_readable);
    Py_DECREF(par_force_readable);
    CHECK_OBJECT(par_force_writable);
    Py_DECREF(par_force_writable);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_force_readable);
    Py_DECREF(par_force_readable);
    CHECK_OBJECT(par_force_writable);
    Py_DECREF(par_force_writable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__3_is_ascii_encoding(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_encoding = python_pars[0];
    struct Nuitka_FrameObject *frame_017b15537ccf59bf7a1284c3e9abe910;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_017b15537ccf59bf7a1284c3e9abe910 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_017b15537ccf59bf7a1284c3e9abe910)) {
        Py_XDECREF(cache_frame_017b15537ccf59bf7a1284c3e9abe910);

#if _DEBUG_REFCOUNTS
        if (cache_frame_017b15537ccf59bf7a1284c3e9abe910 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_017b15537ccf59bf7a1284c3e9abe910 = MAKE_FUNCTION_FRAME(codeobj_017b15537ccf59bf7a1284c3e9abe910, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_017b15537ccf59bf7a1284c3e9abe910->m_type_description == NULL);
    frame_017b15537ccf59bf7a1284c3e9abe910 = cache_frame_017b15537ccf59bf7a1284c3e9abe910;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_017b15537ccf59bf7a1284c3e9abe910);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_017b15537ccf59bf7a1284c3e9abe910) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_1 = par_encoding;
        frame_017b15537ccf59bf7a1284c3e9abe910->m_frame.f_lineno = 48;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[11];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_017b15537ccf59bf7a1284c3e9abe910, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_017b15537ccf59bf7a1284c3e9abe910, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_LookupError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 47;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_017b15537ccf59bf7a1284c3e9abe910->m_frame) frame_017b15537ccf59bf7a1284c3e9abe910->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_017b15537ccf59bf7a1284c3e9abe910);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_017b15537ccf59bf7a1284c3e9abe910);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_017b15537ccf59bf7a1284c3e9abe910);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_017b15537ccf59bf7a1284c3e9abe910, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_017b15537ccf59bf7a1284c3e9abe910->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_017b15537ccf59bf7a1284c3e9abe910, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_017b15537ccf59bf7a1284c3e9abe910,
        type_description_1,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_017b15537ccf59bf7a1284c3e9abe910 == cache_frame_017b15537ccf59bf7a1284c3e9abe910) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_017b15537ccf59bf7a1284c3e9abe910);
        cache_frame_017b15537ccf59bf7a1284c3e9abe910 = NULL;
    }

    assertFrameObject(frame_017b15537ccf59bf7a1284c3e9abe910);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__4_get_best_encoding(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *var_rv = NULL;
    struct Nuitka_FrameObject *frame_76a9dfe779a66021dacaba001f931148;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_76a9dfe779a66021dacaba001f931148 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_76a9dfe779a66021dacaba001f931148)) {
        Py_XDECREF(cache_frame_76a9dfe779a66021dacaba001f931148);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76a9dfe779a66021dacaba001f931148 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76a9dfe779a66021dacaba001f931148 = MAKE_FUNCTION_FRAME(codeobj_76a9dfe779a66021dacaba001f931148, module_click$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_76a9dfe779a66021dacaba001f931148->m_type_description == NULL);
    frame_76a9dfe779a66021dacaba001f931148 = cache_frame_76a9dfe779a66021dacaba001f931148;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_76a9dfe779a66021dacaba001f931148);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_76a9dfe779a66021dacaba001f931148) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_stream);
        tmp_getattr_target_1 = par_stream;
        tmp_getattr_attr_1 = mod_consts[13];
        tmp_getattr_default_1 = Py_None;
        tmp_or_left_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_76a9dfe779a66021dacaba001f931148->m_frame.f_lineno = 55;
        tmp_or_right_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[2]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rv);
        tmp_args_element_value_1 = var_rv;
        frame_76a9dfe779a66021dacaba001f931148->m_frame.f_lineno = 56;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[15];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_76a9dfe779a66021dacaba001f931148);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_76a9dfe779a66021dacaba001f931148);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_76a9dfe779a66021dacaba001f931148);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_76a9dfe779a66021dacaba001f931148, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76a9dfe779a66021dacaba001f931148->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76a9dfe779a66021dacaba001f931148, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76a9dfe779a66021dacaba001f931148,
        type_description_1,
        par_stream,
        var_rv
    );


    // Release cached frame if used for exception.
    if (frame_76a9dfe779a66021dacaba001f931148 == cache_frame_76a9dfe779a66021dacaba001f931148) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_76a9dfe779a66021dacaba001f931148);
        cache_frame_76a9dfe779a66021dacaba001f931148 = NULL;
    }

    assertFrameObject(frame_76a9dfe779a66021dacaba001f931148);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_rv);
    tmp_return_value = var_rv;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_rv);
    Py_DECREF(var_rv);
    var_rv = NULL;
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

    Py_XDECREF(var_rv);
    var_rv = NULL;
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
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_stream = python_pars[1];
    PyObject *par_encoding = python_pars[2];
    PyObject *par_errors = python_pars[3];
    PyObject *par_force_readable = python_pars[4];
    PyObject *par_force_writable = python_pars[5];
    PyObject *par_extra = python_pars[6];
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_2b202ed37fee0d6d0f6f24490cc0e481;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2b202ed37fee0d6d0f6f24490cc0e481 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2b202ed37fee0d6d0f6f24490cc0e481)) {
        Py_XDECREF(cache_frame_2b202ed37fee0d6d0f6f24490cc0e481);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b202ed37fee0d6d0f6f24490cc0e481 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b202ed37fee0d6d0f6f24490cc0e481 = MAKE_FUNCTION_FRAME(codeobj_2b202ed37fee0d6d0f6f24490cc0e481, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2b202ed37fee0d6d0f6f24490cc0e481->m_type_description == NULL);
    frame_2b202ed37fee0d6d0f6f24490cc0e481 = cache_frame_2b202ed37fee0d6d0f6f24490cc0e481;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2b202ed37fee0d6d0f6f24490cc0e481);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2b202ed37fee0d6d0f6f24490cc0e481) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 72;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 72;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_stream);
        tmp_args_element_value_3 = par_stream;
        CHECK_OBJECT(par_force_readable);
        tmp_args_element_value_4 = par_force_readable;
        CHECK_OBJECT(par_force_writable);
        tmp_args_element_value_5 = par_force_writable;
        frame_2b202ed37fee0d6d0f6f24490cc0e481->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 72;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        frame_2b202ed37fee0d6d0f6f24490cc0e481->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_1 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_2 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = par_stream;
            assert(old != NULL);
            par_stream = tmp_assign_source_2;
            Py_INCREF(par_stream);
            Py_DECREF(old);
        }

    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_3 = BUILTIN_SUPER0(tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream);
        tmp_tuple_element_1 = par_stream;
        tmp_dircall_arg2_1 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_encoding);
        tmp_tuple_element_1 = par_encoding;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_errors);
        tmp_tuple_element_1 = par_errors;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__10_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2b202ed37fee0d6d0f6f24490cc0e481);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2b202ed37fee0d6d0f6f24490cc0e481);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2b202ed37fee0d6d0f6f24490cc0e481, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b202ed37fee0d6d0f6f24490cc0e481->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b202ed37fee0d6d0f6f24490cc0e481, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b202ed37fee0d6d0f6f24490cc0e481,
        type_description_1,
        par_self,
        par_stream,
        par_encoding,
        par_errors,
        par_force_readable,
        par_force_writable,
        par_extra,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2b202ed37fee0d6d0f6f24490cc0e481 == cache_frame_2b202ed37fee0d6d0f6f24490cc0e481) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2b202ed37fee0d6d0f6f24490cc0e481);
        cache_frame_2b202ed37fee0d6d0f6f24490cc0e481 = NULL;
    }

    assertFrameObject(frame_2b202ed37fee0d6d0f6f24490cc0e481);

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
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    par_stream = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_stream);
    par_stream = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    CHECK_OBJECT(par_force_readable);
    Py_DECREF(par_force_readable);
    CHECK_OBJECT(par_force_writable);
    Py_DECREF(par_force_writable);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    CHECK_OBJECT(par_force_readable);
    Py_DECREF(par_force_readable);
    CHECK_OBJECT(par_force_writable);
    Py_DECREF(par_force_writable);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__6___del__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e4bc79138640ed56abb3f7f69e832301;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_e4bc79138640ed56abb3f7f69e832301 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e4bc79138640ed56abb3f7f69e832301)) {
        Py_XDECREF(cache_frame_e4bc79138640ed56abb3f7f69e832301);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4bc79138640ed56abb3f7f69e832301 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4bc79138640ed56abb3f7f69e832301 = MAKE_FUNCTION_FRAME(codeobj_e4bc79138640ed56abb3f7f69e832301, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e4bc79138640ed56abb3f7f69e832301->m_type_description == NULL);
    frame_e4bc79138640ed56abb3f7f69e832301 = cache_frame_e4bc79138640ed56abb3f7f69e832301;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e4bc79138640ed56abb3f7f69e832301);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e4bc79138640ed56abb3f7f69e832301) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_e4bc79138640ed56abb3f7f69e832301->m_frame.f_lineno = 78;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e4bc79138640ed56abb3f7f69e832301, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e4bc79138640ed56abb3f7f69e832301, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 77;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e4bc79138640ed56abb3f7f69e832301->m_frame) frame_e4bc79138640ed56abb3f7f69e832301->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_no_1:;
    goto try_end_2;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4bc79138640ed56abb3f7f69e832301);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4bc79138640ed56abb3f7f69e832301);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e4bc79138640ed56abb3f7f69e832301, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4bc79138640ed56abb3f7f69e832301->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4bc79138640ed56abb3f7f69e832301, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4bc79138640ed56abb3f7f69e832301,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e4bc79138640ed56abb3f7f69e832301 == cache_frame_e4bc79138640ed56abb3f7f69e832301) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e4bc79138640ed56abb3f7f69e832301);
        cache_frame_e4bc79138640ed56abb3f7f69e832301 = NULL;
    }

    assertFrameObject(frame_e4bc79138640ed56abb3f7f69e832301);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__7_isatty(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f06c86e42cce539be41d6456bf4180f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f06c86e42cce539be41d6456bf4180f9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f06c86e42cce539be41d6456bf4180f9)) {
        Py_XDECREF(cache_frame_f06c86e42cce539be41d6456bf4180f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f06c86e42cce539be41d6456bf4180f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f06c86e42cce539be41d6456bf4180f9 = MAKE_FUNCTION_FRAME(codeobj_f06c86e42cce539be41d6456bf4180f9, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f06c86e42cce539be41d6456bf4180f9->m_type_description == NULL);
    frame_f06c86e42cce539be41d6456bf4180f9 = cache_frame_f06c86e42cce539be41d6456bf4180f9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f06c86e42cce539be41d6456bf4180f9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f06c86e42cce539be41d6456bf4180f9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f06c86e42cce539be41d6456bf4180f9->m_frame.f_lineno = 84;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[25]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f06c86e42cce539be41d6456bf4180f9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f06c86e42cce539be41d6456bf4180f9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f06c86e42cce539be41d6456bf4180f9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f06c86e42cce539be41d6456bf4180f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f06c86e42cce539be41d6456bf4180f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f06c86e42cce539be41d6456bf4180f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f06c86e42cce539be41d6456bf4180f9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f06c86e42cce539be41d6456bf4180f9 == cache_frame_f06c86e42cce539be41d6456bf4180f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f06c86e42cce539be41d6456bf4180f9);
        cache_frame_f06c86e42cce539be41d6456bf4180f9 = NULL;
    }

    assertFrameObject(frame_f06c86e42cce539be41d6456bf4180f9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_stream = python_pars[1];
    PyObject *par_force_readable = python_pars[2];
    PyObject *par_force_writable = python_pars[3];
    struct Nuitka_FrameObject *frame_cb76d13ec55b9e48c975b37a7a9ce8ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cb76d13ec55b9e48c975b37a7a9ce8ae = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cb76d13ec55b9e48c975b37a7a9ce8ae)) {
        Py_XDECREF(cache_frame_cb76d13ec55b9e48c975b37a7a9ce8ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb76d13ec55b9e48c975b37a7a9ce8ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb76d13ec55b9e48c975b37a7a9ce8ae = MAKE_FUNCTION_FRAME(codeobj_cb76d13ec55b9e48c975b37a7a9ce8ae, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cb76d13ec55b9e48c975b37a7a9ce8ae->m_type_description == NULL);
    frame_cb76d13ec55b9e48c975b37a7a9ce8ae = cache_frame_cb76d13ec55b9e48c975b37a7a9ce8ae;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cb76d13ec55b9e48c975b37a7a9ce8ae);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cb76d13ec55b9e48c975b37a7a9ce8ae) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_stream);
        tmp_assattr_value_1 = par_stream;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_force_readable);
        tmp_assattr_value_2 = par_force_readable;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[26], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_force_writable);
        tmp_assattr_value_3 = par_force_writable;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[27], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb76d13ec55b9e48c975b37a7a9ce8ae);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb76d13ec55b9e48c975b37a7a9ce8ae);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cb76d13ec55b9e48c975b37a7a9ce8ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb76d13ec55b9e48c975b37a7a9ce8ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb76d13ec55b9e48c975b37a7a9ce8ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb76d13ec55b9e48c975b37a7a9ce8ae,
        type_description_1,
        par_self,
        par_stream,
        par_force_readable,
        par_force_writable
    );


    // Release cached frame if used for exception.
    if (frame_cb76d13ec55b9e48c975b37a7a9ce8ae == cache_frame_cb76d13ec55b9e48c975b37a7a9ce8ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cb76d13ec55b9e48c975b37a7a9ce8ae);
        cache_frame_cb76d13ec55b9e48c975b37a7a9ce8ae = NULL;
    }

    assertFrameObject(frame_cb76d13ec55b9e48c975b37a7a9ce8ae);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_force_readable);
    Py_DECREF(par_force_readable);
    CHECK_OBJECT(par_force_writable);
    Py_DECREF(par_force_writable);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_force_readable);
    Py_DECREF(par_force_readable);
    CHECK_OBJECT(par_force_writable);
    Py_DECREF(par_force_writable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__9___getattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_fc24d00aa83455a3233e01523f031ec8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc24d00aa83455a3233e01523f031ec8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc24d00aa83455a3233e01523f031ec8)) {
        Py_XDECREF(cache_frame_fc24d00aa83455a3233e01523f031ec8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc24d00aa83455a3233e01523f031ec8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc24d00aa83455a3233e01523f031ec8 = MAKE_FUNCTION_FRAME(codeobj_fc24d00aa83455a3233e01523f031ec8, module_click$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fc24d00aa83455a3233e01523f031ec8->m_type_description == NULL);
    frame_fc24d00aa83455a3233e01523f031ec8 = cache_frame_fc24d00aa83455a3233e01523f031ec8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fc24d00aa83455a3233e01523f031ec8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fc24d00aa83455a3233e01523f031ec8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_getattr_attr_1 = par_name;
        tmp_return_value = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc24d00aa83455a3233e01523f031ec8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc24d00aa83455a3233e01523f031ec8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc24d00aa83455a3233e01523f031ec8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc24d00aa83455a3233e01523f031ec8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc24d00aa83455a3233e01523f031ec8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc24d00aa83455a3233e01523f031ec8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc24d00aa83455a3233e01523f031ec8,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_fc24d00aa83455a3233e01523f031ec8 == cache_frame_fc24d00aa83455a3233e01523f031ec8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fc24d00aa83455a3233e01523f031ec8);
        cache_frame_fc24d00aa83455a3233e01523f031ec8 = NULL;
    }

    assertFrameObject(frame_fc24d00aa83455a3233e01523f031ec8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__10_read1(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_size = python_pars[1];
    PyObject *var_f = NULL;
    struct Nuitka_FrameObject *frame_b0da56b1abd525a0ca56ca8a4d7114b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b0da56b1abd525a0ca56ca8a4d7114b9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b0da56b1abd525a0ca56ca8a4d7114b9)) {
        Py_XDECREF(cache_frame_b0da56b1abd525a0ca56ca8a4d7114b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0da56b1abd525a0ca56ca8a4d7114b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0da56b1abd525a0ca56ca8a4d7114b9 = MAKE_FUNCTION_FRAME(codeobj_b0da56b1abd525a0ca56ca8a4d7114b9, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b0da56b1abd525a0ca56ca8a4d7114b9->m_type_description == NULL);
    frame_b0da56b1abd525a0ca56ca8a4d7114b9 = cache_frame_b0da56b1abd525a0ca56ca8a4d7114b9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b0da56b1abd525a0ca56ca8a4d7114b9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b0da56b1abd525a0ca56ca8a4d7114b9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_1 = mod_consts[28];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_f);
        tmp_cmp_expr_left_1 = var_f;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = (PyObject *)&PyBytes_Type;
        CHECK_OBJECT(var_f);
        tmp_called_value_2 = var_f;
        CHECK_OBJECT(par_size);
        tmp_args_element_value_3 = par_size;
        frame_b0da56b1abd525a0ca56ca8a4d7114b9->m_frame.f_lineno = 114;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_b0da56b1abd525a0ca56ca8a4d7114b9->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_size);
        tmp_args_element_value_4 = par_size;
        frame_b0da56b1abd525a0ca56ca8a4d7114b9->m_frame.f_lineno = 116;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[29], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0da56b1abd525a0ca56ca8a4d7114b9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0da56b1abd525a0ca56ca8a4d7114b9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0da56b1abd525a0ca56ca8a4d7114b9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0da56b1abd525a0ca56ca8a4d7114b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0da56b1abd525a0ca56ca8a4d7114b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0da56b1abd525a0ca56ca8a4d7114b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0da56b1abd525a0ca56ca8a4d7114b9,
        type_description_1,
        par_self,
        par_size,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_b0da56b1abd525a0ca56ca8a4d7114b9 == cache_frame_b0da56b1abd525a0ca56ca8a4d7114b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b0da56b1abd525a0ca56ca8a4d7114b9);
        cache_frame_b0da56b1abd525a0ca56ca8a4d7114b9 = NULL;
    }

    assertFrameObject(frame_b0da56b1abd525a0ca56ca8a4d7114b9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
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

    Py_XDECREF(var_f);
    var_f = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__11_readable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_627a15b1aabfa740dc60694391ff833f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_627a15b1aabfa740dc60694391ff833f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_627a15b1aabfa740dc60694391ff833f)) {
        Py_XDECREF(cache_frame_627a15b1aabfa740dc60694391ff833f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_627a15b1aabfa740dc60694391ff833f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_627a15b1aabfa740dc60694391ff833f = MAKE_FUNCTION_FRAME(codeobj_627a15b1aabfa740dc60694391ff833f, module_click$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_627a15b1aabfa740dc60694391ff833f->m_type_description == NULL);
    frame_627a15b1aabfa740dc60694391ff833f = cache_frame_627a15b1aabfa740dc60694391ff833f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_627a15b1aabfa740dc60694391ff833f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_627a15b1aabfa740dc60694391ff833f) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 119;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_1 = mod_consts[30];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_x);
        tmp_cmp_expr_left_1 = var_x;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = (PyObject *)&PyBool_Type;
        CHECK_OBJECT(var_x);
        tmp_called_value_2 = var_x;
        frame_627a15b1aabfa740dc60694391ff833f->m_frame.f_lineno = 123;
        tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_627a15b1aabfa740dc60694391ff833f->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_627a15b1aabfa740dc60694391ff833f->m_frame.f_lineno = 125;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[29],
            PyTuple_GET_ITEM(mod_consts[31], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_627a15b1aabfa740dc60694391ff833f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_627a15b1aabfa740dc60694391ff833f, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 124;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_627a15b1aabfa740dc60694391ff833f->m_frame) frame_627a15b1aabfa740dc60694391ff833f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_627a15b1aabfa740dc60694391ff833f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_627a15b1aabfa740dc60694391ff833f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_627a15b1aabfa740dc60694391ff833f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_627a15b1aabfa740dc60694391ff833f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_627a15b1aabfa740dc60694391ff833f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_627a15b1aabfa740dc60694391ff833f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_627a15b1aabfa740dc60694391ff833f,
        type_description_1,
        par_self,
        var_x
    );


    // Release cached frame if used for exception.
    if (frame_627a15b1aabfa740dc60694391ff833f == cache_frame_627a15b1aabfa740dc60694391ff833f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_627a15b1aabfa740dc60694391ff833f);
        cache_frame_627a15b1aabfa740dc60694391ff833f = NULL;
    }

    assertFrameObject(frame_627a15b1aabfa740dc60694391ff833f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_x);
    var_x = NULL;
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

    Py_XDECREF(var_x);
    var_x = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__12_writable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_1f7c5f1b2f55d6de58cc97e39ac41f58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_1f7c5f1b2f55d6de58cc97e39ac41f58 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1f7c5f1b2f55d6de58cc97e39ac41f58)) {
        Py_XDECREF(cache_frame_1f7c5f1b2f55d6de58cc97e39ac41f58);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1f7c5f1b2f55d6de58cc97e39ac41f58 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1f7c5f1b2f55d6de58cc97e39ac41f58 = MAKE_FUNCTION_FRAME(codeobj_1f7c5f1b2f55d6de58cc97e39ac41f58, module_click$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1f7c5f1b2f55d6de58cc97e39ac41f58->m_type_description == NULL);
    frame_1f7c5f1b2f55d6de58cc97e39ac41f58 = cache_frame_1f7c5f1b2f55d6de58cc97e39ac41f58;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1f7c5f1b2f55d6de58cc97e39ac41f58);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1f7c5f1b2f55d6de58cc97e39ac41f58) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_1 = mod_consts[32];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_x);
        tmp_cmp_expr_left_1 = var_x;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = (PyObject *)&PyBool_Type;
        CHECK_OBJECT(var_x);
        tmp_called_value_2 = var_x;
        frame_1f7c5f1b2f55d6de58cc97e39ac41f58->m_frame.f_lineno = 135;
        tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1f7c5f1b2f55d6de58cc97e39ac41f58->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_1f7c5f1b2f55d6de58cc97e39ac41f58->m_frame.f_lineno = 137;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[33],
            PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_1f7c5f1b2f55d6de58cc97e39ac41f58, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_1f7c5f1b2f55d6de58cc97e39ac41f58, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[21]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        frame_1f7c5f1b2f55d6de58cc97e39ac41f58->m_frame.f_lineno = 140;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[33],
            PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_1f7c5f1b2f55d6de58cc97e39ac41f58, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_1f7c5f1b2f55d6de58cc97e39ac41f58, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_5;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 139;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1f7c5f1b2f55d6de58cc97e39ac41f58->m_frame) frame_1f7c5f1b2f55d6de58cc97e39ac41f58->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_5;
    branch_end_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_return_handler_3;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    // End of try:
    try_end_2:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 136;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1f7c5f1b2f55d6de58cc97e39ac41f58->m_frame) frame_1f7c5f1b2f55d6de58cc97e39ac41f58->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_3:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f7c5f1b2f55d6de58cc97e39ac41f58);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f7c5f1b2f55d6de58cc97e39ac41f58);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f7c5f1b2f55d6de58cc97e39ac41f58);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1f7c5f1b2f55d6de58cc97e39ac41f58, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1f7c5f1b2f55d6de58cc97e39ac41f58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1f7c5f1b2f55d6de58cc97e39ac41f58, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1f7c5f1b2f55d6de58cc97e39ac41f58,
        type_description_1,
        par_self,
        var_x
    );


    // Release cached frame if used for exception.
    if (frame_1f7c5f1b2f55d6de58cc97e39ac41f58 == cache_frame_1f7c5f1b2f55d6de58cc97e39ac41f58) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1f7c5f1b2f55d6de58cc97e39ac41f58);
        cache_frame_1f7c5f1b2f55d6de58cc97e39ac41f58 = NULL;
    }

    assertFrameObject(frame_1f7c5f1b2f55d6de58cc97e39ac41f58);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_x);
    var_x = NULL;
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

    Py_XDECREF(var_x);
    var_x = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__13_seekable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_12989bb78c2cf0f948390e3487366d93;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_12989bb78c2cf0f948390e3487366d93 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_12989bb78c2cf0f948390e3487366d93)) {
        Py_XDECREF(cache_frame_12989bb78c2cf0f948390e3487366d93);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12989bb78c2cf0f948390e3487366d93 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12989bb78c2cf0f948390e3487366d93 = MAKE_FUNCTION_FRAME(codeobj_12989bb78c2cf0f948390e3487366d93, module_click$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_12989bb78c2cf0f948390e3487366d93->m_type_description == NULL);
    frame_12989bb78c2cf0f948390e3487366d93 = cache_frame_12989bb78c2cf0f948390e3487366d93;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_12989bb78c2cf0f948390e3487366d93);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_12989bb78c2cf0f948390e3487366d93) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_1 = mod_consts[36];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_x);
        tmp_cmp_expr_left_1 = var_x;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = (PyObject *)&PyBool_Type;
        CHECK_OBJECT(var_x);
        tmp_called_value_2 = var_x;
        frame_12989bb78c2cf0f948390e3487366d93->m_frame.f_lineno = 148;
        tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_12989bb78c2cf0f948390e3487366d93->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[37]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[21]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 150;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_12989bb78c2cf0f948390e3487366d93->m_frame.f_lineno = 150;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[38]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 150;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_12989bb78c2cf0f948390e3487366d93->m_frame.f_lineno = 150;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_12989bb78c2cf0f948390e3487366d93, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_12989bb78c2cf0f948390e3487366d93, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 149;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_12989bb78c2cf0f948390e3487366d93->m_frame) frame_12989bb78c2cf0f948390e3487366d93->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_12989bb78c2cf0f948390e3487366d93);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_12989bb78c2cf0f948390e3487366d93);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_12989bb78c2cf0f948390e3487366d93);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12989bb78c2cf0f948390e3487366d93, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12989bb78c2cf0f948390e3487366d93->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12989bb78c2cf0f948390e3487366d93, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12989bb78c2cf0f948390e3487366d93,
        type_description_1,
        par_self,
        var_x
    );


    // Release cached frame if used for exception.
    if (frame_12989bb78c2cf0f948390e3487366d93 == cache_frame_12989bb78c2cf0f948390e3487366d93) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_12989bb78c2cf0f948390e3487366d93);
        cache_frame_12989bb78c2cf0f948390e3487366d93 = NULL;
    }

    assertFrameObject(frame_12989bb78c2cf0f948390e3487366d93);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_x);
    var_x = NULL;
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

    Py_XDECREF(var_x);
    var_x = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__14__is_binary_reader(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *par_default = python_pars[1];
    struct Nuitka_FrameObject *frame_5f1182b7279c6850b775bb556aa679e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_5f1182b7279c6850b775bb556aa679e2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5f1182b7279c6850b775bb556aa679e2)) {
        Py_XDECREF(cache_frame_5f1182b7279c6850b775bb556aa679e2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f1182b7279c6850b775bb556aa679e2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f1182b7279c6850b775bb556aa679e2 = MAKE_FUNCTION_FRAME(codeobj_5f1182b7279c6850b775bb556aa679e2, module_click$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5f1182b7279c6850b775bb556aa679e2->m_type_description == NULL);
    frame_5f1182b7279c6850b775bb556aa679e2 = cache_frame_5f1182b7279c6850b775bb556aa679e2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5f1182b7279c6850b775bb556aa679e2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5f1182b7279c6850b775bb556aa679e2) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_stream);
        tmp_called_instance_1 = par_stream;
        frame_5f1182b7279c6850b775bb556aa679e2->m_frame.f_lineno = 158;
        tmp_isinstance_inst_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[29],
            PyTuple_GET_ITEM(mod_consts[31], 0)
        );

        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_5f1182b7279c6850b775bb556aa679e2, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_5f1182b7279c6850b775bb556aa679e2, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_default);
    tmp_return_value = par_default;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 157;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5f1182b7279c6850b775bb556aa679e2->m_frame) frame_5f1182b7279c6850b775bb556aa679e2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f1182b7279c6850b775bb556aa679e2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f1182b7279c6850b775bb556aa679e2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f1182b7279c6850b775bb556aa679e2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f1182b7279c6850b775bb556aa679e2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f1182b7279c6850b775bb556aa679e2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f1182b7279c6850b775bb556aa679e2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f1182b7279c6850b775bb556aa679e2,
        type_description_1,
        par_stream,
        par_default
    );


    // Release cached frame if used for exception.
    if (frame_5f1182b7279c6850b775bb556aa679e2 == cache_frame_5f1182b7279c6850b775bb556aa679e2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5f1182b7279c6850b775bb556aa679e2);
        cache_frame_5f1182b7279c6850b775bb556aa679e2 = NULL;
    }

    assertFrameObject(frame_5f1182b7279c6850b775bb556aa679e2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__15__is_binary_writer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *par_default = python_pars[1];
    struct Nuitka_FrameObject *frame_5fae46354ee87fa5ad78a9f6a62c5f4f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_5fae46354ee87fa5ad78a9f6a62c5f4f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5fae46354ee87fa5ad78a9f6a62c5f4f)) {
        Py_XDECREF(cache_frame_5fae46354ee87fa5ad78a9f6a62c5f4f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5fae46354ee87fa5ad78a9f6a62c5f4f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5fae46354ee87fa5ad78a9f6a62c5f4f = MAKE_FUNCTION_FRAME(codeobj_5fae46354ee87fa5ad78a9f6a62c5f4f, module_click$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5fae46354ee87fa5ad78a9f6a62c5f4f->m_type_description == NULL);
    frame_5fae46354ee87fa5ad78a9f6a62c5f4f = cache_frame_5fae46354ee87fa5ad78a9f6a62c5f4f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5fae46354ee87fa5ad78a9f6a62c5f4f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5fae46354ee87fa5ad78a9f6a62c5f4f) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_stream);
        tmp_called_instance_1 = par_stream;
        frame_5fae46354ee87fa5ad78a9f6a62c5f4f->m_frame.f_lineno = 167;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[33],
            PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
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

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_5fae46354ee87fa5ad78a9f6a62c5f4f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_5fae46354ee87fa5ad78a9f6a62c5f4f, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_stream);
        tmp_called_instance_2 = par_stream;
        frame_5fae46354ee87fa5ad78a9f6a62c5f4f->m_frame.f_lineno = 170;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[33],
            PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_5fae46354ee87fa5ad78a9f6a62c5f4f, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_5fae46354ee87fa5ad78a9f6a62c5f4f, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 169;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5fae46354ee87fa5ad78a9f6a62c5f4f->m_frame) frame_5fae46354ee87fa5ad78a9f6a62c5f4f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_4;
    branch_no_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(par_default);
    tmp_return_value = par_default;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 166;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5fae46354ee87fa5ad78a9f6a62c5f4f->m_frame) frame_5fae46354ee87fa5ad78a9f6a62c5f4f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5fae46354ee87fa5ad78a9f6a62c5f4f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5fae46354ee87fa5ad78a9f6a62c5f4f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5fae46354ee87fa5ad78a9f6a62c5f4f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5fae46354ee87fa5ad78a9f6a62c5f4f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5fae46354ee87fa5ad78a9f6a62c5f4f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5fae46354ee87fa5ad78a9f6a62c5f4f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5fae46354ee87fa5ad78a9f6a62c5f4f,
        type_description_1,
        par_stream,
        par_default
    );


    // Release cached frame if used for exception.
    if (frame_5fae46354ee87fa5ad78a9f6a62c5f4f == cache_frame_5fae46354ee87fa5ad78a9f6a62c5f4f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5fae46354ee87fa5ad78a9f6a62c5f4f);
        cache_frame_5fae46354ee87fa5ad78a9f6a62c5f4f = NULL;
    }

    assertFrameObject(frame_5fae46354ee87fa5ad78a9f6a62c5f4f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__16__find_binary_reader(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *var_buf = NULL;
    struct Nuitka_FrameObject *frame_44e2e7a99476cdd07d4adba53ed07d41;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_44e2e7a99476cdd07d4adba53ed07d41 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_44e2e7a99476cdd07d4adba53ed07d41)) {
        Py_XDECREF(cache_frame_44e2e7a99476cdd07d4adba53ed07d41);

#if _DEBUG_REFCOUNTS
        if (cache_frame_44e2e7a99476cdd07d4adba53ed07d41 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_44e2e7a99476cdd07d4adba53ed07d41 = MAKE_FUNCTION_FRAME(codeobj_44e2e7a99476cdd07d4adba53ed07d41, module_click$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_44e2e7a99476cdd07d4adba53ed07d41->m_type_description == NULL);
    frame_44e2e7a99476cdd07d4adba53ed07d41 = cache_frame_44e2e7a99476cdd07d4adba53ed07d41;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_44e2e7a99476cdd07d4adba53ed07d41);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_44e2e7a99476cdd07d4adba53ed07d41) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream);
        tmp_args_element_value_1 = par_stream;
        tmp_args_element_value_2 = Py_False;
        frame_44e2e7a99476cdd07d4adba53ed07d41->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream);
        tmp_args_element_value_4 = par_stream;
        frame_44e2e7a99476cdd07d4adba53ed07d41->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_stream);
        tmp_getattr_target_1 = par_stream;
        tmp_getattr_attr_1 = mod_consts[40];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_buf == NULL);
        var_buf = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_buf);
        tmp_cmp_expr_left_1 = var_buf;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buf);
        tmp_args_element_value_5 = var_buf;
        tmp_args_element_value_6 = Py_True;
        frame_44e2e7a99476cdd07d4adba53ed07d41->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 191;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 191;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (var_buf == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = var_buf;
        frame_44e2e7a99476cdd07d4adba53ed07d41->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_44e2e7a99476cdd07d4adba53ed07d41);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_44e2e7a99476cdd07d4adba53ed07d41);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_44e2e7a99476cdd07d4adba53ed07d41);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_44e2e7a99476cdd07d4adba53ed07d41, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_44e2e7a99476cdd07d4adba53ed07d41->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_44e2e7a99476cdd07d4adba53ed07d41, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_44e2e7a99476cdd07d4adba53ed07d41,
        type_description_1,
        par_stream,
        var_buf
    );


    // Release cached frame if used for exception.
    if (frame_44e2e7a99476cdd07d4adba53ed07d41 == cache_frame_44e2e7a99476cdd07d4adba53ed07d41) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_44e2e7a99476cdd07d4adba53ed07d41);
        cache_frame_44e2e7a99476cdd07d4adba53ed07d41 = NULL;
    }

    assertFrameObject(frame_44e2e7a99476cdd07d4adba53ed07d41);

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
    Py_XDECREF(var_buf);
    var_buf = NULL;
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

    Py_XDECREF(var_buf);
    var_buf = NULL;
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
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__17__find_binary_writer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *var_buf = NULL;
    struct Nuitka_FrameObject *frame_6d539acb85d1b465d4dd857d4624e9d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6d539acb85d1b465d4dd857d4624e9d6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6d539acb85d1b465d4dd857d4624e9d6)) {
        Py_XDECREF(cache_frame_6d539acb85d1b465d4dd857d4624e9d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d539acb85d1b465d4dd857d4624e9d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d539acb85d1b465d4dd857d4624e9d6 = MAKE_FUNCTION_FRAME(codeobj_6d539acb85d1b465d4dd857d4624e9d6, module_click$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6d539acb85d1b465d4dd857d4624e9d6->m_type_description == NULL);
    frame_6d539acb85d1b465d4dd857d4624e9d6 = cache_frame_6d539acb85d1b465d4dd857d4624e9d6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6d539acb85d1b465d4dd857d4624e9d6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6d539acb85d1b465d4dd857d4624e9d6) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream);
        tmp_args_element_value_1 = par_stream;
        tmp_args_element_value_2 = Py_False;
        frame_6d539acb85d1b465d4dd857d4624e9d6->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream);
        tmp_args_element_value_4 = par_stream;
        frame_6d539acb85d1b465d4dd857d4624e9d6->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_stream);
        tmp_getattr_target_1 = par_stream;
        tmp_getattr_attr_1 = mod_consts[40];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_buf == NULL);
        var_buf = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_buf);
        tmp_cmp_expr_left_1 = var_buf;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buf);
        tmp_args_element_value_5 = var_buf;
        tmp_args_element_value_6 = Py_True;
        frame_6d539acb85d1b465d4dd857d4624e9d6->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (var_buf == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = var_buf;
        frame_6d539acb85d1b465d4dd857d4624e9d6->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d539acb85d1b465d4dd857d4624e9d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d539acb85d1b465d4dd857d4624e9d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d539acb85d1b465d4dd857d4624e9d6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6d539acb85d1b465d4dd857d4624e9d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d539acb85d1b465d4dd857d4624e9d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d539acb85d1b465d4dd857d4624e9d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d539acb85d1b465d4dd857d4624e9d6,
        type_description_1,
        par_stream,
        var_buf
    );


    // Release cached frame if used for exception.
    if (frame_6d539acb85d1b465d4dd857d4624e9d6 == cache_frame_6d539acb85d1b465d4dd857d4624e9d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6d539acb85d1b465d4dd857d4624e9d6);
        cache_frame_6d539acb85d1b465d4dd857d4624e9d6 = NULL;
    }

    assertFrameObject(frame_6d539acb85d1b465d4dd857d4624e9d6);

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
    Py_XDECREF(var_buf);
    var_buf = NULL;
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

    Py_XDECREF(var_buf);
    var_buf = NULL;
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
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__18__stream_is_misconfigured(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    struct Nuitka_FrameObject *frame_888533b379aecd0efc622e1bf6684576;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_888533b379aecd0efc622e1bf6684576 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_888533b379aecd0efc622e1bf6684576)) {
        Py_XDECREF(cache_frame_888533b379aecd0efc622e1bf6684576);

#if _DEBUG_REFCOUNTS
        if (cache_frame_888533b379aecd0efc622e1bf6684576 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_888533b379aecd0efc622e1bf6684576 = MAKE_FUNCTION_FRAME(codeobj_888533b379aecd0efc622e1bf6684576, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_888533b379aecd0efc622e1bf6684576->m_type_description == NULL);
    frame_888533b379aecd0efc622e1bf6684576 = cache_frame_888533b379aecd0efc622e1bf6684576;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_888533b379aecd0efc622e1bf6684576);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_888533b379aecd0efc622e1bf6684576) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream);
        tmp_getattr_target_1 = par_stream;
        tmp_getattr_attr_1 = mod_consts[13];
        tmp_getattr_default_1 = Py_None;
        tmp_or_left_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[11];
        Py_INCREF(tmp_or_right_value_1);
        tmp_args_element_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_1 = tmp_or_left_value_1;
        or_end_1:;
        frame_888533b379aecd0efc622e1bf6684576->m_frame.f_lineno = 220;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_888533b379aecd0efc622e1bf6684576);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_888533b379aecd0efc622e1bf6684576);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_888533b379aecd0efc622e1bf6684576);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_888533b379aecd0efc622e1bf6684576, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_888533b379aecd0efc622e1bf6684576->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_888533b379aecd0efc622e1bf6684576, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_888533b379aecd0efc622e1bf6684576,
        type_description_1,
        par_stream
    );


    // Release cached frame if used for exception.
    if (frame_888533b379aecd0efc622e1bf6684576 == cache_frame_888533b379aecd0efc622e1bf6684576) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_888533b379aecd0efc622e1bf6684576);
        cache_frame_888533b379aecd0efc622e1bf6684576 = NULL;
    }

    assertFrameObject(frame_888533b379aecd0efc622e1bf6684576);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__19__is_compat_stream_attr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *par_attr = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *var_stream_value = NULL;
    struct Nuitka_FrameObject *frame_8f67f8b667dc4908bbf2129a88f129c7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8f67f8b667dc4908bbf2129a88f129c7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8f67f8b667dc4908bbf2129a88f129c7)) {
        Py_XDECREF(cache_frame_8f67f8b667dc4908bbf2129a88f129c7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f67f8b667dc4908bbf2129a88f129c7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f67f8b667dc4908bbf2129a88f129c7 = MAKE_FUNCTION_FRAME(codeobj_8f67f8b667dc4908bbf2129a88f129c7, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8f67f8b667dc4908bbf2129a88f129c7->m_type_description == NULL);
    frame_8f67f8b667dc4908bbf2129a88f129c7 = cache_frame_8f67f8b667dc4908bbf2129a88f129c7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8f67f8b667dc4908bbf2129a88f129c7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8f67f8b667dc4908bbf2129a88f129c7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_stream);
        tmp_getattr_target_1 = par_stream;
        CHECK_OBJECT(par_attr);
        tmp_getattr_attr_1 = par_attr;
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_stream_value == NULL);
        var_stream_value = tmp_assign_source_1;
    }
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_stream_value);
        tmp_cmp_expr_left_1 = var_stream_value;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_right_1 = par_value;
        tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 229;
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
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_stream_value);
        tmp_cmp_expr_left_3 = var_stream_value;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? Py_True : Py_False;
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_or_right_value_1);
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f67f8b667dc4908bbf2129a88f129c7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f67f8b667dc4908bbf2129a88f129c7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f67f8b667dc4908bbf2129a88f129c7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8f67f8b667dc4908bbf2129a88f129c7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f67f8b667dc4908bbf2129a88f129c7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f67f8b667dc4908bbf2129a88f129c7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f67f8b667dc4908bbf2129a88f129c7,
        type_description_1,
        par_stream,
        par_attr,
        par_value,
        var_stream_value
    );


    // Release cached frame if used for exception.
    if (frame_8f67f8b667dc4908bbf2129a88f129c7 == cache_frame_8f67f8b667dc4908bbf2129a88f129c7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8f67f8b667dc4908bbf2129a88f129c7);
        cache_frame_8f67f8b667dc4908bbf2129a88f129c7 = NULL;
    }

    assertFrameObject(frame_8f67f8b667dc4908bbf2129a88f129c7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_stream_value);
    Py_DECREF(var_stream_value);
    var_stream_value = NULL;
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

    Py_XDECREF(var_stream_value);
    var_stream_value = NULL;
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
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__20__is_compatible_text_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    PyObject *par_errors = python_pars[2];
    struct Nuitka_FrameObject *frame_839f6bfddb3c38a4ba2bed42c14f2751;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_839f6bfddb3c38a4ba2bed42c14f2751 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_839f6bfddb3c38a4ba2bed42c14f2751)) {
        Py_XDECREF(cache_frame_839f6bfddb3c38a4ba2bed42c14f2751);

#if _DEBUG_REFCOUNTS
        if (cache_frame_839f6bfddb3c38a4ba2bed42c14f2751 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_839f6bfddb3c38a4ba2bed42c14f2751 = MAKE_FUNCTION_FRAME(codeobj_839f6bfddb3c38a4ba2bed42c14f2751, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_839f6bfddb3c38a4ba2bed42c14f2751->m_type_description == NULL);
    frame_839f6bfddb3c38a4ba2bed42c14f2751 = cache_frame_839f6bfddb3c38a4ba2bed42c14f2751;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_839f6bfddb3c38a4ba2bed42c14f2751);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_839f6bfddb3c38a4ba2bed42c14f2751) == 2); // Frame stack

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream);
        tmp_args_element_value_1 = par_stream;
        tmp_args_element_value_2 = mod_consts[13];
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_3 = par_encoding;
        frame_839f6bfddb3c38a4ba2bed42c14f2751->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 238;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream);
        tmp_args_element_value_4 = par_stream;
        tmp_args_element_value_5 = mod_consts[46];
        CHECK_OBJECT(par_errors);
        tmp_args_element_value_6 = par_errors;
        frame_839f6bfddb3c38a4ba2bed42c14f2751->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_839f6bfddb3c38a4ba2bed42c14f2751);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_839f6bfddb3c38a4ba2bed42c14f2751);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_839f6bfddb3c38a4ba2bed42c14f2751);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_839f6bfddb3c38a4ba2bed42c14f2751, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_839f6bfddb3c38a4ba2bed42c14f2751->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_839f6bfddb3c38a4ba2bed42c14f2751, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_839f6bfddb3c38a4ba2bed42c14f2751,
        type_description_1,
        par_stream,
        par_encoding,
        par_errors
    );


    // Release cached frame if used for exception.
    if (frame_839f6bfddb3c38a4ba2bed42c14f2751 == cache_frame_839f6bfddb3c38a4ba2bed42c14f2751) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_839f6bfddb3c38a4ba2bed42c14f2751);
        cache_frame_839f6bfddb3c38a4ba2bed42c14f2751 = NULL;
    }

    assertFrameObject(frame_839f6bfddb3c38a4ba2bed42c14f2751);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__21__force_correct_text_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text_stream = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    PyObject *par_errors = python_pars[2];
    PyObject *par_is_binary = python_pars[3];
    PyObject *par_find_binary = python_pars[4];
    PyObject *par_force_readable = python_pars[5];
    PyObject *par_force_writable = python_pars[6];
    PyObject *var_binary_reader = NULL;
    PyObject *var_possible_binary_reader = NULL;
    struct Nuitka_FrameObject *frame_25e976fb761cf75424f863f1f20fb9d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_25e976fb761cf75424f863f1f20fb9d5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_25e976fb761cf75424f863f1f20fb9d5)) {
        Py_XDECREF(cache_frame_25e976fb761cf75424f863f1f20fb9d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_25e976fb761cf75424f863f1f20fb9d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_25e976fb761cf75424f863f1f20fb9d5 = MAKE_FUNCTION_FRAME(codeobj_25e976fb761cf75424f863f1f20fb9d5, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_25e976fb761cf75424f863f1f20fb9d5->m_type_description == NULL);
    frame_25e976fb761cf75424f863f1f20fb9d5 = cache_frame_25e976fb761cf75424f863f1f20fb9d5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_25e976fb761cf75424f863f1f20fb9d5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_25e976fb761cf75424f863f1f20fb9d5) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_is_binary);
        tmp_called_value_1 = par_is_binary;
        CHECK_OBJECT(par_text_stream);
        tmp_args_element_value_1 = par_text_stream;
        tmp_args_element_value_2 = Py_False;
        frame_25e976fb761cf75424f863f1f20fb9d5->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 252;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 253;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text_stream);
        tmp_args_element_value_4 = par_text_stream;
        frame_25e976fb761cf75424f863f1f20fb9d5->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_binary_reader == NULL);
        var_binary_reader = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[48]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 255;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text_stream);
        tmp_args_element_value_6 = par_text_stream;
        frame_25e976fb761cf75424f863f1f20fb9d5->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_text_stream;
            assert(old != NULL);
            par_text_stream = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        int tmp_truth_name_2;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text_stream);
        tmp_args_element_value_7 = par_text_stream;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_8 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_args_element_value_9 = par_errors;
        frame_25e976fb761cf75424f863f1f20fb9d5->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 258;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_encoding);
        tmp_cmp_expr_left_1 = par_encoding;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text_stream);
        tmp_args_element_value_10 = par_text_stream;
        frame_25e976fb761cf75424f863f1f20fb9d5->m_frame.f_lineno = 259;
        tmp_and_right_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_10);
        if (tmp_and_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        Py_INCREF(tmp_and_left_value_2);
        tmp_operand_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(par_text_stream);
    tmp_return_value = par_text_stream;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_find_binary);
        tmp_called_value_6 = par_find_binary;
        CHECK_OBJECT(par_text_stream);
        tmp_args_element_value_11 = par_text_stream;
        frame_25e976fb761cf75424f863f1f20fb9d5->m_frame.f_lineno = 264;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_11);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_possible_binary_reader == NULL);
        var_possible_binary_reader = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_possible_binary_reader);
        tmp_cmp_expr_left_2 = var_possible_binary_reader;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    CHECK_OBJECT(par_text_stream);
    tmp_return_value = par_text_stream;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(var_possible_binary_reader);
        tmp_assign_source_4 = var_possible_binary_reader;
        assert(var_binary_reader == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_binary_reader = tmp_assign_source_4;
    }
    branch_end_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (par_errors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 275;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = par_errors;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[4];
        {
            PyObject *old = par_errors;
            par_errors = tmp_assign_source_5;
            Py_INCREF(par_errors);
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_binary_reader);
        tmp_kw_call_arg_value_0_1 = var_binary_reader;
        if (par_encoding == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 282;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = par_encoding;
        if (par_errors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_2_1 = par_errors;
        CHECK_OBJECT(par_force_readable);
        tmp_kw_call_dict_value_0_1 = par_force_readable;
        CHECK_OBJECT(par_force_writable);
        tmp_kw_call_dict_value_1_1 = par_force_writable;
        frame_25e976fb761cf75424f863f1f20fb9d5->m_frame.f_lineno = 280;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[52]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_25e976fb761cf75424f863f1f20fb9d5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_25e976fb761cf75424f863f1f20fb9d5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_25e976fb761cf75424f863f1f20fb9d5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_25e976fb761cf75424f863f1f20fb9d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_25e976fb761cf75424f863f1f20fb9d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_25e976fb761cf75424f863f1f20fb9d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_25e976fb761cf75424f863f1f20fb9d5,
        type_description_1,
        par_text_stream,
        par_encoding,
        par_errors,
        par_is_binary,
        par_find_binary,
        par_force_readable,
        par_force_writable,
        var_binary_reader,
        var_possible_binary_reader
    );


    // Release cached frame if used for exception.
    if (frame_25e976fb761cf75424f863f1f20fb9d5 == cache_frame_25e976fb761cf75424f863f1f20fb9d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_25e976fb761cf75424f863f1f20fb9d5);
        cache_frame_25e976fb761cf75424f863f1f20fb9d5 = NULL;
    }

    assertFrameObject(frame_25e976fb761cf75424f863f1f20fb9d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_text_stream);
    par_text_stream = NULL;
    Py_XDECREF(par_errors);
    par_errors = NULL;
    Py_XDECREF(var_binary_reader);
    var_binary_reader = NULL;
    Py_XDECREF(var_possible_binary_reader);
    var_possible_binary_reader = NULL;
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

    Py_XDECREF(par_text_stream);
    par_text_stream = NULL;
    Py_XDECREF(par_errors);
    par_errors = NULL;
    Py_XDECREF(var_binary_reader);
    var_binary_reader = NULL;
    Py_XDECREF(var_possible_binary_reader);
    var_possible_binary_reader = NULL;
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
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_is_binary);
    Py_DECREF(par_is_binary);
    CHECK_OBJECT(par_find_binary);
    Py_DECREF(par_find_binary);
    CHECK_OBJECT(par_force_readable);
    Py_DECREF(par_force_readable);
    CHECK_OBJECT(par_force_writable);
    Py_DECREF(par_force_writable);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_is_binary);
    Py_DECREF(par_is_binary);
    CHECK_OBJECT(par_find_binary);
    Py_DECREF(par_find_binary);
    CHECK_OBJECT(par_force_readable);
    Py_DECREF(par_force_readable);
    CHECK_OBJECT(par_force_writable);
    Py_DECREF(par_force_writable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__22__force_correct_text_reader(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text_reader = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    PyObject *par_errors = python_pars[2];
    PyObject *par_force_readable = python_pars[3];
    struct Nuitka_FrameObject *frame_8b8fa78c2a12b3be52c5fa969be8aba8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8b8fa78c2a12b3be52c5fa969be8aba8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8b8fa78c2a12b3be52c5fa969be8aba8)) {
        Py_XDECREF(cache_frame_8b8fa78c2a12b3be52c5fa969be8aba8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b8fa78c2a12b3be52c5fa969be8aba8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b8fa78c2a12b3be52c5fa969be8aba8 = MAKE_FUNCTION_FRAME(codeobj_8b8fa78c2a12b3be52c5fa969be8aba8, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8b8fa78c2a12b3be52c5fa969be8aba8->m_type_description == NULL);
    frame_8b8fa78c2a12b3be52c5fa969be8aba8 = cache_frame_8b8fa78c2a12b3be52c5fa969be8aba8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8b8fa78c2a12b3be52c5fa969be8aba8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8b8fa78c2a12b3be52c5fa969be8aba8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text_reader);
        tmp_kw_call_arg_value_0_1 = par_text_reader;
        CHECK_OBJECT(par_encoding);
        tmp_kw_call_arg_value_1_1 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_kw_call_arg_value_2_1 = par_errors;
        tmp_kw_call_arg_value_3_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
            tmp_kw_call_arg_value_3_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_4_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_kw_call_arg_value_4_1 == NULL)) {
            tmp_kw_call_arg_value_4_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_force_readable);
        tmp_kw_call_dict_value_0_1 = par_force_readable;
        frame_8b8fa78c2a12b3be52c5fa969be8aba8->m_frame.f_lineno = 295;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[55]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8b8fa78c2a12b3be52c5fa969be8aba8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8b8fa78c2a12b3be52c5fa969be8aba8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8b8fa78c2a12b3be52c5fa969be8aba8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b8fa78c2a12b3be52c5fa969be8aba8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b8fa78c2a12b3be52c5fa969be8aba8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b8fa78c2a12b3be52c5fa969be8aba8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b8fa78c2a12b3be52c5fa969be8aba8,
        type_description_1,
        par_text_reader,
        par_encoding,
        par_errors,
        par_force_readable
    );


    // Release cached frame if used for exception.
    if (frame_8b8fa78c2a12b3be52c5fa969be8aba8 == cache_frame_8b8fa78c2a12b3be52c5fa969be8aba8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8b8fa78c2a12b3be52c5fa969be8aba8);
        cache_frame_8b8fa78c2a12b3be52c5fa969be8aba8 = NULL;
    }

    assertFrameObject(frame_8b8fa78c2a12b3be52c5fa969be8aba8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text_reader);
    Py_DECREF(par_text_reader);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    CHECK_OBJECT(par_force_readable);
    Py_DECREF(par_force_readable);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text_reader);
    Py_DECREF(par_text_reader);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    CHECK_OBJECT(par_force_readable);
    Py_DECREF(par_force_readable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__23__force_correct_text_writer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text_writer = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    PyObject *par_errors = python_pars[2];
    PyObject *par_force_writable = python_pars[3];
    struct Nuitka_FrameObject *frame_232786d4f90ea5f8d68987266fb1ad78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_232786d4f90ea5f8d68987266fb1ad78 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_232786d4f90ea5f8d68987266fb1ad78)) {
        Py_XDECREF(cache_frame_232786d4f90ea5f8d68987266fb1ad78);

#if _DEBUG_REFCOUNTS
        if (cache_frame_232786d4f90ea5f8d68987266fb1ad78 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_232786d4f90ea5f8d68987266fb1ad78 = MAKE_FUNCTION_FRAME(codeobj_232786d4f90ea5f8d68987266fb1ad78, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_232786d4f90ea5f8d68987266fb1ad78->m_type_description == NULL);
    frame_232786d4f90ea5f8d68987266fb1ad78 = cache_frame_232786d4f90ea5f8d68987266fb1ad78;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_232786d4f90ea5f8d68987266fb1ad78);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_232786d4f90ea5f8d68987266fb1ad78) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text_writer);
        tmp_kw_call_arg_value_0_1 = par_text_writer;
        CHECK_OBJECT(par_encoding);
        tmp_kw_call_arg_value_1_1 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_kw_call_arg_value_2_1 = par_errors;
        tmp_kw_call_arg_value_3_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
            tmp_kw_call_arg_value_3_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_4_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_kw_call_arg_value_4_1 == NULL)) {
            tmp_kw_call_arg_value_4_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_force_writable);
        tmp_kw_call_dict_value_0_1 = par_force_writable;
        frame_232786d4f90ea5f8d68987266fb1ad78->m_frame.f_lineno = 311;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[57]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_232786d4f90ea5f8d68987266fb1ad78);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_232786d4f90ea5f8d68987266fb1ad78);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_232786d4f90ea5f8d68987266fb1ad78);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_232786d4f90ea5f8d68987266fb1ad78, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_232786d4f90ea5f8d68987266fb1ad78->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_232786d4f90ea5f8d68987266fb1ad78, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_232786d4f90ea5f8d68987266fb1ad78,
        type_description_1,
        par_text_writer,
        par_encoding,
        par_errors,
        par_force_writable
    );


    // Release cached frame if used for exception.
    if (frame_232786d4f90ea5f8d68987266fb1ad78 == cache_frame_232786d4f90ea5f8d68987266fb1ad78) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_232786d4f90ea5f8d68987266fb1ad78);
        cache_frame_232786d4f90ea5f8d68987266fb1ad78 = NULL;
    }

    assertFrameObject(frame_232786d4f90ea5f8d68987266fb1ad78);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text_writer);
    Py_DECREF(par_text_writer);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    CHECK_OBJECT(par_force_writable);
    Py_DECREF(par_force_writable);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text_writer);
    Py_DECREF(par_text_writer);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    CHECK_OBJECT(par_force_writable);
    Py_DECREF(par_force_writable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__24_get_binary_stdin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_reader = NULL;
    struct Nuitka_FrameObject *frame_e568ab18a890d60689fb922b1cd8137f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e568ab18a890d60689fb922b1cd8137f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e568ab18a890d60689fb922b1cd8137f)) {
        Py_XDECREF(cache_frame_e568ab18a890d60689fb922b1cd8137f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e568ab18a890d60689fb922b1cd8137f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e568ab18a890d60689fb922b1cd8137f = MAKE_FUNCTION_FRAME(codeobj_e568ab18a890d60689fb922b1cd8137f, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e568ab18a890d60689fb922b1cd8137f->m_type_description == NULL);
    frame_e568ab18a890d60689fb922b1cd8137f = cache_frame_e568ab18a890d60689fb922b1cd8137f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e568ab18a890d60689fb922b1cd8137f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e568ab18a890d60689fb922b1cd8137f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[58]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e568ab18a890d60689fb922b1cd8137f->m_frame.f_lineno = 322;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_reader == NULL);
        var_reader = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_reader);
        tmp_cmp_expr_left_1 = var_reader;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[59];
        frame_e568ab18a890d60689fb922b1cd8137f->m_frame.f_lineno = 324;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 324;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e568ab18a890d60689fb922b1cd8137f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e568ab18a890d60689fb922b1cd8137f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e568ab18a890d60689fb922b1cd8137f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e568ab18a890d60689fb922b1cd8137f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e568ab18a890d60689fb922b1cd8137f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e568ab18a890d60689fb922b1cd8137f,
        type_description_1,
        var_reader
    );


    // Release cached frame if used for exception.
    if (frame_e568ab18a890d60689fb922b1cd8137f == cache_frame_e568ab18a890d60689fb922b1cd8137f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e568ab18a890d60689fb922b1cd8137f);
        cache_frame_e568ab18a890d60689fb922b1cd8137f = NULL;
    }

    assertFrameObject(frame_e568ab18a890d60689fb922b1cd8137f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_reader);
    tmp_return_value = var_reader;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_reader);
    Py_DECREF(var_reader);
    var_reader = NULL;
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

    Py_XDECREF(var_reader);
    var_reader = NULL;
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


static PyObject *impl_click$_compat$$$function__25_get_binary_stdout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_writer = NULL;
    struct Nuitka_FrameObject *frame_bbdf411065ebeb249a600a28e5a8d1c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bbdf411065ebeb249a600a28e5a8d1c0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bbdf411065ebeb249a600a28e5a8d1c0)) {
        Py_XDECREF(cache_frame_bbdf411065ebeb249a600a28e5a8d1c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bbdf411065ebeb249a600a28e5a8d1c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bbdf411065ebeb249a600a28e5a8d1c0 = MAKE_FUNCTION_FRAME(codeobj_bbdf411065ebeb249a600a28e5a8d1c0, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bbdf411065ebeb249a600a28e5a8d1c0->m_type_description == NULL);
    frame_bbdf411065ebeb249a600a28e5a8d1c0 = cache_frame_bbdf411065ebeb249a600a28e5a8d1c0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bbdf411065ebeb249a600a28e5a8d1c0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bbdf411065ebeb249a600a28e5a8d1c0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_args_element_value_1 == NULL));
        frame_bbdf411065ebeb249a600a28e5a8d1c0->m_frame.f_lineno = 329;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_writer == NULL);
        var_writer = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_writer);
        tmp_cmp_expr_left_1 = var_writer;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[60];
        frame_bbdf411065ebeb249a600a28e5a8d1c0->m_frame.f_lineno = 331;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 331;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbdf411065ebeb249a600a28e5a8d1c0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbdf411065ebeb249a600a28e5a8d1c0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bbdf411065ebeb249a600a28e5a8d1c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbdf411065ebeb249a600a28e5a8d1c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbdf411065ebeb249a600a28e5a8d1c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bbdf411065ebeb249a600a28e5a8d1c0,
        type_description_1,
        var_writer
    );


    // Release cached frame if used for exception.
    if (frame_bbdf411065ebeb249a600a28e5a8d1c0 == cache_frame_bbdf411065ebeb249a600a28e5a8d1c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bbdf411065ebeb249a600a28e5a8d1c0);
        cache_frame_bbdf411065ebeb249a600a28e5a8d1c0 = NULL;
    }

    assertFrameObject(frame_bbdf411065ebeb249a600a28e5a8d1c0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_writer);
    tmp_return_value = var_writer;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_writer);
    Py_DECREF(var_writer);
    var_writer = NULL;
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

    Py_XDECREF(var_writer);
    var_writer = NULL;
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


static PyObject *impl_click$_compat$$$function__26_get_binary_stderr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_writer = NULL;
    struct Nuitka_FrameObject *frame_6dc4b1f7d7f86de07145d89a4f3551dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6dc4b1f7d7f86de07145d89a4f3551dd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6dc4b1f7d7f86de07145d89a4f3551dd)) {
        Py_XDECREF(cache_frame_6dc4b1f7d7f86de07145d89a4f3551dd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6dc4b1f7d7f86de07145d89a4f3551dd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6dc4b1f7d7f86de07145d89a4f3551dd = MAKE_FUNCTION_FRAME(codeobj_6dc4b1f7d7f86de07145d89a4f3551dd, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6dc4b1f7d7f86de07145d89a4f3551dd->m_type_description == NULL);
    frame_6dc4b1f7d7f86de07145d89a4f3551dd = cache_frame_6dc4b1f7d7f86de07145d89a4f3551dd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6dc4b1f7d7f86de07145d89a4f3551dd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6dc4b1f7d7f86de07145d89a4f3551dd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = Nuitka_SysGetObject("stderr");
        assert(!(tmp_args_element_value_1 == NULL));
        frame_6dc4b1f7d7f86de07145d89a4f3551dd->m_frame.f_lineno = 336;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_writer == NULL);
        var_writer = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_writer);
        tmp_cmp_expr_left_1 = var_writer;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[61];
        frame_6dc4b1f7d7f86de07145d89a4f3551dd->m_frame.f_lineno = 338;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 338;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6dc4b1f7d7f86de07145d89a4f3551dd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6dc4b1f7d7f86de07145d89a4f3551dd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6dc4b1f7d7f86de07145d89a4f3551dd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6dc4b1f7d7f86de07145d89a4f3551dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6dc4b1f7d7f86de07145d89a4f3551dd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6dc4b1f7d7f86de07145d89a4f3551dd,
        type_description_1,
        var_writer
    );


    // Release cached frame if used for exception.
    if (frame_6dc4b1f7d7f86de07145d89a4f3551dd == cache_frame_6dc4b1f7d7f86de07145d89a4f3551dd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6dc4b1f7d7f86de07145d89a4f3551dd);
        cache_frame_6dc4b1f7d7f86de07145d89a4f3551dd = NULL;
    }

    assertFrameObject(frame_6dc4b1f7d7f86de07145d89a4f3551dd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_writer);
    tmp_return_value = var_writer;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_writer);
    Py_DECREF(var_writer);
    var_writer = NULL;
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

    Py_XDECREF(var_writer);
    var_writer = NULL;
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


static PyObject *impl_click$_compat$$$function__27_get_text_stdin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_encoding = python_pars[0];
    PyObject *par_errors = python_pars[1];
    PyObject *var_rv = NULL;
    struct Nuitka_FrameObject *frame_e836ee714dc5461c6b91b6f6449766d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e836ee714dc5461c6b91b6f6449766d5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e836ee714dc5461c6b91b6f6449766d5)) {
        Py_XDECREF(cache_frame_e836ee714dc5461c6b91b6f6449766d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e836ee714dc5461c6b91b6f6449766d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e836ee714dc5461c6b91b6f6449766d5 = MAKE_FUNCTION_FRAME(codeobj_e836ee714dc5461c6b91b6f6449766d5, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e836ee714dc5461c6b91b6f6449766d5->m_type_description == NULL);
    frame_e836ee714dc5461c6b91b6f6449766d5 = cache_frame_e836ee714dc5461c6b91b6f6449766d5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e836ee714dc5461c6b91b6f6449766d5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e836ee714dc5461c6b91b6f6449766d5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[58]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_2 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_args_element_value_3 = par_errors;
        frame_e836ee714dc5461c6b91b6f6449766d5->m_frame.f_lineno = 345;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_rv);
        tmp_cmp_expr_left_1 = var_rv;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_rv);
    tmp_return_value = var_rv;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[58]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_encoding);
        tmp_tuple_element_1 = par_encoding;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_errors);
        tmp_tuple_element_1 = par_errors;
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[64]);
        frame_e836ee714dc5461c6b91b6f6449766d5->m_frame.f_lineno = 348;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e836ee714dc5461c6b91b6f6449766d5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e836ee714dc5461c6b91b6f6449766d5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e836ee714dc5461c6b91b6f6449766d5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e836ee714dc5461c6b91b6f6449766d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e836ee714dc5461c6b91b6f6449766d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e836ee714dc5461c6b91b6f6449766d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e836ee714dc5461c6b91b6f6449766d5,
        type_description_1,
        par_encoding,
        par_errors,
        var_rv
    );


    // Release cached frame if used for exception.
    if (frame_e836ee714dc5461c6b91b6f6449766d5 == cache_frame_e836ee714dc5461c6b91b6f6449766d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e836ee714dc5461c6b91b6f6449766d5);
        cache_frame_e836ee714dc5461c6b91b6f6449766d5 = NULL;
    }

    assertFrameObject(frame_e836ee714dc5461c6b91b6f6449766d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_rv);
    Py_DECREF(var_rv);
    var_rv = NULL;
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

    Py_XDECREF(var_rv);
    var_rv = NULL;
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
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__28_get_text_stdout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_encoding = python_pars[0];
    PyObject *par_errors = python_pars[1];
    PyObject *var_rv = NULL;
    struct Nuitka_FrameObject *frame_526a0206ec30ef4826e5ea851642e2c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_526a0206ec30ef4826e5ea851642e2c0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_526a0206ec30ef4826e5ea851642e2c0)) {
        Py_XDECREF(cache_frame_526a0206ec30ef4826e5ea851642e2c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_526a0206ec30ef4826e5ea851642e2c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_526a0206ec30ef4826e5ea851642e2c0 = MAKE_FUNCTION_FRAME(codeobj_526a0206ec30ef4826e5ea851642e2c0, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_526a0206ec30ef4826e5ea851642e2c0->m_type_description == NULL);
    frame_526a0206ec30ef4826e5ea851642e2c0 = cache_frame_526a0206ec30ef4826e5ea851642e2c0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_526a0206ec30ef4826e5ea851642e2c0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_526a0206ec30ef4826e5ea851642e2c0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_args_element_value_1 == NULL));
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_2 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_args_element_value_3 = par_errors;
        frame_526a0206ec30ef4826e5ea851642e2c0->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_rv);
        tmp_cmp_expr_left_1 = var_rv;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_rv);
    tmp_return_value = var_rv;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_tuple_element_1 == NULL));
        tmp_args_value_1 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_encoding);
        tmp_tuple_element_1 = par_encoding;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_errors);
        tmp_tuple_element_1 = par_errors;
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[66]);
        frame_526a0206ec30ef4826e5ea851642e2c0->m_frame.f_lineno = 357;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_526a0206ec30ef4826e5ea851642e2c0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_526a0206ec30ef4826e5ea851642e2c0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_526a0206ec30ef4826e5ea851642e2c0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_526a0206ec30ef4826e5ea851642e2c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_526a0206ec30ef4826e5ea851642e2c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_526a0206ec30ef4826e5ea851642e2c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_526a0206ec30ef4826e5ea851642e2c0,
        type_description_1,
        par_encoding,
        par_errors,
        var_rv
    );


    // Release cached frame if used for exception.
    if (frame_526a0206ec30ef4826e5ea851642e2c0 == cache_frame_526a0206ec30ef4826e5ea851642e2c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_526a0206ec30ef4826e5ea851642e2c0);
        cache_frame_526a0206ec30ef4826e5ea851642e2c0 = NULL;
    }

    assertFrameObject(frame_526a0206ec30ef4826e5ea851642e2c0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_rv);
    Py_DECREF(var_rv);
    var_rv = NULL;
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

    Py_XDECREF(var_rv);
    var_rv = NULL;
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
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__29_get_text_stderr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_encoding = python_pars[0];
    PyObject *par_errors = python_pars[1];
    PyObject *var_rv = NULL;
    struct Nuitka_FrameObject *frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4)) {
        Py_XDECREF(cache_frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4 = MAKE_FUNCTION_FRAME(codeobj_ac4fc3a3ba06dffbda1ba0f43b5cb6e4, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4->m_type_description == NULL);
    frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4 = cache_frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = Nuitka_SysGetObject("stderr");
        assert(!(tmp_args_element_value_1 == NULL));
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_2 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_args_element_value_3 = par_errors;
        frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_rv);
        tmp_cmp_expr_left_1 = var_rv;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_rv);
    tmp_return_value = var_rv;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = Nuitka_SysGetObject("stderr");
        assert(!(tmp_tuple_element_1 == NULL));
        tmp_args_value_1 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_encoding);
        tmp_tuple_element_1 = par_encoding;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_errors);
        tmp_tuple_element_1 = par_errors;
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[66]);
        frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4->m_frame.f_lineno = 366;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4,
        type_description_1,
        par_encoding,
        par_errors,
        var_rv
    );


    // Release cached frame if used for exception.
    if (frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4 == cache_frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4);
        cache_frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4 = NULL;
    }

    assertFrameObject(frame_ac4fc3a3ba06dffbda1ba0f43b5cb6e4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_rv);
    Py_DECREF(var_rv);
    var_rv = NULL;
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

    Py_XDECREF(var_rv);
    var_rv = NULL;
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
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__30__wrap_io_open(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_file = python_pars[0];
    PyObject *par_mode = python_pars[1];
    PyObject *par_encoding = python_pars[2];
    PyObject *par_errors = python_pars[3];
    struct Nuitka_FrameObject *frame_c3d1eaf32ce4ae2a70ffa4e0060ca334;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c3d1eaf32ce4ae2a70ffa4e0060ca334 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c3d1eaf32ce4ae2a70ffa4e0060ca334)) {
        Py_XDECREF(cache_frame_c3d1eaf32ce4ae2a70ffa4e0060ca334);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3d1eaf32ce4ae2a70ffa4e0060ca334 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3d1eaf32ce4ae2a70ffa4e0060ca334 = MAKE_FUNCTION_FRAME(codeobj_c3d1eaf32ce4ae2a70ffa4e0060ca334, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c3d1eaf32ce4ae2a70ffa4e0060ca334->m_type_description == NULL);
    frame_c3d1eaf32ce4ae2a70ffa4e0060ca334 = cache_frame_c3d1eaf32ce4ae2a70ffa4e0060ca334;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c3d1eaf32ce4ae2a70ffa4e0060ca334);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c3d1eaf32ce4ae2a70ffa4e0060ca334) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[67];
        CHECK_OBJECT(par_mode);
        tmp_cmp_expr_right_1 = par_mode;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(par_file);
        tmp_open_filename_1 = par_file;
        CHECK_OBJECT(par_mode);
        tmp_open_mode_1 = par_mode;
        tmp_return_value = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_open_filename_2;
        PyObject *tmp_open_mode_2;
        PyObject *tmp_open_encoding_1;
        PyObject *tmp_open_errors_1;
        CHECK_OBJECT(par_file);
        tmp_open_filename_2 = par_file;
        CHECK_OBJECT(par_mode);
        tmp_open_mode_2 = par_mode;
        CHECK_OBJECT(par_encoding);
        tmp_open_encoding_1 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_open_errors_1 = par_errors;
        tmp_return_value = BUILTIN_OPEN(tmp_open_filename_2, tmp_open_mode_2, NULL, tmp_open_encoding_1, tmp_open_errors_1, NULL, NULL, NULL);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c3d1eaf32ce4ae2a70ffa4e0060ca334);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c3d1eaf32ce4ae2a70ffa4e0060ca334);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c3d1eaf32ce4ae2a70ffa4e0060ca334);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c3d1eaf32ce4ae2a70ffa4e0060ca334, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3d1eaf32ce4ae2a70ffa4e0060ca334->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3d1eaf32ce4ae2a70ffa4e0060ca334, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3d1eaf32ce4ae2a70ffa4e0060ca334,
        type_description_1,
        par_file,
        par_mode,
        par_encoding,
        par_errors
    );


    // Release cached frame if used for exception.
    if (frame_c3d1eaf32ce4ae2a70ffa4e0060ca334 == cache_frame_c3d1eaf32ce4ae2a70ffa4e0060ca334) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c3d1eaf32ce4ae2a70ffa4e0060ca334);
        cache_frame_c3d1eaf32ce4ae2a70ffa4e0060ca334 = NULL;
    }

    assertFrameObject(frame_c3d1eaf32ce4ae2a70ffa4e0060ca334);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__31_open_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    struct Nuitka_CellObject *par_mode = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_encoding = python_pars[2];
    PyObject *par_errors = python_pars[3];
    PyObject *par_atomic = python_pars[4];
    PyObject *var_perm = NULL;
    nuitka_bool var_binary = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_errno = NULL;
    PyObject *var_random = NULL;
    PyObject *var_flags = NULL;
    PyObject *var_tmp_filename = NULL;
    PyObject *var_fd = NULL;
    PyObject *var_e = NULL;
    PyObject *var_f = NULL;
    PyObject *var_af = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_4c8562a60f2b8da4a1cd9a9138fde345;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4c8562a60f2b8da4a1cd9a9138fde345 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4c8562a60f2b8da4a1cd9a9138fde345)) {
        Py_XDECREF(cache_frame_4c8562a60f2b8da4a1cd9a9138fde345);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c8562a60f2b8da4a1cd9a9138fde345 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c8562a60f2b8da4a1cd9a9138fde345 = MAKE_FUNCTION_FRAME(codeobj_4c8562a60f2b8da4a1cd9a9138fde345, module_click$_compat, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4c8562a60f2b8da4a1cd9a9138fde345->m_type_description == NULL);
    frame_4c8562a60f2b8da4a1cd9a9138fde345 = cache_frame_4c8562a60f2b8da4a1cd9a9138fde345;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4c8562a60f2b8da4a1cd9a9138fde345);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4c8562a60f2b8da4a1cd9a9138fde345) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_assign_source_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[67];
        CHECK_OBJECT(Nuitka_Cell_GET(par_mode));
        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(par_mode);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_binary = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_1 = par_filename;
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 393;
        tmp_cmp_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[70], tmp_args_element_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[71];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = mod_consts[72];
            tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            assert(!(tmp_assign_source_2 == NULL));
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = par_mode;
            Py_INCREF(tmp_closure_1[1]);

            tmp_any_arg_1 = MAKE_GENERATOR_click$_compat$$$function__31_open_stream$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_capi_result_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        assert(var_binary != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_3 = var_binary == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 396;
        tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_False;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_kw_call_value_0_1 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_kw_call_value_1_1 = par_errors;
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 397;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_tuple_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[75]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_False;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_4;
        assert(var_binary != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_4 = var_binary == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 399;
        tmp_tuple_element_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = Py_False;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
        goto frame_return_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_kw_call_value_0_2 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_kw_call_value_1_2 = par_errors;
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 400;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[75]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = Py_False;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_4);
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_atomic);
        tmp_operand_value_1 = par_atomic;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_2 = par_filename;
        CHECK_OBJECT(Nuitka_Cell_GET(par_mode));
        tmp_args_element_value_3 = Nuitka_Cell_GET(par_mode);
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_4 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_args_element_value_5 = par_errors;
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 404;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_tuple_element_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = Py_True;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_5);
        goto frame_return_exit_1;
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = mod_consts[79];
        CHECK_OBJECT(Nuitka_Cell_GET(par_mode));
        tmp_cmp_expr_right_3 = Nuitka_Cell_GET(par_mode);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[80];
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 408;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 408;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ocooooboooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = mod_consts[81];
        CHECK_OBJECT(Nuitka_Cell_GET(par_mode));
        tmp_cmp_expr_right_4 = Nuitka_Cell_GET(par_mode);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[82];
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 415;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 415;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ocooooboooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = mod_consts[83];
        CHECK_OBJECT(Nuitka_Cell_GET(par_mode));
        tmp_cmp_expr_right_5 = Nuitka_Cell_GET(par_mode);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[84];
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 417;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 417;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ocooooboooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[85];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_compat;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[86];
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 423;
        tmp_assign_source_3 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_3 == NULL));
        assert(var_errno == NULL);
        var_errno = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[87];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_click$_compat;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[86];
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 424;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_random == NULL);
        var_random = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_6 = par_filename;
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 427;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[88], tmp_args_element_value_6);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[89]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_3;
        }
        assert(var_perm == NULL);
        var_perm = tmp_assign_source_5;
    }
    goto try_end_1;
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4c8562a60f2b8da4a1cd9a9138fde345, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4c8562a60f2b8da4a1cd9a9138fde345, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_6 = PyExc_OSError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        assert(var_perm == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_perm = tmp_assign_source_6;
    }
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 426;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame) frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocooooboooooooo";
    goto try_except_handler_4;
    branch_end_9:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_right_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_right_value_2;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[90]);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 431;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[91]);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 431;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_1);
        Py_DECREF(tmp_left_value_2);
        Py_DECREF(tmp_right_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 431;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[92]);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 431;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_2);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_flags == NULL);
        var_flags = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_10;
        assert(var_binary != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_10 = var_binary == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(var_flags);
        tmp_left_value_3 = var_flags;
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_getattr_target_1 == NULL)) {
            tmp_getattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_1 = mod_consts[93];
        tmp_getattr_default_1 = mod_consts[86];
        tmp_right_value_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_BITOR_OBJECT_OBJECT_INPLACE(&tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_left_value_3;
        var_flags = tmp_assign_source_8;

    }
    branch_no_10:;
    loop_start_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[94]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[95]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 438;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[94]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 438;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[96]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 438;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        if (par_filename == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 438;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = par_filename;
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 438;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 438;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = mod_consts[98];
        tmp_string_concat_values_1 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_6);
            if (var_random == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 439;
                type_description_1 = "ocooooboooooooo";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_3 = var_random;
            frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 439;
            tmp_format_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_3,
                mod_consts[99],
                PyTuple_GET_ITEM(mod_consts[100], 0)
            );

            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_1 = "ocooooboooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[101];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_1 = "ocooooboooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_9 = PyUnicode_Join(mod_consts[102], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 439;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_9};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_tmp_filename;
            var_tmp_filename = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[103]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_tmp_filename);
        tmp_args_element_value_10 = var_tmp_filename;
        if (var_flags == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 442;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_11 = var_flags;
        if (var_perm == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 442;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_5;
        }

        tmp_cmp_expr_left_7 = var_perm;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_args_element_value_12 = mod_consts[106];
        goto condexpr_end_1;
        condexpr_false_1:;
        if (var_perm == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 442;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_12 = var_perm;
        condexpr_end_1:;
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 442;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_5;
        }
        assert(var_fd == NULL);
        var_fd = tmp_assign_source_10;
    }
    goto try_end_3;
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

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_4c8562a60f2b8da4a1cd9a9138fde345, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_4c8562a60f2b8da4a1cd9a9138fde345, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_8 = PyExc_OSError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_11;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_12;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_17;
        int tmp_truth_name_1;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_20;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_e);
        tmp_expression_value_10 = var_e;
        tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[85]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        if (var_errno == NULL) {
            Py_DECREF(tmp_cmp_expr_left_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 445;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_11 = var_errno;
        tmp_cmp_expr_right_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[107]);
        if (tmp_cmp_expr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_9);

            exception_lineno = 445;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        Py_DECREF(tmp_cmp_expr_right_9);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 445;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        assert(tmp_or_left_value_1 != NUITKA_BOOL_UNASSIGNED);
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[10]);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_cmp_expr_right_10 = mod_consts[108];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 446;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        assert(tmp_and_left_value_1 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_e);
        tmp_expression_value_13 = var_e;
        tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[85]);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        if (var_errno == NULL) {
            Py_DECREF(tmp_cmp_expr_left_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 447;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_14 = var_errno;
        tmp_cmp_expr_right_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[109]);
        if (tmp_cmp_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_11);

            exception_lineno = 447;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        Py_DECREF(tmp_cmp_expr_right_11);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 447;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        assert(tmp_and_left_value_2 != NUITKA_BOOL_UNASSIGNED);
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[94]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[110]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_e);
        tmp_expression_value_17 = var_e;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[97]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 448;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 448;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 448;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_and_left_value_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[111]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_e);
        tmp_expression_value_19 = var_e;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[97]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 449;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 449;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[112]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 449;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 449;
            type_description_1 = "ocooooboooooooo";
            goto try_except_handler_7;
        }
        tmp_and_right_value_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_condition_result_13 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_13 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        assert(tmp_condition_result_13 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_12:;
    goto try_continue_handler_7;
    branch_no_12:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 452;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame) frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocooooboooooooo";
    goto try_except_handler_7;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // try continue handler code:
    try_continue_handler_7:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto try_continue_handler_6;
    // End of try:
    goto branch_end_11;
    branch_no_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 441;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame) frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocooooboooooooo";
    goto try_except_handler_6;
    branch_end_11:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // try continue handler code:
    try_continue_handler_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto loop_start_1;
    // End of try:
    // End of try:
    try_end_3:;
    goto loop_end_1;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 436;
        type_description_1 = "ocooooboooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        if (var_perm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 454;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_12 = var_perm;
        tmp_cmp_expr_right_12 = Py_None;
        tmp_condition_result_14 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[113]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tmp_filename);
        tmp_args_element_value_16 = var_tmp_filename;
        if (var_perm == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 455;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_17 = var_perm;
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 455;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_13:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fd);
        tmp_args_element_value_18 = var_fd;
        CHECK_OBJECT(Nuitka_Cell_GET(par_mode));
        tmp_args_element_value_19 = Nuitka_Cell_GET(par_mode);
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_20 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_args_element_value_21 = par_errors;
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 457;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_12, call_args);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_f);
        tmp_args_element_value_22 = var_f;
        CHECK_OBJECT(var_tmp_filename);
        tmp_args_element_value_23 = var_tmp_filename;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[94]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[115]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        if (par_filename == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 458;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_25 = par_filename;
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 458;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_14);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 458;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_args_element_value_24);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_af == NULL);
        var_af = tmp_assign_source_13;
    }
    {
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_27;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_24 == NULL));
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[18]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_25 == NULL));
        tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[116]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 459;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_af);
        tmp_args_element_value_27 = var_af;
        frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_tuple_element_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ocooooboooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_7);
        tmp_tuple_element_7 = Py_True;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_7);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c8562a60f2b8da4a1cd9a9138fde345);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c8562a60f2b8da4a1cd9a9138fde345);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c8562a60f2b8da4a1cd9a9138fde345);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c8562a60f2b8da4a1cd9a9138fde345, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c8562a60f2b8da4a1cd9a9138fde345->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c8562a60f2b8da4a1cd9a9138fde345, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c8562a60f2b8da4a1cd9a9138fde345,
        type_description_1,
        par_filename,
        par_mode,
        par_encoding,
        par_errors,
        par_atomic,
        var_perm,
        (int)var_binary,
        var_errno,
        var_random,
        var_flags,
        var_tmp_filename,
        var_fd,
        var_e,
        var_f,
        var_af
    );


    // Release cached frame if used for exception.
    if (frame_4c8562a60f2b8da4a1cd9a9138fde345 == cache_frame_4c8562a60f2b8da4a1cd9a9138fde345) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4c8562a60f2b8da4a1cd9a9138fde345);
        cache_frame_4c8562a60f2b8da4a1cd9a9138fde345 = NULL;
    }

    assertFrameObject(frame_4c8562a60f2b8da4a1cd9a9138fde345);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_perm);
    var_perm = NULL;
    assert(var_binary != NUITKA_BOOL_UNASSIGNED);
    var_binary = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_errno);
    var_errno = NULL;
    Py_XDECREF(var_random);
    var_random = NULL;
    Py_XDECREF(var_flags);
    var_flags = NULL;
    Py_XDECREF(var_tmp_filename);
    var_tmp_filename = NULL;
    Py_XDECREF(var_fd);
    var_fd = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_af);
    var_af = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_perm);
    var_perm = NULL;
    var_binary = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_errno);
    var_errno = NULL;
    Py_XDECREF(var_random);
    var_random = NULL;
    Py_XDECREF(var_flags);
    var_flags = NULL;
    Py_XDECREF(var_tmp_filename);
    var_tmp_filename = NULL;
    Py_XDECREF(var_fd);
    var_fd = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_af);
    var_af = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    CHECK_OBJECT(par_atomic);
    Py_DECREF(par_atomic);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    CHECK_OBJECT(par_atomic);
    Py_DECREF(par_atomic);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct click$_compat$$$function__31_open_stream$$$genexpr__1_genexpr_locals {
    PyObject *var_m;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *click$_compat$$$function__31_open_stream$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct click$_compat$$$function__31_open_stream$$$genexpr__1_genexpr_locals *generator_heap = (struct click$_compat$$$function__31_open_stream$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_m = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_85afcf247299ea445e9b4ca4b08c2596, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 394;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_m;
            generator_heap->var_m = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_m);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_m);
        tmp_cmp_expr_left_1 = generator_heap->var_m;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[117]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 394;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 394;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 394;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 394;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_m,
            generator->m_closure[1]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_m);
    generator_heap->var_m = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_m);
    generator_heap->var_m = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_click$_compat$$$function__31_open_stream$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        click$_compat$$$function__31_open_stream$$$genexpr__1_genexpr_context,
        module_click$_compat,
        mod_consts[118],
#if PYTHON_VERSION >= 0x350
        mod_consts[119],
#endif
        codeobj_85afcf247299ea445e9b4ca4b08c2596,
        closure,
        2,
        sizeof(struct click$_compat$$$function__31_open_stream$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_click$_compat$$$function__32___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_f = python_pars[1];
    PyObject *par_tmp_filename = python_pars[2];
    PyObject *par_real_filename = python_pars[3];
    struct Nuitka_FrameObject *frame_7d586151ebbf1efb5c296a398674b39d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d586151ebbf1efb5c296a398674b39d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d586151ebbf1efb5c296a398674b39d)) {
        Py_XDECREF(cache_frame_7d586151ebbf1efb5c296a398674b39d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d586151ebbf1efb5c296a398674b39d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d586151ebbf1efb5c296a398674b39d = MAKE_FUNCTION_FRAME(codeobj_7d586151ebbf1efb5c296a398674b39d, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7d586151ebbf1efb5c296a398674b39d->m_type_description == NULL);
    frame_7d586151ebbf1efb5c296a398674b39d = cache_frame_7d586151ebbf1efb5c296a398674b39d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7d586151ebbf1efb5c296a398674b39d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7d586151ebbf1efb5c296a398674b39d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_f);
        tmp_assattr_value_1 = par_f;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[120], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_tmp_filename);
        tmp_assattr_value_2 = par_tmp_filename;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[121], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_real_filename);
        tmp_assattr_value_3 = par_real_filename;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[122], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[123], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d586151ebbf1efb5c296a398674b39d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d586151ebbf1efb5c296a398674b39d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d586151ebbf1efb5c296a398674b39d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d586151ebbf1efb5c296a398674b39d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d586151ebbf1efb5c296a398674b39d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d586151ebbf1efb5c296a398674b39d,
        type_description_1,
        par_self,
        par_f,
        par_tmp_filename,
        par_real_filename
    );


    // Release cached frame if used for exception.
    if (frame_7d586151ebbf1efb5c296a398674b39d == cache_frame_7d586151ebbf1efb5c296a398674b39d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7d586151ebbf1efb5c296a398674b39d);
        cache_frame_7d586151ebbf1efb5c296a398674b39d = NULL;
    }

    assertFrameObject(frame_7d586151ebbf1efb5c296a398674b39d);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_tmp_filename);
    Py_DECREF(par_tmp_filename);
    CHECK_OBJECT(par_real_filename);
    Py_DECREF(par_real_filename);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_tmp_filename);
    Py_DECREF(par_tmp_filename);
    CHECK_OBJECT(par_real_filename);
    Py_DECREF(par_real_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__33_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1d7528274dc63570c6cf5bb7af351aab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1d7528274dc63570c6cf5bb7af351aab = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1d7528274dc63570c6cf5bb7af351aab)) {
        Py_XDECREF(cache_frame_1d7528274dc63570c6cf5bb7af351aab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d7528274dc63570c6cf5bb7af351aab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d7528274dc63570c6cf5bb7af351aab = MAKE_FUNCTION_FRAME(codeobj_1d7528274dc63570c6cf5bb7af351aab, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1d7528274dc63570c6cf5bb7af351aab->m_type_description == NULL);
    frame_1d7528274dc63570c6cf5bb7af351aab = cache_frame_1d7528274dc63570c6cf5bb7af351aab;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1d7528274dc63570c6cf5bb7af351aab);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1d7528274dc63570c6cf5bb7af351aab) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[122]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1d7528274dc63570c6cf5bb7af351aab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1d7528274dc63570c6cf5bb7af351aab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1d7528274dc63570c6cf5bb7af351aab);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1d7528274dc63570c6cf5bb7af351aab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d7528274dc63570c6cf5bb7af351aab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d7528274dc63570c6cf5bb7af351aab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d7528274dc63570c6cf5bb7af351aab,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1d7528274dc63570c6cf5bb7af351aab == cache_frame_1d7528274dc63570c6cf5bb7af351aab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1d7528274dc63570c6cf5bb7af351aab);
        cache_frame_1d7528274dc63570c6cf5bb7af351aab = NULL;
    }

    assertFrameObject(frame_1d7528274dc63570c6cf5bb7af351aab);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__34_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_delete = python_pars[1];
    struct Nuitka_FrameObject *frame_7f9638378e922dcde00dc06e4f748498;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7f9638378e922dcde00dc06e4f748498 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f9638378e922dcde00dc06e4f748498)) {
        Py_XDECREF(cache_frame_7f9638378e922dcde00dc06e4f748498);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f9638378e922dcde00dc06e4f748498 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f9638378e922dcde00dc06e4f748498 = MAKE_FUNCTION_FRAME(codeobj_7f9638378e922dcde00dc06e4f748498, module_click$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7f9638378e922dcde00dc06e4f748498->m_type_description == NULL);
    frame_7f9638378e922dcde00dc06e4f748498 = cache_frame_7f9638378e922dcde00dc06e4f748498;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7f9638378e922dcde00dc06e4f748498);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7f9638378e922dcde00dc06e4f748498) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[123]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 474;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[120]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7f9638378e922dcde00dc06e4f748498->m_frame.f_lineno = 476;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[124]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[121]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 477;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[122]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 477;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7f9638378e922dcde00dc06e4f748498->m_frame.f_lineno = 477;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[123], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f9638378e922dcde00dc06e4f748498);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f9638378e922dcde00dc06e4f748498);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f9638378e922dcde00dc06e4f748498);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f9638378e922dcde00dc06e4f748498, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f9638378e922dcde00dc06e4f748498->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f9638378e922dcde00dc06e4f748498, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f9638378e922dcde00dc06e4f748498,
        type_description_1,
        par_self,
        par_delete
    );


    // Release cached frame if used for exception.
    if (frame_7f9638378e922dcde00dc06e4f748498 == cache_frame_7f9638378e922dcde00dc06e4f748498) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7f9638378e922dcde00dc06e4f748498);
        cache_frame_7f9638378e922dcde00dc06e4f748498 = NULL;
    }

    assertFrameObject(frame_7f9638378e922dcde00dc06e4f748498);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_delete);
    Py_DECREF(par_delete);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_delete);
    Py_DECREF(par_delete);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__35___getattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_f3d0ade73b78fdc407335895c1758a75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f3d0ade73b78fdc407335895c1758a75 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f3d0ade73b78fdc407335895c1758a75)) {
        Py_XDECREF(cache_frame_f3d0ade73b78fdc407335895c1758a75);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3d0ade73b78fdc407335895c1758a75 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3d0ade73b78fdc407335895c1758a75 = MAKE_FUNCTION_FRAME(codeobj_f3d0ade73b78fdc407335895c1758a75, module_click$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f3d0ade73b78fdc407335895c1758a75->m_type_description == NULL);
    frame_f3d0ade73b78fdc407335895c1758a75 = cache_frame_f3d0ade73b78fdc407335895c1758a75;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f3d0ade73b78fdc407335895c1758a75);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f3d0ade73b78fdc407335895c1758a75) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[120]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_getattr_attr_1 = par_name;
        tmp_return_value = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f3d0ade73b78fdc407335895c1758a75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f3d0ade73b78fdc407335895c1758a75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f3d0ade73b78fdc407335895c1758a75);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f3d0ade73b78fdc407335895c1758a75, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3d0ade73b78fdc407335895c1758a75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3d0ade73b78fdc407335895c1758a75, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3d0ade73b78fdc407335895c1758a75,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_f3d0ade73b78fdc407335895c1758a75 == cache_frame_f3d0ade73b78fdc407335895c1758a75) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f3d0ade73b78fdc407335895c1758a75);
        cache_frame_f3d0ade73b78fdc407335895c1758a75 = NULL;
    }

    assertFrameObject(frame_f3d0ade73b78fdc407335895c1758a75);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__36___enter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__37___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_value = python_pars[2];
    PyObject *par_tb = python_pars[3];
    struct Nuitka_FrameObject *frame_271c38511da380f8e83c7708db47327b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_271c38511da380f8e83c7708db47327b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_271c38511da380f8e83c7708db47327b)) {
        Py_XDECREF(cache_frame_271c38511da380f8e83c7708db47327b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_271c38511da380f8e83c7708db47327b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_271c38511da380f8e83c7708db47327b = MAKE_FUNCTION_FRAME(codeobj_271c38511da380f8e83c7708db47327b, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_271c38511da380f8e83c7708db47327b->m_type_description == NULL);
    frame_271c38511da380f8e83c7708db47327b = cache_frame_271c38511da380f8e83c7708db47327b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_271c38511da380f8e83c7708db47327b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_271c38511da380f8e83c7708db47327b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[124]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exc_type);
        tmp_cmp_expr_left_1 = par_exc_type;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_kw_call_value_0_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        frame_271c38511da380f8e83c7708db47327b->m_frame.f_lineno = 487;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[125]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_271c38511da380f8e83c7708db47327b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_271c38511da380f8e83c7708db47327b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_271c38511da380f8e83c7708db47327b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_271c38511da380f8e83c7708db47327b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_271c38511da380f8e83c7708db47327b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_271c38511da380f8e83c7708db47327b,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_value,
        par_tb
    );


    // Release cached frame if used for exception.
    if (frame_271c38511da380f8e83c7708db47327b == cache_frame_271c38511da380f8e83c7708db47327b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_271c38511da380f8e83c7708db47327b);
        cache_frame_271c38511da380f8e83c7708db47327b = NULL;
    }

    assertFrameObject(frame_271c38511da380f8e83c7708db47327b);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    CHECK_OBJECT(par_tb);
    Py_DECREF(par_tb);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    CHECK_OBJECT(par_tb);
    Py_DECREF(par_tb);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__38___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05)) {
        Py_XDECREF(cache_frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05 = MAKE_FUNCTION_FRAME(codeobj_cf5bcd2a6fcf7d0ed2a085cdb0631d05, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05->m_type_description == NULL);
    frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05 = cache_frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[120]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05 == cache_frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05);
        cache_frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05 = NULL;
    }

    assertFrameObject(frame_cf5bcd2a6fcf7d0ed2a085cdb0631d05);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__39_strip_ansi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_43c3212ede3b504b58243d9778ec8741;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_43c3212ede3b504b58243d9778ec8741 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_43c3212ede3b504b58243d9778ec8741)) {
        Py_XDECREF(cache_frame_43c3212ede3b504b58243d9778ec8741);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43c3212ede3b504b58243d9778ec8741 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43c3212ede3b504b58243d9778ec8741 = MAKE_FUNCTION_FRAME(codeobj_43c3212ede3b504b58243d9778ec8741, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_43c3212ede3b504b58243d9778ec8741->m_type_description == NULL);
    frame_43c3212ede3b504b58243d9778ec8741 = cache_frame_43c3212ede3b504b58243d9778ec8741;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_43c3212ede3b504b58243d9778ec8741);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_43c3212ede3b504b58243d9778ec8741) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[102];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_43c3212ede3b504b58243d9778ec8741->m_frame.f_lineno = 494;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[127],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_43c3212ede3b504b58243d9778ec8741);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_43c3212ede3b504b58243d9778ec8741);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_43c3212ede3b504b58243d9778ec8741);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_43c3212ede3b504b58243d9778ec8741, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43c3212ede3b504b58243d9778ec8741->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43c3212ede3b504b58243d9778ec8741, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43c3212ede3b504b58243d9778ec8741,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_43c3212ede3b504b58243d9778ec8741 == cache_frame_43c3212ede3b504b58243d9778ec8741) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_43c3212ede3b504b58243d9778ec8741);
        cache_frame_43c3212ede3b504b58243d9778ec8741 = NULL;
    }

    assertFrameObject(frame_43c3212ede3b504b58243d9778ec8741);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__40__is_jupyter_kernel_output(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    struct Nuitka_FrameObject *frame_936288a2ef085159927bec5ceec021a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_936288a2ef085159927bec5ceec021a2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_936288a2ef085159927bec5ceec021a2)) {
        Py_XDECREF(cache_frame_936288a2ef085159927bec5ceec021a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_936288a2ef085159927bec5ceec021a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_936288a2ef085159927bec5ceec021a2 = MAKE_FUNCTION_FRAME(codeobj_936288a2ef085159927bec5ceec021a2, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_936288a2ef085159927bec5ceec021a2->m_type_description == NULL);
    frame_936288a2ef085159927bec5ceec021a2 = cache_frame_936288a2ef085159927bec5ceec021a2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_936288a2ef085159927bec5ceec021a2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_936288a2ef085159927bec5ceec021a2) == 2); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        if (par_stream == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 498;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = par_stream;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_cls_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (par_stream == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 499;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = par_stream;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_stream;
            par_stream = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 498;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        if (par_stream == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 501;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_stream;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[128]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[129]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_936288a2ef085159927bec5ceec021a2->m_frame.f_lineno = 501;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[130]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_936288a2ef085159927bec5ceec021a2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_936288a2ef085159927bec5ceec021a2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_936288a2ef085159927bec5ceec021a2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_936288a2ef085159927bec5ceec021a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_936288a2ef085159927bec5ceec021a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_936288a2ef085159927bec5ceec021a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_936288a2ef085159927bec5ceec021a2,
        type_description_1,
        par_stream
    );


    // Release cached frame if used for exception.
    if (frame_936288a2ef085159927bec5ceec021a2 == cache_frame_936288a2ef085159927bec5ceec021a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_936288a2ef085159927bec5ceec021a2);
        cache_frame_936288a2ef085159927bec5ceec021a2 = NULL;
    }

    assertFrameObject(frame_936288a2ef085159927bec5ceec021a2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_stream);
    par_stream = NULL;
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

    Py_XDECREF(par_stream);
    par_stream = NULL;
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


static PyObject *impl_click$_compat$$$function__41_should_strip_ansi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *par_color = python_pars[1];
    struct Nuitka_FrameObject *frame_2ac884af71fe44f966c2fc5397283b96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2ac884af71fe44f966c2fc5397283b96 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2ac884af71fe44f966c2fc5397283b96)) {
        Py_XDECREF(cache_frame_2ac884af71fe44f966c2fc5397283b96);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2ac884af71fe44f966c2fc5397283b96 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2ac884af71fe44f966c2fc5397283b96 = MAKE_FUNCTION_FRAME(codeobj_2ac884af71fe44f966c2fc5397283b96, module_click$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2ac884af71fe44f966c2fc5397283b96->m_type_description == NULL);
    frame_2ac884af71fe44f966c2fc5397283b96 = cache_frame_2ac884af71fe44f966c2fc5397283b96;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2ac884af71fe44f966c2fc5397283b96);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2ac884af71fe44f966c2fc5397283b96) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_color);
        tmp_cmp_expr_left_1 = par_color;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_stream);
        tmp_cmp_expr_left_2 = par_stream;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[58]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_stream;
            assert(old != NULL);
            par_stream = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream);
        tmp_args_element_value_1 = par_stream;
        frame_2ac884af71fe44f966c2fc5397283b96->m_frame.f_lineno = 510;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream);
        tmp_args_element_value_2 = par_stream;
        frame_2ac884af71fe44f966c2fc5397283b96->m_frame.f_lineno = 510;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(par_color);
        tmp_operand_value_3 = par_color;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2ac884af71fe44f966c2fc5397283b96);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2ac884af71fe44f966c2fc5397283b96);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2ac884af71fe44f966c2fc5397283b96);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2ac884af71fe44f966c2fc5397283b96, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ac884af71fe44f966c2fc5397283b96->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ac884af71fe44f966c2fc5397283b96, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2ac884af71fe44f966c2fc5397283b96,
        type_description_1,
        par_stream,
        par_color
    );


    // Release cached frame if used for exception.
    if (frame_2ac884af71fe44f966c2fc5397283b96 == cache_frame_2ac884af71fe44f966c2fc5397283b96) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2ac884af71fe44f966c2fc5397283b96);
        cache_frame_2ac884af71fe44f966c2fc5397283b96 = NULL;
    }

    assertFrameObject(frame_2ac884af71fe44f966c2fc5397283b96);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_stream);
    par_stream = NULL;
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

    Py_XDECREF(par_stream);
    par_stream = NULL;
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
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__44__get_argv_encoding(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b2bb960061c906b2353ad4aa95fd4dd6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b2bb960061c906b2353ad4aa95fd4dd6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b2bb960061c906b2353ad4aa95fd4dd6)) {
        Py_XDECREF(cache_frame_b2bb960061c906b2353ad4aa95fd4dd6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2bb960061c906b2353ad4aa95fd4dd6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2bb960061c906b2353ad4aa95fd4dd6 = MAKE_FUNCTION_FRAME(codeobj_b2bb960061c906b2353ad4aa95fd4dd6, module_click$_compat, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b2bb960061c906b2353ad4aa95fd4dd6->m_type_description == NULL);
    frame_b2bb960061c906b2353ad4aa95fd4dd6 = cache_frame_b2bb960061c906b2353ad4aa95fd4dd6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b2bb960061c906b2353ad4aa95fd4dd6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b2bb960061c906b2353ad4aa95fd4dd6) == 2); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_called_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[58]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;

            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_1 = mod_consts[13];
        tmp_getattr_default_1 = Py_None;
        tmp_or_left_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;

            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 567;

            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;

            goto frame_exception_exit_1;
        }
        frame_b2bb960061c906b2353ad4aa95fd4dd6->m_frame.f_lineno = 567;
        tmp_or_right_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;

            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b2bb960061c906b2353ad4aa95fd4dd6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b2bb960061c906b2353ad4aa95fd4dd6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b2bb960061c906b2353ad4aa95fd4dd6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b2bb960061c906b2353ad4aa95fd4dd6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2bb960061c906b2353ad4aa95fd4dd6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2bb960061c906b2353ad4aa95fd4dd6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2bb960061c906b2353ad4aa95fd4dd6,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b2bb960061c906b2353ad4aa95fd4dd6 == cache_frame_b2bb960061c906b2353ad4aa95fd4dd6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b2bb960061c906b2353ad4aa95fd4dd6);
        cache_frame_b2bb960061c906b2353ad4aa95fd4dd6 = NULL;
    }

    assertFrameObject(frame_b2bb960061c906b2353ad4aa95fd4dd6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

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


static PyObject *impl_click$_compat$$$function__46_term_len(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_cd39b1cc253a4add608c44baedee738f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cd39b1cc253a4add608c44baedee738f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cd39b1cc253a4add608c44baedee738f)) {
        Py_XDECREF(cache_frame_cd39b1cc253a4add608c44baedee738f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cd39b1cc253a4add608c44baedee738f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cd39b1cc253a4add608c44baedee738f = MAKE_FUNCTION_FRAME(codeobj_cd39b1cc253a4add608c44baedee738f, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cd39b1cc253a4add608c44baedee738f->m_type_description == NULL);
    frame_cd39b1cc253a4add608c44baedee738f = cache_frame_cd39b1cc253a4add608c44baedee738f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cd39b1cc253a4add608c44baedee738f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cd39b1cc253a4add608c44baedee738f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_cd39b1cc253a4add608c44baedee738f->m_frame.f_lineno = 576;
        tmp_len_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cd39b1cc253a4add608c44baedee738f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cd39b1cc253a4add608c44baedee738f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cd39b1cc253a4add608c44baedee738f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cd39b1cc253a4add608c44baedee738f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd39b1cc253a4add608c44baedee738f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd39b1cc253a4add608c44baedee738f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cd39b1cc253a4add608c44baedee738f,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_cd39b1cc253a4add608c44baedee738f == cache_frame_cd39b1cc253a4add608c44baedee738f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cd39b1cc253a4add608c44baedee738f);
        cache_frame_cd39b1cc253a4add608c44baedee738f = NULL;
    }

    assertFrameObject(frame_cd39b1cc253a4add608c44baedee738f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

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


static PyObject *impl_click$_compat$$$function__47_isatty(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    struct Nuitka_FrameObject *frame_40ec9a9dbc628125a73dc8fbcd2106cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_40ec9a9dbc628125a73dc8fbcd2106cc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_40ec9a9dbc628125a73dc8fbcd2106cc)) {
        Py_XDECREF(cache_frame_40ec9a9dbc628125a73dc8fbcd2106cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_40ec9a9dbc628125a73dc8fbcd2106cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_40ec9a9dbc628125a73dc8fbcd2106cc = MAKE_FUNCTION_FRAME(codeobj_40ec9a9dbc628125a73dc8fbcd2106cc, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_40ec9a9dbc628125a73dc8fbcd2106cc->m_type_description == NULL);
    frame_40ec9a9dbc628125a73dc8fbcd2106cc = cache_frame_40ec9a9dbc628125a73dc8fbcd2106cc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_40ec9a9dbc628125a73dc8fbcd2106cc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_40ec9a9dbc628125a73dc8fbcd2106cc) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_stream);
        tmp_called_instance_1 = par_stream;
        frame_40ec9a9dbc628125a73dc8fbcd2106cc->m_frame.f_lineno = 581;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[25]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_40ec9a9dbc628125a73dc8fbcd2106cc, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_40ec9a9dbc628125a73dc8fbcd2106cc, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 580;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_40ec9a9dbc628125a73dc8fbcd2106cc->m_frame) frame_40ec9a9dbc628125a73dc8fbcd2106cc->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_40ec9a9dbc628125a73dc8fbcd2106cc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_40ec9a9dbc628125a73dc8fbcd2106cc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_40ec9a9dbc628125a73dc8fbcd2106cc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_40ec9a9dbc628125a73dc8fbcd2106cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_40ec9a9dbc628125a73dc8fbcd2106cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_40ec9a9dbc628125a73dc8fbcd2106cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_40ec9a9dbc628125a73dc8fbcd2106cc,
        type_description_1,
        par_stream
    );


    // Release cached frame if used for exception.
    if (frame_40ec9a9dbc628125a73dc8fbcd2106cc == cache_frame_40ec9a9dbc628125a73dc8fbcd2106cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_40ec9a9dbc628125a73dc8fbcd2106cc);
        cache_frame_40ec9a9dbc628125a73dc8fbcd2106cc = NULL;
    }

    assertFrameObject(frame_40ec9a9dbc628125a73dc8fbcd2106cc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__48__make_cached_stream_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_src_func = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_wrapper_func = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *var_cache = Nuitka_Cell_Empty();
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_099de618e2033a4d9c9bd91719d2b3a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_099de618e2033a4d9c9bd91719d2b3a0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_099de618e2033a4d9c9bd91719d2b3a0)) {
        Py_XDECREF(cache_frame_099de618e2033a4d9c9bd91719d2b3a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_099de618e2033a4d9c9bd91719d2b3a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_099de618e2033a4d9c9bd91719d2b3a0 = MAKE_FUNCTION_FRAME(codeobj_099de618e2033a4d9c9bd91719d2b3a0, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_099de618e2033a4d9c9bd91719d2b3a0->m_type_description == NULL);
    frame_099de618e2033a4d9c9bd91719d2b3a0 = cache_frame_099de618e2033a4d9c9bd91719d2b3a0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_099de618e2033a4d9c9bd91719d2b3a0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_099de618e2033a4d9c9bd91719d2b3a0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        frame_099de618e2033a4d9c9bd91719d2b3a0->m_frame.f_lineno = 589;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_cache) == NULL);
        PyCell_SET(var_cache, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        struct Nuitka_CellObject *tmp_closure_1[3];
        tmp_dict_key_1 = mod_consts[135];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));

        tmp_closure_1[0] = var_cache;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_src_func;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_wrapper_func;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_2 = MAKE_FUNCTION_click$_compat$$$function__48__make_cached_stream_func$$$function__1_func(tmp_annotations_1, tmp_closure_1);

        assert(var_func == NULL);
        var_func = tmp_assign_source_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_099de618e2033a4d9c9bd91719d2b3a0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_099de618e2033a4d9c9bd91719d2b3a0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_099de618e2033a4d9c9bd91719d2b3a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_099de618e2033a4d9c9bd91719d2b3a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_099de618e2033a4d9c9bd91719d2b3a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_099de618e2033a4d9c9bd91719d2b3a0,
        type_description_1,
        par_src_func,
        par_wrapper_func,
        var_cache,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_099de618e2033a4d9c9bd91719d2b3a0 == cache_frame_099de618e2033a4d9c9bd91719d2b3a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_099de618e2033a4d9c9bd91719d2b3a0);
        cache_frame_099de618e2033a4d9c9bd91719d2b3a0 = NULL;
    }

    assertFrameObject(frame_099de618e2033a4d9c9bd91719d2b3a0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_func);
    tmp_return_value = var_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cache);
    Py_DECREF(var_cache);
    var_cache = NULL;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
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

    CHECK_OBJECT(var_cache);
    Py_DECREF(var_cache);
    var_cache = NULL;
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
    CHECK_OBJECT(par_src_func);
    Py_DECREF(par_src_func);
    CHECK_OBJECT(par_wrapper_func);
    Py_DECREF(par_wrapper_func);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_src_func);
    Py_DECREF(par_src_func);
    CHECK_OBJECT(par_wrapper_func);
    Py_DECREF(par_wrapper_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__48__make_cached_stream_func$$$function__1_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_stream = NULL;
    PyObject *var_rv = NULL;
    struct Nuitka_FrameObject *frame_69fe9d814914c157bfafbd9a5571e994;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_69fe9d814914c157bfafbd9a5571e994 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_69fe9d814914c157bfafbd9a5571e994)) {
        Py_XDECREF(cache_frame_69fe9d814914c157bfafbd9a5571e994);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69fe9d814914c157bfafbd9a5571e994 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69fe9d814914c157bfafbd9a5571e994 = MAKE_FUNCTION_FRAME(codeobj_69fe9d814914c157bfafbd9a5571e994, module_click$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_69fe9d814914c157bfafbd9a5571e994->m_type_description == NULL);
    frame_69fe9d814914c157bfafbd9a5571e994 = cache_frame_69fe9d814914c157bfafbd9a5571e994;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_69fe9d814914c157bfafbd9a5571e994);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_69fe9d814914c157bfafbd9a5571e994) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[138]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 592;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_69fe9d814914c157bfafbd9a5571e994->m_frame.f_lineno = 592;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        assert(var_stream == NULL);
        var_stream = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 594;
            type_description_1 = "ooccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[140]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "ooccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_stream);
        tmp_args_element_value_1 = var_stream;
        frame_69fe9d814914c157bfafbd9a5571e994->m_frame.f_lineno = 594;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "ooccc";
            goto try_except_handler_2;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_2;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_69fe9d814914c157bfafbd9a5571e994, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_69fe9d814914c157bfafbd9a5571e994, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        assert(var_rv == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_rv = tmp_assign_source_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 593;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_69fe9d814914c157bfafbd9a5571e994->m_frame) frame_69fe9d814914c157bfafbd9a5571e994->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooccc";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_rv == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 597;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_rv;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    if (var_rv == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 598;
        type_description_1 = "ooccc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_rv;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[142]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 599;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_69fe9d814914c157bfafbd9a5571e994->m_frame.f_lineno = 599;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rv;
            var_rv = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_rv);
        tmp_ass_subvalue_1 = var_rv;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 601;
            type_description_1 = "ooccc";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_stream);
        tmp_ass_subscript_1 = var_stream;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "ooccc";
            goto try_except_handler_4;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_69fe9d814914c157bfafbd9a5571e994, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_69fe9d814914c157bfafbd9a5571e994, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 600;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_69fe9d814914c157bfafbd9a5571e994->m_frame) frame_69fe9d814914c157bfafbd9a5571e994->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooccc";
    goto try_except_handler_5;
    branch_no_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_69fe9d814914c157bfafbd9a5571e994);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_69fe9d814914c157bfafbd9a5571e994);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_69fe9d814914c157bfafbd9a5571e994);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_69fe9d814914c157bfafbd9a5571e994, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69fe9d814914c157bfafbd9a5571e994->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69fe9d814914c157bfafbd9a5571e994, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69fe9d814914c157bfafbd9a5571e994,
        type_description_1,
        var_stream,
        var_rv,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_69fe9d814914c157bfafbd9a5571e994 == cache_frame_69fe9d814914c157bfafbd9a5571e994) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_69fe9d814914c157bfafbd9a5571e994);
        cache_frame_69fe9d814914c157bfafbd9a5571e994 = NULL;
    }

    assertFrameObject(frame_69fe9d814914c157bfafbd9a5571e994);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_rv);
    tmp_return_value = var_rv;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_stream);
    Py_DECREF(var_stream);
    var_stream = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
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

    Py_XDECREF(var_stream);
    var_stream = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
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


static PyObject *impl_click$_compat$$$function__49_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_c49d21da5ee845a5dfd9c75846da343a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c49d21da5ee845a5dfd9c75846da343a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c49d21da5ee845a5dfd9c75846da343a)) {
        Py_XDECREF(cache_frame_c49d21da5ee845a5dfd9c75846da343a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c49d21da5ee845a5dfd9c75846da343a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c49d21da5ee845a5dfd9c75846da343a = MAKE_FUNCTION_FRAME(codeobj_c49d21da5ee845a5dfd9c75846da343a, module_click$_compat, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c49d21da5ee845a5dfd9c75846da343a->m_type_description == NULL);
    frame_c49d21da5ee845a5dfd9c75846da343a = cache_frame_c49d21da5ee845a5dfd9c75846da343a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c49d21da5ee845a5dfd9c75846da343a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c49d21da5ee845a5dfd9c75846da343a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[58]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c49d21da5ee845a5dfd9c75846da343a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c49d21da5ee845a5dfd9c75846da343a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c49d21da5ee845a5dfd9c75846da343a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c49d21da5ee845a5dfd9c75846da343a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c49d21da5ee845a5dfd9c75846da343a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c49d21da5ee845a5dfd9c75846da343a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c49d21da5ee845a5dfd9c75846da343a,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_c49d21da5ee845a5dfd9c75846da343a == cache_frame_c49d21da5ee845a5dfd9c75846da343a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c49d21da5ee845a5dfd9c75846da343a);
        cache_frame_c49d21da5ee845a5dfd9c75846da343a = NULL;
    }

    assertFrameObject(frame_c49d21da5ee845a5dfd9c75846da343a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

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


static PyObject *impl_click$_compat$$$function__50_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = Nuitka_SysGetObject("stdout");
    assert(!(tmp_return_value == NULL));
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_compat$$$function__51_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = Nuitka_SysGetObject("stderr");
    assert(!(tmp_return_value == NULL));
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__10_read1(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__10_read1,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_b0da56b1abd525a0ca56ca8a4d7114b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__11_readable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__11_readable,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_627a15b1aabfa740dc60694391ff833f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__12_writable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__12_writable,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_1f7c5f1b2f55d6de58cc97e39ac41f58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__13_seekable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__13_seekable,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_12989bb78c2cf0f948390e3487366d93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__14__is_binary_reader(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__14__is_binary_reader,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f1182b7279c6850b775bb556aa679e2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__15__is_binary_writer(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__15__is_binary_writer,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5fae46354ee87fa5ad78a9f6a62c5f4f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__16__find_binary_reader(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__16__find_binary_reader,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_44e2e7a99476cdd07d4adba53ed07d41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__17__find_binary_writer(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__17__find_binary_writer,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6d539acb85d1b465d4dd857d4624e9d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__18__stream_is_misconfigured(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__18__stream_is_misconfigured,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_888533b379aecd0efc622e1bf6684576,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__19__is_compat_stream_attr(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__19__is_compat_stream_attr,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8f67f8b667dc4908bbf2129a88f129c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__1_get_filesystem_encoding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__1_get_filesystem_encoding,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a95ea4e745cc32de89fdbc2cd7c6a45c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__20__is_compatible_text_stream(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__20__is_compatible_text_stream,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_839f6bfddb3c38a4ba2bed42c14f2751,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__21__force_correct_text_stream(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__21__force_correct_text_stream,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_25e976fb761cf75424f863f1f20fb9d5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__22__force_correct_text_reader(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__22__force_correct_text_reader,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8b8fa78c2a12b3be52c5fa969be8aba8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__23__force_correct_text_writer(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__23__force_correct_text_writer,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_232786d4f90ea5f8d68987266fb1ad78,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__24_get_binary_stdin(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__24_get_binary_stdin,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e568ab18a890d60689fb922b1cd8137f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__25_get_binary_stdout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__25_get_binary_stdout,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bbdf411065ebeb249a600a28e5a8d1c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__26_get_binary_stderr(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__26_get_binary_stderr,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6dc4b1f7d7f86de07145d89a4f3551dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__27_get_text_stdin(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__27_get_text_stdin,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e836ee714dc5461c6b91b6f6449766d5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__28_get_text_stdout(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__28_get_text_stdout,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_526a0206ec30ef4826e5ea851642e2c0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__29_get_text_stderr(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__29_get_text_stderr,
        mod_consts[216],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ac4fc3a3ba06dffbda1ba0f43b5cb6e4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__2__make_text_stream(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__2__make_text_stream,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6f33e4a3092bf5b0f0cbaae0c2684e2d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__30__wrap_io_open(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__30__wrap_io_open,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c3d1eaf32ce4ae2a70ffa4e0060ca334,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__31_open_stream(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__31_open_stream,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4c8562a60f2b8da4a1cd9a9138fde345,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__32___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__32___init__,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[228],
#endif
        codeobj_7d586151ebbf1efb5c296a398674b39d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__33_name(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__33_name,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_1d7528274dc63570c6cf5bb7af351aab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__34_close(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__34_close,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[232],
#endif
        codeobj_7f9638378e922dcde00dc06e4f748498,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__35___getattr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__35___getattr__,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        mod_consts[233],
#endif
        codeobj_f3d0ade73b78fdc407335895c1758a75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__36___enter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__36___enter__,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        mod_consts[236],
#endif
        codeobj_1959372fce396a40e9acf23c67fd2aa8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__37___exit__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__37___exit__,
        mod_consts[237],
#if PYTHON_VERSION >= 0x300
        mod_consts[238],
#endif
        codeobj_271c38511da380f8e83c7708db47327b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__38___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__38___repr__,
        mod_consts[239],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_cf5bcd2a6fcf7d0ed2a085cdb0631d05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__39_strip_ansi(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__39_strip_ansi,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_43c3212ede3b504b58243d9778ec8741,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__3_is_ascii_encoding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__3_is_ascii_encoding,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_017b15537ccf59bf7a1284c3e9abe910,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__40__is_jupyter_kernel_output(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__40__is_jupyter_kernel_output,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_936288a2ef085159927bec5ceec021a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__41_should_strip_ansi(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__41_should_strip_ansi,
        mod_consts[243],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2ac884af71fe44f966c2fc5397283b96,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__44__get_argv_encoding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__44__get_argv_encoding,
        mod_consts[244],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b2bb960061c906b2353ad4aa95fd4dd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__45__get_windows_console_stream(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_750f5c8feaeaea57610211092329068e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__46_term_len(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__46_term_len,
        mod_consts[246],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cd39b1cc253a4add608c44baedee738f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__47_isatty(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__47_isatty,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_40ec9a9dbc628125a73dc8fbcd2106cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__48__make_cached_stream_func(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__48__make_cached_stream_func,
        mod_consts[247],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_099de618e2033a4d9c9bd91719d2b3a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__48__make_cached_stream_func$$$function__1_func(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__48__make_cached_stream_func$$$function__1_func,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_69fe9d814914c157bfafbd9a5571e994,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__49_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__49_lambda,
        mod_consts[248],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c49d21da5ee845a5dfd9c75846da343a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__4_get_best_encoding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__4_get_best_encoding,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_76a9dfe779a66021dacaba001f931148,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__50_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__50_lambda,
        mod_consts[248],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9ec1f01d6412484c57c4d048ac67c495,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__51_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__51_lambda,
        mod_consts[248],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0dc7b0a9946ba9a57bfb0264ad2a13a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__5___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__5___init__,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_2b202ed37fee0d6d0f6f24490cc0e481,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__6___del__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__6___del__,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_e4bc79138640ed56abb3f7f69e832301,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__7_isatty(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__7_isatty,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_f06c86e42cce539be41d6456bf4180f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__8___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__8___init__,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_cb76d13ec55b9e48c975b37a7a9ce8ae,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_compat$$$function__9___getattr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_compat$$$function__9___getattr__,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_fc24d00aa83455a3233e01523f031ec8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_compat,
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

function_impl_code functable_click$_compat[] = {
    impl_click$_compat$$$function__48__make_cached_stream_func$$$function__1_func,
    impl_click$_compat$$$function__1_get_filesystem_encoding,
    impl_click$_compat$$$function__2__make_text_stream,
    impl_click$_compat$$$function__3_is_ascii_encoding,
    impl_click$_compat$$$function__4_get_best_encoding,
    impl_click$_compat$$$function__5___init__,
    impl_click$_compat$$$function__6___del__,
    impl_click$_compat$$$function__7_isatty,
    impl_click$_compat$$$function__8___init__,
    impl_click$_compat$$$function__9___getattr__,
    impl_click$_compat$$$function__10_read1,
    impl_click$_compat$$$function__11_readable,
    impl_click$_compat$$$function__12_writable,
    impl_click$_compat$$$function__13_seekable,
    impl_click$_compat$$$function__14__is_binary_reader,
    impl_click$_compat$$$function__15__is_binary_writer,
    impl_click$_compat$$$function__16__find_binary_reader,
    impl_click$_compat$$$function__17__find_binary_writer,
    impl_click$_compat$$$function__18__stream_is_misconfigured,
    impl_click$_compat$$$function__19__is_compat_stream_attr,
    impl_click$_compat$$$function__20__is_compatible_text_stream,
    impl_click$_compat$$$function__21__force_correct_text_stream,
    impl_click$_compat$$$function__22__force_correct_text_reader,
    impl_click$_compat$$$function__23__force_correct_text_writer,
    impl_click$_compat$$$function__24_get_binary_stdin,
    impl_click$_compat$$$function__25_get_binary_stdout,
    impl_click$_compat$$$function__26_get_binary_stderr,
    impl_click$_compat$$$function__27_get_text_stdin,
    impl_click$_compat$$$function__28_get_text_stdout,
    impl_click$_compat$$$function__29_get_text_stderr,
    impl_click$_compat$$$function__30__wrap_io_open,
    impl_click$_compat$$$function__31_open_stream,
    impl_click$_compat$$$function__32___init__,
    impl_click$_compat$$$function__33_name,
    impl_click$_compat$$$function__34_close,
    impl_click$_compat$$$function__35___getattr__,
    impl_click$_compat$$$function__36___enter__,
    impl_click$_compat$$$function__37___exit__,
    impl_click$_compat$$$function__38___repr__,
    impl_click$_compat$$$function__39_strip_ansi,
    impl_click$_compat$$$function__40__is_jupyter_kernel_output,
    impl_click$_compat$$$function__41_should_strip_ansi,
    impl_click$_compat$$$function__44__get_argv_encoding,
    NULL,
    impl_click$_compat$$$function__46_term_len,
    impl_click$_compat$$$function__47_isatty,
    impl_click$_compat$$$function__48__make_cached_stream_func,
    impl_click$_compat$$$function__49_lambda,
    impl_click$_compat$$$function__50_lambda,
    impl_click$_compat$$$function__51_lambda,
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

    function_impl_code *current = functable_click$_compat;
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

    if (offset > sizeof(functable_click$_compat) || offset < 0) {
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
        functable_click$_compat[offset],
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
        module_click$_compat,
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
PyObject *modulecode_click$_compat(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("click._compat");

    // Store the module for future use.
    module_click$_compat = module;

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
        PRINT_STRING("click._compat: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("click._compat: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("click._compat: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initclick$_compat\n");

    moduledict_click$_compat = MODULE_DICT(module_click$_compat);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_click$_compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_click$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[102]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_click$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_click$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_click$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_click$_compat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_click$_compat);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    struct Nuitka_FrameObject *frame_47fde25b08e5c0a251bf29d7b9bc8683;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_607d7a116744842a4fb73112ac56c3e2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_607d7a116744842a4fb73112ac56c3e2_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_click$_compat$$$class__2__FixupStream_87 = NULL;
    struct Nuitka_FrameObject *frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_click$_compat$$$class__3__AtomicFile_462 = NULL;
    struct Nuitka_FrameObject *frame_c4ca0153088d8ce8aa9215be167acdf5_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c4ca0153088d8ce8aa9215be167acdf5_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[144];
        UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_47fde25b08e5c0a251bf29d7b9bc8683 = MAKE_MODULE_FRAME(codeobj_47fde25b08e5c0a251bf29d7b9bc8683, module_click$_compat);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_47fde25b08e5c0a251bf29d7b9bc8683);
    assert(Py_REFCNT(frame_47fde25b08e5c0a251bf29d7b9bc8683) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[144];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[147], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[148], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[8];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_compat;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[86];
        frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[151];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_click$_compat;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[86];
        frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 2;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[152];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_click$_compat;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[86];
        frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[153];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_click$_compat;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[154];
        tmp_level_value_4 = mod_consts[86];
        frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_click$_compat,
                mod_consts[134],
                mod_consts[86]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[134]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_False;
        UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_False;
        UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        tmp_cmp_expr_left_1 = mod_consts[157];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[158]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_cmp_expr_left_2 = mod_consts[159];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[158]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[140]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 12;
        tmp_cmp_expr_right_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[160]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_assign_source_14 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_14 = tmp_and_left_value_1;
        and_end_1:;
        UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_False;
        UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = Py_None;
        UPDATE_STRING_DICT0(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_16);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[164]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_4);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[165]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_4);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_4);
            Py_DECREF(tmp_expression_value_6);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[48]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_4);
            Py_DECREF(tmp_expression_value_6);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_tuple_element_1, 0, tmp_list_element_1);
        tmp_subscript_value_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_9;
            PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_1);
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[48]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_4);
        Py_DECREF(tmp_expression_value_6);
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_6);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_4);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[163];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 17;
        tmp_assign_source_17 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[166],
            PyTuple_GET_ITEM(mod_consts[167], 0)
        );

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = PyDict_Copy(mod_consts[168]);


        tmp_assign_source_18 = MAKE_FUNCTION_click$_compat$$$function__1_get_filesystem_encoding(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_10;
        tmp_defaults_1 = mod_consts[169];
        tmp_dict_key_1 = mod_consts[6];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[19]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_15;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[13];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto dict_build_exception_1;
            }
            tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[164]);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[46];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[164]);
            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[170];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[171];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[135];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[48]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_19 = MAKE_FUNCTION_click$_compat$$$function__2__make_text_stream(tmp_defaults_1, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = PyDict_Copy(mod_consts[172]);


        tmp_assign_source_20 = MAKE_FUNCTION_click$_compat$$$function__3_is_ascii_encoding(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_16;
        tmp_dict_key_2 = mod_consts[6];
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[116]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[135];
        tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_21 = MAKE_FUNCTION_click$_compat$$$function__4_get_best_encoding(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_21);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[173]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        tmp_assign_source_22 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_22, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_23 = impl___main__$$$function__6__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[174];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[174];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_18 = tmp_class_creation_1__bases;
        tmp_subscript_value_5 = mod_consts[86];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_5, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[174];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[174];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 61;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_19 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[175]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_20 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[175]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        tmp_tuple_element_3 = mod_consts[5];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_3 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 61;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_21 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_21, mod_consts[176]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_value_1 = mod_consts[177];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[178];
        tmp_getattr_default_1 = mod_consts[179];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_22 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[178]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_value_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 61;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_27;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[128], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[5];
        tmp_res = PyObject_SetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[181], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_607d7a116744842a4fb73112ac56c3e2_2)) {
            Py_XDECREF(cache_frame_607d7a116744842a4fb73112ac56c3e2_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_607d7a116744842a4fb73112ac56c3e2_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_607d7a116744842a4fb73112ac56c3e2_2 = MAKE_FUNCTION_FRAME(codeobj_607d7a116744842a4fb73112ac56c3e2, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_607d7a116744842a4fb73112ac56c3e2_2->m_type_description == NULL);
        frame_607d7a116744842a4fb73112ac56c3e2_2 = cache_frame_607d7a116744842a4fb73112ac56c3e2_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_607d7a116744842a4fb73112ac56c3e2_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_607d7a116744842a4fb73112ac56c3e2_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_23;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_2 = mod_consts[169];
            tmp_dict_key_3 = mod_consts[6];
            tmp_expression_value_23 = PyObject_GetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[17]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 64;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[19]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 7 );
            {
                PyObject *tmp_expression_value_24;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_28;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[13];
                tmp_expression_value_25 = PyObject_GetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[17]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 65;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[164]);
                Py_DECREF(tmp_expression_value_25);
                if (tmp_expression_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_6 = PyObject_GetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[182]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[46];
                tmp_expression_value_27 = PyObject_GetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[17]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 66;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[164]);
                Py_DECREF(tmp_expression_value_27);
                if (tmp_expression_value_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_7 = PyObject_GetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[182]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[170];
                tmp_dict_value_3 = PyObject_GetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[183]);

                if (tmp_dict_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_3 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_3);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[171];
                tmp_dict_value_3 = PyObject_GetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[183]);

                if (tmp_dict_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_3 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_3);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[184];
                tmp_expression_value_28 = PyObject_GetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[17]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 69;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[185]);
                Py_DECREF(tmp_expression_value_28);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[135];
                tmp_dict_value_3 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            Py_INCREF(tmp_defaults_2);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__5___init__(tmp_defaults_2, tmp_annotations_5, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = PyDict_Copy(mod_consts[187]);


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__6___del__(tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[188], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[135];
            tmp_dict_value_4 = PyObject_GetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[183]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__7_isatty(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_607d7a116744842a4fb73112ac56c3e2_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_607d7a116744842a4fb73112ac56c3e2_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_607d7a116744842a4fb73112ac56c3e2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_607d7a116744842a4fb73112ac56c3e2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_607d7a116744842a4fb73112ac56c3e2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_607d7a116744842a4fb73112ac56c3e2_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_607d7a116744842a4fb73112ac56c3e2_2 == cache_frame_607d7a116744842a4fb73112ac56c3e2_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_607d7a116744842a4fb73112ac56c3e2_2);
            cache_frame_607d7a116744842a4fb73112ac56c3e2_2 = NULL;
        }

        assertFrameObject(frame_607d7a116744842a4fb73112ac56c3e2_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61, mod_consts[191], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[5];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 61;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto try_except_handler_3;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_29);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_28 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61);
        locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF(locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61);
        locals_click$_compat$$$class__1__NonClosingTextIOWrapper_61 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
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
        exception_lineno = 61;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_28);
    }
    goto try_end_1;
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

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[174];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[174];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        condexpr_end_3:;
        tmp_bases_value_2 = mod_consts[192];
        tmp_assign_source_31 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[174];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[174];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 87;

        goto try_except_handler_4;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_29 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[175]);
        tmp_condition_result_9 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_value_3;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_30 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[175]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_4;
        }
        tmp_args_value_3 = mod_consts[193];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 87;
        tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_31 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_31, mod_consts[176]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_4;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_value_2 = mod_consts[177];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[178];
        tmp_getattr_default_2 = mod_consts[179];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_4;
        }
        tmp_right_value_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_type_arg_3;
            PyTuple_SET_ITEM(tmp_right_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_3 = tmp_class_creation_2__prepared;
            tmp_expression_value_32 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_expression_value_32 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[178]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_value_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_value_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 87;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_33;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_click$_compat$$$class__2__FixupStream_87 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[128], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[194];
        tmp_res = PyObject_SetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[20];
        tmp_res = PyObject_SetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[181], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3)) {
            Py_XDECREF(cache_frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3 = MAKE_FUNCTION_FRAME(codeobj_c78ee33ea58d3aeb8c1cd60a2e841e91, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3->m_type_description == NULL);
        frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3 = cache_frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_33;
            tmp_defaults_3 = mod_consts[169];
            tmp_dict_key_5 = mod_consts[6];
            tmp_expression_value_33 = PyObject_GetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[17]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[19]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[170];
            tmp_dict_value_5 = PyObject_GetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[183]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[171];
            tmp_dict_value_5 = PyObject_GetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[183]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__8___init__(tmp_defaults_3, tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_dict_key_6 = mod_consts[10];
            tmp_dict_value_6 = PyObject_GetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[182]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_34;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[135];
                tmp_expression_value_34 = PyObject_GetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[17]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 107;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[185]);
                Py_DECREF(tmp_expression_value_34);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 107;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__9___getattr__(tmp_annotations_9);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[196], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_dict_key_7 = mod_consts[198];
            tmp_dict_value_7 = PyObject_GetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[199]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[135];
            tmp_dict_value_7 = PyObject_GetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[200]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__10_read1(tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[135];
            tmp_dict_value_8 = PyObject_GetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[183]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__11_readable(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[30], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_dict_key_9 = mod_consts[135];
            tmp_dict_value_9 = PyObject_GetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[183]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__12_writable(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_dict_key_10 = mod_consts[135];
            tmp_dict_value_10 = PyObject_GetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[183]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__13_seekable(tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__2__FixupStream_87, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3 == cache_frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3);
            cache_frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3 = NULL;
        }

        assertFrameObject(frame_c78ee33ea58d3aeb8c1cd60a2e841e91_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[20];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[192];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_click$_compat$$$class__2__FixupStream_87;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 87;
            tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_34 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_click$_compat$$$class__2__FixupStream_87);
        locals_click$_compat$$$class__2__FixupStream_87 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_click$_compat$$$class__2__FixupStream_87);
        locals_click$_compat$$$class__2__FixupStream_87 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 87;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_34);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_35;
        tmp_defaults_4 = mod_consts[205];
        tmp_dict_key_11 = mod_consts[6];
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[116]);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[206];
        tmp_dict_value_11 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[135];
        tmp_dict_value_11 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_36 = MAKE_FUNCTION_click$_compat$$$function__14__is_binary_reader(tmp_defaults_4, tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_defaults_5;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_36;
        tmp_defaults_5 = mod_consts[205];
        tmp_dict_key_12 = mod_consts[6];
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[116]);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_annotations_15 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[206];
        tmp_dict_value_12 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[135];
        tmp_dict_value_12 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_37 = MAKE_FUNCTION_click$_compat$$$function__15__is_binary_writer(tmp_defaults_5, tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_expression_value_37;
        tmp_dict_key_13 = mod_consts[6];
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[116]);
        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_38;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_40;
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[135];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_4;
            }
            tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[164]);
            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_4;
            }
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_38);

                exception_lineno = 178;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[19]);
            if (tmp_subscript_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_38);

                exception_lineno = 178;

                goto dict_build_exception_4;
            }
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_38);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_16);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_38 = MAKE_FUNCTION_click$_compat$$$function__16__find_binary_reader(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_41;
        tmp_dict_key_14 = mod_consts[6];
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[116]);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_annotations_17 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_44;
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[135];
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto dict_build_exception_5;
            }
            tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[164]);
            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto dict_build_exception_5;
            }
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_42);

                exception_lineno = 196;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[19]);
            if (tmp_subscript_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_42);

                exception_lineno = 196;

                goto dict_build_exception_5;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_42);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_annotations_17);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_assign_source_39 = MAKE_FUNCTION_click$_compat$$$function__17__find_binary_writer(tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_45;
        tmp_dict_key_15 = mod_consts[6];
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[48]);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_annotations_18 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[135];
        tmp_dict_value_15 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));


        tmp_assign_source_40 = MAKE_FUNCTION_click$_compat$$$function__18__stream_is_misconfigured(tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_annotations_19;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_46;
        tmp_dict_key_16 = mod_consts[6];
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[48]);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_annotations_19 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_47;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_10;
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[207];
            tmp_dict_value_16 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[208];
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_6;
            }
            tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[164]);
            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[135];
            tmp_dict_value_16 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_annotations_19);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;


        tmp_assign_source_41 = MAKE_FUNCTION_click$_compat$$$function__19__is_compat_stream_attr(tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_annotations_20;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_value_49;
        tmp_dict_key_17 = mod_consts[6];
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[48]);
        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_annotations_20 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_50;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_12;
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[13];
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_7;
            }
            tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[164]);
            if (tmp_expression_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_50);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[46];
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_7;
            }
            tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[164]);
            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_12 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[135];
            tmp_dict_value_17 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_annotations_20);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;


        tmp_assign_source_42 = MAKE_FUNCTION_click$_compat$$$function__20__is_compatible_text_stream(tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_defaults_6;
        PyObject *tmp_annotations_21;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_expression_value_54;
        tmp_defaults_6 = mod_consts[169];
        tmp_dict_key_18 = mod_consts[209];
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[116]);
        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_annotations_21 = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_expression_value_55;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_list_element_2;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_list_element_3;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_expression_value_68;
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[13];
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_8;
            }
            tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[164]);
            if (tmp_expression_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_13 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_55);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[46];
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_8;
            }
            tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[164]);
            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_57);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[210];
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_8;
            }
            tmp_expression_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[165]);
            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_8;
            }
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_59);

                exception_lineno = 247;

                goto dict_build_exception_8;
            }
            tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[116]);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_59);

                exception_lineno = 247;

                goto dict_build_exception_8;
            }
            tmp_tuple_element_8 = PyList_New(2);
            PyList_SET_ITEM(tmp_tuple_element_8, 0, tmp_list_element_2);
            tmp_list_element_2 = (PyObject *)&PyBool_Type;
            PyList_SET_ITEM0(tmp_tuple_element_8, 1, tmp_list_element_2);
            tmp_subscript_value_15 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_subscript_value_15, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = (PyObject *)&PyBool_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_15, 1, tmp_tuple_element_8);
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_59);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[211];
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_8;
            }
            tmp_expression_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[165]);
            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_8;
            }
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_62);

                exception_lineno = 248;

                goto dict_build_exception_8;
            }
            tmp_list_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[116]);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_62);

                exception_lineno = 248;

                goto dict_build_exception_8;
            }
            tmp_tuple_element_9 = PyList_New(1);
            PyList_SET_ITEM(tmp_tuple_element_9, 0, tmp_list_element_3);
            tmp_subscript_value_16 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_65;
                PyObject *tmp_expression_value_66;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_expression_value_67;
                PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_9);
                tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_expression_value_66 == NULL)) {
                    tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                }

                if (tmp_expression_value_66 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 248;

                    goto tuple_build_exception_4;
                }
                tmp_expression_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[164]);
                if (tmp_expression_value_65 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 248;

                    goto tuple_build_exception_4;
                }
                tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_expression_value_67 == NULL)) {
                    tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                }

                if (tmp_expression_value_67 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_65);

                    exception_lineno = 248;

                    goto tuple_build_exception_4;
                }
                tmp_subscript_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[19]);
                if (tmp_subscript_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_65);

                    exception_lineno = 248;

                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_65);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 248;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_16, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_expression_value_62);
            Py_DECREF(tmp_subscript_value_16);
            goto dict_build_exception_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_16);
            Py_DECREF(tmp_expression_value_62);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[170];
            tmp_dict_value_18 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[171];
            tmp_dict_value_18 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[135];
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_8;
            }
            tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[48]);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_annotations_21);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_43 = MAKE_FUNCTION_click$_compat$$$function__21__force_correct_text_stream(tmp_defaults_6, tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_defaults_7;
        PyObject *tmp_annotations_22;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_expression_value_69;
        tmp_defaults_7 = mod_consts[205];
        tmp_dict_key_19 = mod_consts[212];
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[116]);
        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_annotations_22 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_70;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_expression_value_74;
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[13];
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto dict_build_exception_9;
            }
            tmp_expression_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[164]);
            if (tmp_expression_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_18 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_70);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[46];
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto dict_build_exception_9;
            }
            tmp_expression_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[164]);
            if (tmp_expression_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_72, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_72);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[170];
            tmp_dict_value_19 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[135];
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto dict_build_exception_9;
            }
            tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[48]);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_annotations_22);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_44 = MAKE_FUNCTION_click$_compat$$$function__22__force_correct_text_reader(tmp_defaults_7, tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_defaults_8;
        PyObject *tmp_annotations_23;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_expression_value_75;
        tmp_defaults_8 = mod_consts[205];
        tmp_dict_key_20 = mod_consts[213];
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[116]);
        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_annotations_23 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_76;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_expression_value_80;
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[13];
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;

                goto dict_build_exception_10;
            }
            tmp_expression_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[164]);
            if (tmp_expression_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_76);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[46];
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto dict_build_exception_10;
            }
            tmp_expression_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[164]);
            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_21 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_78, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[171];
            tmp_dict_value_20 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[135];
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto dict_build_exception_10;
            }
            tmp_dict_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[48]);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_annotations_23);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;
        Py_INCREF(tmp_defaults_8);


        tmp_assign_source_45 = MAKE_FUNCTION_click$_compat$$$function__23__force_correct_text_writer(tmp_defaults_8, tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_annotations_24;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_expression_value_81;
        tmp_dict_key_21 = mod_consts[135];
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[19]);
        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_annotations_24 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_21, tmp_dict_value_21);
        Py_DECREF(tmp_dict_value_21);
        assert(!(tmp_res != 0));


        tmp_assign_source_46 = MAKE_FUNCTION_click$_compat$$$function__24_get_binary_stdin(tmp_annotations_24);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_annotations_25;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_expression_value_82;
        tmp_dict_key_22 = mod_consts[135];
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[19]);
        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_annotations_25 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_22, tmp_dict_value_22);
        Py_DECREF(tmp_dict_value_22);
        assert(!(tmp_res != 0));


        tmp_assign_source_47 = MAKE_FUNCTION_click$_compat$$$function__25_get_binary_stdout(tmp_annotations_25);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_annotations_26;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_expression_value_83;
        tmp_dict_key_23 = mod_consts[135];
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[19]);
        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_annotations_26 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_23, tmp_dict_value_23);
        Py_DECREF(tmp_dict_value_23);
        assert(!(tmp_res != 0));


        tmp_assign_source_48 = MAKE_FUNCTION_click$_compat$$$function__26_get_binary_stderr(tmp_annotations_26);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_defaults_9;
        PyObject *tmp_annotations_27;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_22;
        tmp_defaults_9 = mod_consts[215];
        tmp_dict_key_24 = mod_consts[13];
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[164]);
        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_84, tmp_subscript_value_22);
        Py_DECREF(tmp_expression_value_84);
        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_annotations_27 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_86;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_expression_value_88;
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[46];
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto dict_build_exception_11;
            }
            tmp_expression_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[164]);
            if (tmp_expression_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_23 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_86, tmp_subscript_value_23);
            Py_DECREF(tmp_expression_value_86);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[135];
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto dict_build_exception_11;
            }
            tmp_dict_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[48]);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_annotations_27);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;
        Py_INCREF(tmp_defaults_9);


        tmp_assign_source_49 = MAKE_FUNCTION_click$_compat$$$function__27_get_text_stdin(tmp_defaults_9, tmp_annotations_27);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_defaults_10;
        PyObject *tmp_annotations_28;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_subscript_value_24;
        tmp_defaults_10 = mod_consts[215];
        tmp_dict_key_25 = mod_consts[13];
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[164]);
        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_89, tmp_subscript_value_24);
        Py_DECREF(tmp_expression_value_89);
        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_annotations_28 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_91;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_expression_value_93;
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = mod_consts[46];
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;

                goto dict_build_exception_12;
            }
            tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[164]);
            if (tmp_expression_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_25 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_91, tmp_subscript_value_25);
            Py_DECREF(tmp_expression_value_91);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = mod_consts[135];
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;

                goto dict_build_exception_12;
            }
            tmp_dict_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[48]);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_annotations_28);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;
        Py_INCREF(tmp_defaults_10);


        tmp_assign_source_50 = MAKE_FUNCTION_click$_compat$$$function__28_get_text_stdout(tmp_defaults_10, tmp_annotations_28);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_defaults_11;
        PyObject *tmp_annotations_29;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_26;
        tmp_defaults_11 = mod_consts[215];
        tmp_dict_key_26 = mod_consts[13];
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[164]);
        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_94, tmp_subscript_value_26);
        Py_DECREF(tmp_expression_value_94);
        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_annotations_29 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_96;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_expression_value_98;
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = mod_consts[46];
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto dict_build_exception_13;
            }
            tmp_expression_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[164]);
            if (tmp_expression_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_27 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_96, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_96);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = mod_consts[135];
            tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_98 == NULL)) {
                tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto dict_build_exception_13;
            }
            tmp_dict_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[48]);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_annotations_29);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;
        Py_INCREF(tmp_defaults_11);


        tmp_assign_source_51 = MAKE_FUNCTION_click$_compat$$$function__29_get_text_stderr(tmp_defaults_11, tmp_annotations_29);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_annotations_30;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_tuple_element_10;
        tmp_dict_key_27 = mod_consts[217];
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[218]);
        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_28 = PyTuple_New(3);
        {
            PyObject *tmp_expression_value_101;
            PyTuple_SET_ITEM0(tmp_subscript_value_28, 0, tmp_tuple_element_10);
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            if (tmp_expression_value_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[219]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_28, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = (PyObject *)&PyLong_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_28, 2, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_expression_value_99);
        Py_DECREF(tmp_subscript_value_28);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_99, tmp_subscript_value_28);
        Py_DECREF(tmp_expression_value_99);
        Py_DECREF(tmp_subscript_value_28);
        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_annotations_30 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_expression_value_106;
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[117];
            tmp_dict_value_27 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_27, tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[13];
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto dict_build_exception_14;
            }
            tmp_expression_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[164]);
            if (tmp_expression_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_29 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_102, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_102);
            if (tmp_dict_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[46];
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_105 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto dict_build_exception_14;
            }
            tmp_expression_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[164]);
            if (tmp_expression_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_30 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_104, tmp_subscript_value_30);
            Py_DECREF(tmp_expression_value_104);
            if (tmp_dict_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[135];
            tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_106 == NULL)) {
                tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto dict_build_exception_14;
            }
            tmp_dict_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[116]);
            if (tmp_dict_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_annotations_30);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;


        tmp_assign_source_52 = MAKE_FUNCTION_click$_compat$$$function__30__wrap_io_open(tmp_annotations_30);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_defaults_12;
        PyObject *tmp_annotations_31;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        tmp_defaults_12 = mod_consts[220];
        tmp_dict_key_28 = mod_consts[97];
        tmp_dict_value_28 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_31 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_107;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_expression_value_113;
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_28, tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[117];
            tmp_dict_value_28 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_28, tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[13];
            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_108 == NULL)) {
                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto dict_build_exception_15;
            }
            tmp_expression_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[164]);
            if (tmp_expression_value_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto dict_build_exception_15;
            }
            tmp_subscript_value_31 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_107, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_107);
            if (tmp_dict_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[46];
            tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_110 == NULL)) {
                tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto dict_build_exception_15;
            }
            tmp_expression_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[164]);
            if (tmp_expression_value_109 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto dict_build_exception_15;
            }
            tmp_subscript_value_32 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_109, tmp_subscript_value_32);
            Py_DECREF(tmp_expression_value_109);
            if (tmp_dict_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[221];
            tmp_dict_value_28 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_28, tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[135];
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;

                goto dict_build_exception_15;
            }
            tmp_expression_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[222]);
            if (tmp_expression_value_111 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;

                goto dict_build_exception_15;
            }
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_113 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_111);

                exception_lineno = 388;

                goto dict_build_exception_15;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[116]);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_111);

                exception_lineno = 388;

                goto dict_build_exception_15;
            }
            tmp_subscript_value_33 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_subscript_value_33, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = (PyObject *)&PyBool_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_33, 1, tmp_tuple_element_11);
            tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_111, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_111);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_dict_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_15;
        // Exception handling pass through code for dict_build:
        dict_build_exception_15:;
        Py_DECREF(tmp_annotations_31);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_15:;
        Py_INCREF(tmp_defaults_12);


        tmp_assign_source_53 = MAKE_FUNCTION_click$_compat$$$function__31_open_stream(tmp_defaults_12, tmp_annotations_31);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_54;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_metaclass_value_3;
        bool tmp_condition_result_11;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        PyObject *tmp_bases_value_3;
        tmp_key_value_7 = mod_consts[174];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_value_8 = mod_consts[174];
        tmp_metaclass_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_metaclass_value_3 == NULL) {
            tmp_metaclass_value_3 = Py_None;
        }
        assert(!(tmp_metaclass_value_3 == NULL));
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        condexpr_end_4:;
        tmp_bases_value_3 = mod_consts[192];
        tmp_assign_source_55 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[174];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[174];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 462;

        goto try_except_handler_7;
    }
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_expression_value_114;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_114 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_114, mod_consts[175]);
        tmp_condition_result_13 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_args_value_5;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_115 = tmp_class_creation_3__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[175]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_7;
        }
        tmp_args_value_5 = mod_consts[224];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 462;
        tmp_assign_source_56 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_116;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_116 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_116, mod_consts[176]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_7;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_value_3 = mod_consts[177];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[178];
        tmp_getattr_default_3 = mod_consts[179];
        tmp_tuple_element_12 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_7;
        }
        tmp_right_value_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_117;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_value_3, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_4 = tmp_class_creation_3__prepared;
            tmp_expression_value_117 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_117 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[178]);
            Py_DECREF(tmp_expression_value_117);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 462;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_right_value_3, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_right_value_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 462;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_57;
    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_click$_compat$$$class__3__AtomicFile_462 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[128], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyObject_SetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[181], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto try_except_handler_9;
        }
        if (isFrameUnusable(cache_frame_c4ca0153088d8ce8aa9215be167acdf5_4)) {
            Py_XDECREF(cache_frame_c4ca0153088d8ce8aa9215be167acdf5_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c4ca0153088d8ce8aa9215be167acdf5_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c4ca0153088d8ce8aa9215be167acdf5_4 = MAKE_FUNCTION_FRAME(codeobj_c4ca0153088d8ce8aa9215be167acdf5, module_click$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c4ca0153088d8ce8aa9215be167acdf5_4->m_type_description == NULL);
        frame_c4ca0153088d8ce8aa9215be167acdf5_4 = cache_frame_c4ca0153088d8ce8aa9215be167acdf5_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c4ca0153088d8ce8aa9215be167acdf5_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c4ca0153088d8ce8aa9215be167acdf5_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            PyObject *tmp_expression_value_118;
            tmp_dict_key_29 = mod_consts[225];
            tmp_expression_value_118 = PyObject_GetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[17]);

            if (tmp_expression_value_118 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_expression_value_118 == NULL)) {
                        tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_expression_value_118 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 463;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_118);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[116]);
            Py_DECREF(tmp_expression_value_118);
            if (tmp_dict_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 463;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_32 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[226];
            tmp_dict_value_29 = PyObject_GetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[182]);

            if (tmp_dict_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_29 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_29);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[227];
            tmp_dict_value_29 = PyObject_GetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[182]);

            if (tmp_dict_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_29 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_29);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[135];
            tmp_dict_value_29 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_29, tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__32___init__(tmp_annotations_32);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 463;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_34;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            tmp_res = MAPPING_HAS_ITEM(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[229]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_7 = PyObject_GetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[229]);

            if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[229]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 469;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_30 = mod_consts[135];
            tmp_dict_value_30 = PyObject_GetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[182]);

            if (tmp_dict_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_30 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_30);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_33 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));


            tmp_args_element_value_1 = MAKE_FUNCTION_click$_compat$$$function__33_name(tmp_annotations_33);

            frame_c4ca0153088d8ce8aa9215be167acdf5_4->m_frame.f_lineno = 469;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_31 = mod_consts[135];
            tmp_dict_value_31 = PyObject_GetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[182]);

            if (tmp_dict_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_31 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_31);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_34 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_click$_compat$$$function__33_name(tmp_annotations_34);

            frame_c4ca0153088d8ce8aa9215be167acdf5_4->m_frame.f_lineno = 469;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_13;
            PyObject *tmp_annotations_35;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            tmp_defaults_13 = mod_consts[205];
            tmp_dict_key_32 = mod_consts[231];
            tmp_dict_value_32 = PyObject_GetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[183]);

            if (tmp_dict_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_32 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_32);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_35 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));
            tmp_dict_key_32 = mod_consts[135];
            tmp_dict_value_32 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_32, tmp_dict_value_32);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_13);


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__34_close(tmp_defaults_13, tmp_annotations_35);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[124], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_36;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            tmp_dict_key_33 = mod_consts[10];
            tmp_dict_value_33 = PyObject_GetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[182]);

            if (tmp_dict_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_33 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_33);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_36 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_119;
                tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_33, tmp_dict_value_33);
                Py_DECREF(tmp_dict_value_33);
                assert(!(tmp_res != 0));
                tmp_dict_key_33 = mod_consts[135];
                tmp_expression_value_119 = PyObject_GetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[17]);

                if (tmp_expression_value_119 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_119 == NULL)) {
                            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_119 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 480;
                            type_description_2 = "o";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_119);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_dict_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[185]);
                Py_DECREF(tmp_expression_value_119);
                if (tmp_dict_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 480;
                    type_description_2 = "o";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_33, tmp_dict_value_33);
                Py_DECREF(tmp_dict_value_33);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_16;
            // Exception handling pass through code for dict_build:
            dict_build_exception_16:;
            Py_DECREF(tmp_annotations_36);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_16:;


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__35___getattr__(tmp_annotations_36);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[196], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_37;
            tmp_annotations_37 = PyDict_Copy(mod_consts[234]);


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__36___enter__(tmp_annotations_37);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[235], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__37___exit__();

        tmp_res = PyObject_SetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[237], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_annotations_38;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            tmp_dict_key_34 = mod_consts[135];
            tmp_dict_value_34 = PyObject_GetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[182]);

            if (tmp_dict_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_34 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_34);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_38 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_click$_compat$$$function__38___repr__(tmp_annotations_38);

            tmp_res = PyObject_SetItem(locals_click$_compat$$$class__3__AtomicFile_462, mod_consts[239], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c4ca0153088d8ce8aa9215be167acdf5_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c4ca0153088d8ce8aa9215be167acdf5_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c4ca0153088d8ce8aa9215be167acdf5_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c4ca0153088d8ce8aa9215be167acdf5_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c4ca0153088d8ce8aa9215be167acdf5_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c4ca0153088d8ce8aa9215be167acdf5_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c4ca0153088d8ce8aa9215be167acdf5_4 == cache_frame_c4ca0153088d8ce8aa9215be167acdf5_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c4ca0153088d8ce8aa9215be167acdf5_4);
            cache_frame_c4ca0153088d8ce8aa9215be167acdf5_4 = NULL;
        }

        assertFrameObject(frame_c4ca0153088d8ce8aa9215be167acdf5_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_9 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_13 = mod_consts[114];
            tmp_args_value_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[192];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_click$_compat$$$class__3__AtomicFile_462;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 462;
            tmp_assign_source_59 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 462;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_59;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_58 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_58);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_click$_compat$$$class__3__AtomicFile_462);
        locals_click$_compat$$$class__3__AtomicFile_462 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_click$_compat$$$class__3__AtomicFile_462);
        locals_click$_compat$$$class__3__AtomicFile_462 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 462;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_58);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_annotations_39;
        tmp_annotations_39 = PyDict_Copy(mod_consts[241]);


        tmp_assign_source_60 = MAKE_FUNCTION_click$_compat$$$function__39_strip_ansi(tmp_annotations_39);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_annotations_40;
        PyObject *tmp_dict_key_35;
        PyObject *tmp_dict_value_35;
        PyObject *tmp_expression_value_120;
        tmp_dict_key_35 = mod_consts[6];
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[116]);
        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        tmp_annotations_40 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_35, tmp_dict_value_35);
        Py_DECREF(tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_dict_key_35 = mod_consts[135];
        tmp_dict_value_35 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));


        tmp_assign_source_61 = MAKE_FUNCTION_click$_compat$$$function__40__is_jupyter_kernel_output(tmp_annotations_40);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_defaults_14;
        PyObject *tmp_annotations_41;
        PyObject *tmp_dict_key_36;
        PyObject *tmp_dict_value_36;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_expression_value_123;
        tmp_defaults_14 = mod_consts[215];
        tmp_dict_key_36 = mod_consts[6];
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[164]);
        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_121);

            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[116]);
        if (tmp_subscript_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_121);

            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_121, tmp_subscript_value_34);
        Py_DECREF(tmp_expression_value_121);
        Py_DECREF(tmp_subscript_value_34);
        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        tmp_annotations_41 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_124;
            PyObject *tmp_expression_value_125;
            PyObject *tmp_subscript_value_35;
            tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));
            tmp_dict_key_36 = mod_consts[242];
            tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_125 == NULL)) {
                tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_125 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto dict_build_exception_17;
            }
            tmp_expression_value_124 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[164]);
            if (tmp_expression_value_124 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto dict_build_exception_17;
            }
            tmp_subscript_value_35 = (PyObject *)&PyBool_Type;
            tmp_dict_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_124, tmp_subscript_value_35);
            Py_DECREF(tmp_expression_value_124);
            if (tmp_dict_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;

                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));
            tmp_dict_key_36 = mod_consts[135];
            tmp_dict_value_36 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_36, tmp_dict_value_36);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_17;
        // Exception handling pass through code for dict_build:
        dict_build_exception_17:;
        Py_DECREF(tmp_annotations_41);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_17:;
        Py_INCREF(tmp_defaults_14);


        tmp_assign_source_62 = MAKE_FUNCTION_click$_compat$$$function__41_should_strip_ansi(tmp_defaults_14, tmp_annotations_41);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_annotations_42;
        tmp_annotations_42 = PyDict_Copy(mod_consts[168]);


        tmp_assign_source_63 = MAKE_FUNCTION_click$_compat$$$function__44__get_argv_encoding(tmp_annotations_42);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_annotations_43;
        PyObject *tmp_dict_key_37;
        PyObject *tmp_dict_value_37;
        PyObject *tmp_expression_value_126;
        tmp_dict_key_37 = mod_consts[225];
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[48]);
        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;

            goto frame_exception_exit_1;
        }
        tmp_annotations_43 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_127;
            PyObject *tmp_expression_value_128;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_expression_value_129;
            PyObject *tmp_expression_value_130;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_expression_value_131;
            PyObject *tmp_expression_value_132;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_expression_value_133;
            tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));
            tmp_dict_key_37 = mod_consts[13];
            tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_128 == NULL)) {
                tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_128 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 570;

                goto dict_build_exception_18;
            }
            tmp_expression_value_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[164]);
            if (tmp_expression_value_127 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 570;

                goto dict_build_exception_18;
            }
            tmp_subscript_value_36 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_127, tmp_subscript_value_36);
            Py_DECREF(tmp_expression_value_127);
            if (tmp_dict_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 570;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));
            tmp_dict_key_37 = mod_consts[46];
            tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_130 == NULL)) {
                tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_130 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 570;

                goto dict_build_exception_18;
            }
            tmp_expression_value_129 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[164]);
            if (tmp_expression_value_129 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 570;

                goto dict_build_exception_18;
            }
            tmp_subscript_value_37 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_129, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_129);
            if (tmp_dict_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 570;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));
            tmp_dict_key_37 = mod_consts[135];
            tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_132 == NULL)) {
                tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_132 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;

                goto dict_build_exception_18;
            }
            tmp_expression_value_131 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[164]);
            if (tmp_expression_value_131 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;

                goto dict_build_exception_18;
            }
            tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_133 == NULL)) {
                tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_133 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_131);

                exception_lineno = 571;

                goto dict_build_exception_18;
            }
            tmp_subscript_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[48]);
            if (tmp_subscript_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_131);

                exception_lineno = 571;

                goto dict_build_exception_18;
            }
            tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_131, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_131);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_dict_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_18;
        // Exception handling pass through code for dict_build:
        dict_build_exception_18:;
        Py_DECREF(tmp_annotations_43);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_18:;


        tmp_assign_source_64 = MAKE_FUNCTION_click$_compat$$$function__45__get_windows_console_stream(tmp_annotations_43);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_annotations_44;
        tmp_annotations_44 = PyDict_Copy(mod_consts[245]);


        tmp_assign_source_65 = MAKE_FUNCTION_click$_compat$$$function__46_term_len(tmp_annotations_44);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_annotations_45;
        PyObject *tmp_dict_key_38;
        PyObject *tmp_dict_value_38;
        PyObject *tmp_expression_value_134;
        tmp_dict_key_38 = mod_consts[6];
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[116]);
        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        tmp_annotations_45 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_38, tmp_dict_value_38);
        Py_DECREF(tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_dict_key_38 = mod_consts[135];
        tmp_dict_value_38 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));


        tmp_assign_source_66 = MAKE_FUNCTION_click$_compat$$$function__47_isatty(tmp_annotations_45);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_annotations_46;
        PyObject *tmp_dict_key_39;
        PyObject *tmp_dict_value_39;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_subscript_value_39;
        PyObject *tmp_tuple_element_14;
        tmp_dict_key_39 = mod_consts[138];
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[165]);
        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_14 = PyList_New(0);
        tmp_subscript_value_39 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_137;
            PyTuple_SET_ITEM(tmp_subscript_value_39, 0, tmp_tuple_element_14);
            tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_137 == NULL)) {
                tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_137 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 587;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[48]);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 587;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_39, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_expression_value_135);
        Py_DECREF(tmp_subscript_value_39);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_dict_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_135, tmp_subscript_value_39);
        Py_DECREF(tmp_expression_value_135);
        Py_DECREF(tmp_subscript_value_39);
        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_annotations_46 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_138;
            PyObject *tmp_expression_value_139;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_expression_value_141;
            PyObject *tmp_expression_value_142;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_tuple_element_16;
            tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_39, tmp_dict_value_39);
            Py_DECREF(tmp_dict_value_39);
            assert(!(tmp_res != 0));
            tmp_dict_key_39 = mod_consts[142];
            tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_139 == NULL)) {
                tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_139 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 587;

                goto dict_build_exception_19;
            }
            tmp_expression_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[165]);
            if (tmp_expression_value_138 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 587;

                goto dict_build_exception_19;
            }
            tmp_tuple_element_15 = PyList_New(0);
            tmp_subscript_value_40 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_140;
                PyTuple_SET_ITEM(tmp_subscript_value_40, 0, tmp_tuple_element_15);
                tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_expression_value_140 == NULL)) {
                    tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                }

                if (tmp_expression_value_140 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 587;

                    goto tuple_build_exception_8;
                }
                tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[48]);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 587;

                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_40, 1, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_expression_value_138);
            Py_DECREF(tmp_subscript_value_40);
            goto dict_build_exception_19;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_dict_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_138, tmp_subscript_value_40);
            Py_DECREF(tmp_expression_value_138);
            Py_DECREF(tmp_subscript_value_40);
            if (tmp_dict_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 587;

                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_39, tmp_dict_value_39);
            Py_DECREF(tmp_dict_value_39);
            assert(!(tmp_res != 0));
            tmp_dict_key_39 = mod_consts[135];
            tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_142 == NULL)) {
                tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_142 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;

                goto dict_build_exception_19;
            }
            tmp_expression_value_141 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[165]);
            if (tmp_expression_value_141 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;

                goto dict_build_exception_19;
            }
            tmp_tuple_element_16 = PyList_New(0);
            tmp_subscript_value_41 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_143;
                PyTuple_SET_ITEM(tmp_subscript_value_41, 0, tmp_tuple_element_16);
                tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_expression_value_143 == NULL)) {
                    tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                }

                if (tmp_expression_value_143 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 588;

                    goto tuple_build_exception_9;
                }
                tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[48]);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 588;

                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_41, 1, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_expression_value_141);
            Py_DECREF(tmp_subscript_value_41);
            goto dict_build_exception_19;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_dict_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_141, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_141);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_dict_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;

                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_39, tmp_dict_value_39);
            Py_DECREF(tmp_dict_value_39);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_19;
        // Exception handling pass through code for dict_build:
        dict_build_exception_19:;
        Py_DECREF(tmp_annotations_46);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_19:;


        tmp_assign_source_67 = MAKE_FUNCTION_click$_compat$$$function__48__make_cached_stream_func(tmp_annotations_46);

        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[247]);
        }

        assert(!(tmp_called_value_10 == NULL));


        tmp_args_element_value_3 = MAKE_FUNCTION_click$_compat$$$function__49_lambda();

        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 609;

            goto frame_exception_exit_1;
        }
        frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 609;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[247]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_5 = MAKE_FUNCTION_click$_compat$$$function__50_lambda();

        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 610;

            goto frame_exception_exit_1;
        }
        frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 610;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[247]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_7 = MAKE_FUNCTION_click$_compat$$$function__51_lambda();

        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 611;

            goto frame_exception_exit_1;
        }
        frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame.f_lineno = 611;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_70 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_dict_key_40;
        PyObject *tmp_dict_value_40;
        tmp_dict_key_40 = mod_consts[58];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_71 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_71, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = mod_consts[252];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 616;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_71, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = mod_consts[253];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[214]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_71, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_20;
        // Exception handling pass through code for dict_build:
        dict_build_exception_20:;
        Py_DECREF(tmp_assign_source_71);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_20:;
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_71);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[255]);
        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_17 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_42 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_146;
            PyObject *tmp_expression_value_147;
            PyObject *tmp_subscript_value_43;
            PyObject *tmp_tuple_element_18;
            PyTuple_SET_ITEM0(tmp_subscript_value_42, 0, tmp_tuple_element_17);
            tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_147 == NULL)) {
                tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_147 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;

                goto tuple_build_exception_10;
            }
            tmp_expression_value_146 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[165]);
            if (tmp_expression_value_146 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_18 = PyList_New(0);
            tmp_subscript_value_43 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_148;
                PyTuple_SET_ITEM(tmp_subscript_value_43, 0, tmp_tuple_element_18);
                tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_expression_value_148 == NULL)) {
                    tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                }

                if (tmp_expression_value_148 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 614;

                    goto tuple_build_exception_11;
                }
                tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[19]);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 614;

                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_43, 1, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_expression_value_146);
            Py_DECREF(tmp_subscript_value_43);
            goto tuple_build_exception_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_146, tmp_subscript_value_43);
            Py_DECREF(tmp_expression_value_146);
            Py_DECREF(tmp_subscript_value_43);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_42, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_expression_value_144);
        Py_DECREF(tmp_subscript_value_42);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_144, tmp_subscript_value_42);
        Py_DECREF(tmp_expression_value_144);
        Py_DECREF(tmp_subscript_value_42);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 614;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[254];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_dict_key_41;
        PyObject *tmp_dict_value_41;
        tmp_dict_key_41 = mod_consts[58];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_72 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_72, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = mod_consts[252];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_72, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = mod_consts[253];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_72, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_21;
        // Exception handling pass through code for dict_build:
        dict_build_exception_21:;
        Py_DECREF(tmp_assign_source_72);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_21:;
        UPDATE_STRING_DICT1(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_72);
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_subscript_value_44;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[255]);
        if (tmp_expression_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_19 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_44 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_151;
            PyObject *tmp_expression_value_152;
            PyObject *tmp_subscript_value_45;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_list_element_4;
            PyObject *tmp_expression_value_153;
            PyObject *tmp_expression_value_154;
            PyObject *tmp_subscript_value_46;
            PyTuple_SET_ITEM0(tmp_subscript_value_44, 0, tmp_tuple_element_19);
            tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_152 == NULL)) {
                tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_152 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;

                goto tuple_build_exception_12;
            }
            tmp_expression_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[165]);
            if (tmp_expression_value_151 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;

                goto tuple_build_exception_12;
            }
            tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_value_154 == NULL)) {
                tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_value_154 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_151);

                exception_lineno = 621;

                goto tuple_build_exception_12;
            }
            tmp_expression_value_153 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[164]);
            if (tmp_expression_value_153 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_151);

                exception_lineno = 621;

                goto tuple_build_exception_12;
            }
            tmp_subscript_value_46 = (PyObject *)&PyUnicode_Type;
            tmp_list_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_153, tmp_subscript_value_46);
            Py_DECREF(tmp_expression_value_153);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_151);

                exception_lineno = 621;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_20 = PyList_New(2);
            {
                PyObject *tmp_expression_value_155;
                PyObject *tmp_expression_value_156;
                PyObject *tmp_subscript_value_47;
                PyList_SET_ITEM(tmp_tuple_element_20, 0, tmp_list_element_4);
                tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_expression_value_156 == NULL)) {
                    tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                }

                if (tmp_expression_value_156 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 621;

                    goto list_build_exception_1;
                }
                tmp_expression_value_155 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[164]);
                if (tmp_expression_value_155 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 621;

                    goto list_build_exception_1;
                }
                tmp_subscript_value_47 = (PyObject *)&PyUnicode_Type;
                tmp_list_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_155, tmp_subscript_value_47);
                Py_DECREF(tmp_expression_value_155);
                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 621;

                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_tuple_element_20, 1, tmp_list_element_4);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_expression_value_151);
            Py_DECREF(tmp_tuple_element_20);
            goto tuple_build_exception_12;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_subscript_value_45 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_157;
                PyTuple_SET_ITEM(tmp_subscript_value_45, 0, tmp_tuple_element_20);
                tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_expression_value_157 == NULL)) {
                    tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                }

                if (tmp_expression_value_157 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 621;

                    goto tuple_build_exception_13;
                }
                tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[48]);
                if (tmp_tuple_element_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 621;

                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_45, 1, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_expression_value_151);
            Py_DECREF(tmp_subscript_value_45);
            goto tuple_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_151, tmp_subscript_value_45);
            Py_DECREF(tmp_expression_value_151);
            Py_DECREF(tmp_subscript_value_45);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_44, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_expression_value_149);
        Py_DECREF(tmp_subscript_value_44);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_149, tmp_subscript_value_44);
        Py_DECREF(tmp_expression_value_149);
        Py_DECREF(tmp_subscript_value_44);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 620;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[256];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_47fde25b08e5c0a251bf29d7b9bc8683);
#endif
    popFrameStack();

    assertFrameObject(frame_47fde25b08e5c0a251bf29d7b9bc8683);

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_47fde25b08e5c0a251bf29d7b9bc8683);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_47fde25b08e5c0a251bf29d7b9bc8683, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47fde25b08e5c0a251bf29d7b9bc8683->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47fde25b08e5c0a251bf29d7b9bc8683, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("click._compat", false);

    return module_click$_compat;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_compat, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("click$_compat", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
