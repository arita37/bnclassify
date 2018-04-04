// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// are_disjoint
bool are_disjoint(Nullable<CharacterVector> x, Nullable<CharacterVector> y);
RcppExport SEXP _bnclassify_are_disjoint(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Nullable<CharacterVector> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector> >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(are_disjoint(x, y));
    return rcpp_result_gen;
END_RCPP
}
// normalize
NumericVector normalize(NumericVector& x);
RcppExport SEXP _bnclassify_normalize(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(normalize(x));
    return rcpp_result_gen;
END_RCPP
}
// normalize_ctgt
NumericVector normalize_ctgt(NumericVector& ctgt);
RcppExport SEXP _bnclassify_normalize_ctgt(SEXP ctgtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type ctgt(ctgtSEXP);
    rcpp_result_gen = Rcpp::wrap(normalize_ctgt(ctgt));
    return rcpp_result_gen;
END_RCPP
}
// hasna
bool hasna(const DataFrame& newdata);
RcppExport SEXP _bnclassify_hasna(SEXP newdataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type newdata(newdataSEXP);
    rcpp_result_gen = Rcpp::wrap(hasna(newdata));
    return rcpp_result_gen;
END_RCPP
}
// dostop
void dostop();
RcppExport SEXP _bnclassify_dostop() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    dostop();
    return R_NilValue;
END_RCPP
}
// compute_joint
NumericMatrix compute_joint(List x, DataFrame newdata);
RcppExport SEXP _bnclassify_compute_joint(SEXP xSEXP, SEXP newdataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type newdata(newdataSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_joint(x, newdata));
    return rcpp_result_gen;
END_RCPP
}
// table_cpp
Rcpp::IntegerVector table_cpp(const Rcpp::IntegerVector& v);
RcppExport SEXP _bnclassify_table_cpp(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(table_cpp(v));
    return rcpp_result_gen;
END_RCPP
}
// unidim_values
Rcpp::IntegerVector unidim_values(const DataFrame& data);
RcppExport SEXP _bnclassify_unidim_values(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(unidim_values(data));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bnclassify_are_disjoint", (DL_FUNC) &_bnclassify_are_disjoint, 2},
    {"_bnclassify_normalize", (DL_FUNC) &_bnclassify_normalize, 1},
    {"_bnclassify_normalize_ctgt", (DL_FUNC) &_bnclassify_normalize_ctgt, 1},
    {"_bnclassify_hasna", (DL_FUNC) &_bnclassify_hasna, 1},
    {"_bnclassify_dostop", (DL_FUNC) &_bnclassify_dostop, 0},
    {"_bnclassify_compute_joint", (DL_FUNC) &_bnclassify_compute_joint, 2},
    {"_bnclassify_table_cpp", (DL_FUNC) &_bnclassify_table_cpp, 1},
    {"_bnclassify_unidim_values", (DL_FUNC) &_bnclassify_unidim_values, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_bnclassify(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
