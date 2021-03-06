// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// kernelSmoothen
arma::vec kernelSmoothen(arma::vec hC0, arma::vec C, double b);
RcppExport SEXP _SCORNET_kernelSmoothen(SEXP hC0SEXP, SEXP CSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type hC0(hC0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type C(CSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(kernelSmoothen(hC0, C, b));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SCORNET_kernelSmoothen", (DL_FUNC) &_SCORNET_kernelSmoothen, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_SCORNET(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
