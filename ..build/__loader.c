
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 1 > 0
static unsigned char *bytecode_data[1];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cli(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_termui_impl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_textwrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$decorators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$shell_completion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$termui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fnx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fnx$check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fnx$clear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fnx$logic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fnx$main(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fnx$msr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fnx$proc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fnx$set(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cli", modulecode_cli, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click", modulecode_click, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"click._compat", modulecode_click$_compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click._termui_impl", modulecode_click$_termui_impl, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click._textwrap", modulecode_click$_textwrap, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click.core", modulecode_click$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click.decorators", modulecode_click$decorators, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click.exceptions", modulecode_click$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click.formatting", modulecode_click$formatting, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click.globals", modulecode_click$globals, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click.parser", modulecode_click$parser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click.shell_completion", modulecode_click$shell_completion, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click.termui", modulecode_click$termui, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click.types", modulecode_click$types, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"click.utils", modulecode_click$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"fnx", modulecode_fnx, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"fnx.check", modulecode_fnx$check, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"fnx.clear", modulecode_fnx$clear, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"fnx.logic", modulecode_fnx$logic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"fnx.main", modulecode_fnx$main, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"fnx.msr", modulecode_fnx$msr, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"fnx.proc", modulecode_fnx$proc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"fnx.set", modulecode_fnx$set, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"site", NULL, 0, 17364, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob()
{
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

