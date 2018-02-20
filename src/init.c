#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* .Call calls */
extern SEXP _Rripser_run_ripser(SEXP, int, int);

static const R_CallMethodDef CallEntries[] = {
    {"_Rripser_run_ripser",                  (DL_FUNC) &_Rripser_run_ripser,             3},
    {NULL, NULL, 0}
};

void R_init_rdist(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
