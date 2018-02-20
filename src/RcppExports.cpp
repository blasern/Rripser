// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// run_ripser
Rcpp::NumericMatrix run_ripser(Rcpp::NumericVector dist_vec, int dim, double threshold);
RcppExport SEXP _Rripser_run_ripser(SEXP dist_vecSEXP, SEXP dimSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dist_vec(dist_vecSEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(run_ripser(dist_vec, dim, threshold));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rripser_run_ripser", (DL_FUNC) &_Rripser_run_ripser, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rripser(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
