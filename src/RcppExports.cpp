// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// meanKRS_cpp
NumericVector meanKRS_cpp(const NumericVector y, const NumericVector x, const NumericVector x0, const double lambda);
static SEXP _akrs_meanKRS_cpp_try(SEXP ySEXP, SEXP xSEXP, SEXP x0SEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(meanKRS_cpp(y, x, x0, lambda));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _akrs_meanKRS_cpp(SEXP ySEXP, SEXP xSEXP, SEXP x0SEXP, SEXP lambdaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_akrs_meanKRS_cpp_try(ySEXP, xSEXP, x0SEXP, lambdaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// varKRS_cpp
NumericVector varKRS_cpp(const NumericVector y, const NumericVector x, const NumericVector x0, const double lambda);
RcppExport SEXP _akrs_varKRS_cpp(SEXP ySEXP, SEXP xSEXP, SEXP x0SEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(varKRS_cpp(y, x, x0, lambda));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _akrs_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _akrs_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("NumericVector(*meanKRS_cpp)(const NumericVector,const NumericVector,const NumericVector,const double)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _akrs_RcppExport_registerCCallable() { 
    R_RegisterCCallable("akrs", "_akrs_meanKRS_cpp", (DL_FUNC)_akrs_meanKRS_cpp_try);
    R_RegisterCCallable("akrs", "_akrs_RcppExport_validate", (DL_FUNC)_akrs_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_akrs_meanKRS_cpp", (DL_FUNC) &_akrs_meanKRS_cpp, 4},
    {"_akrs_varKRS_cpp", (DL_FUNC) &_akrs_varKRS_cpp, 4},
    {"_akrs_rcpp_hello_world", (DL_FUNC) &_akrs_rcpp_hello_world, 0},
    {"_akrs_RcppExport_registerCCallable", (DL_FUNC) &_akrs_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_akrs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}