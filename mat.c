#include <R.h>
#include <Rinternals.h>
#include <R_ext/Lapack.h>

#include "mat.h"

#define MAT_CUTOFF 1e-10

DVEC * dvec_create(int n) {
  DVEC * v = Calloc(1, DVEC);
  v->data = Calloc(n, double);
  v->n = n;
  return v;
}

DVEC * dvec_create_noalloc(int n, double * data) {
  DVEC * v = Calloc(1, DVEC);
  v->data = data;
  v->n = n;
  return v;  
}

void dvec_free(DVEC * v) {
  Free(v->data);
  Free(v);
}

void dvec_free_noalloc(DVEC * v) {
  Free(v);
}

double dvec_max(const DVEC * v) {

}

double dvec_mean(const DVEC * v) {

}

double dvec_cov(const DVEC * u, const DVEC * v) {

}

double dvec_var(const DVEC * v) {

}


DMAT * dmat_create(int nr, int nc) {
  DMAT * x = Calloc(1, DMAT);
  x->data = Calloc(nr * nc, double);
  x->nr = nr;
  x->nc = nc;
  return x;
}

DMAT * dmat_create_noalloc(int nr, int nc, double * data) {
  DMAT * x = Calloc(1, DMAT);
  x->data = data;
  x->nr = nr;
  x->nc = nc;
  return x;
}

void dmat_free(DMAT * x) {
  Free(x->data);
  Free(x);
}

void dmat_free_noalloc(DMAT * x) {
  Free(x);
}

void dmat_get_row(int row_i, const DMAT * x, DVEC * row) {

}

void dmat_get_col(int col_i, const DMAT * x, DVEC * col) {

}


double dmat_max(const DMAT * x) {

}

double dmat_mean(const DMAT * x) {

}

double dmat_var(const DMAT * x) {

}


void dmat_row_maxes(const DMAT * x, DVEC * maxes) {

}

void dmat_row_means(const DMAT * x, DVEC * means) {

}

void dmat_row_covs(const DMAT * x, DMAT * covs) {

}

void dmat_row_vars(const DMAT * x, DVEC * vars) {

}


void dmat_col_maxes(const DMAT * x, DVEC * maxes) {

}

void dmat_col_means(const DMAT * x, DVEC * means) {

}

void dmat_col_covs(const DMAT * x, DMAT * covs) {

}

void dmat_col_vars(const DMAT * x, DVEC * vars) {

}


void dmat_transpose(const DMAT * x, DMAT * xt) {

}

void dmat_mult_by_diag(const DMAT * x, const DVEC * diag, DMAT * ans) {

}

void dmat_mult(const DMAT * x, const DMAT * y, DMAT * ans) {

}


void dmat_inv(const DMAT * x, DMAT * xinv) {

}


IVEC * ivec_create(int n) {
  IVEC * v = Calloc(1, IVEC);
  v->data = Calloc(n, int);
  v->n = n;
  return v;
}

IVEC * ivec_create_noalloc(int n, const int * data) {
  IVEC * v = Calloc(1, IVEC);
  v->data = data;
  v->n = n;
  return v;  
}

void ivec_free(IVEC * v) {
  Free(v->data);
  Free(v);
}

void ivec_free_noalloc(IVEC * v) {
  Free(v);
}

int ivec_max(const IVEC * v) {

}

double ivec_mean(const IVEC * v) {

}

double ivec_cov(const IVEC * u, const IVEC * v) {

}

double ivec_var(const IVEC * v) {

}

DMAT * imat_create(int nr, int nc) {
  IMAT * x = Calloc(1, IMAT);
  x->data = Calloc(nr * nc, int);
  x->nr = nr;
  x->nc = nc;
  return x;
}

DMAT * imat_create_noalloc(int nr, int nc, int * data) {
  DMAT * x = Calloc(1, IMAT);
  x->data = data;
  x->nr = nr;
  x->nc = nc;
  return x;
}

void imat_free(IMAT * x) {
  Free(x->data);
  Free(x);
}

void imat_free_noalloc(IMAT * x) {
  Free(x);
}


void imat_get_row(int row_i, const IMAT * x, IVEC * row) {

}

void imat_get_col(int col_i, const IMAT * x, IVEC * col) {

}


int imat_max(const IMAT * x) {

}

double imat_mean(const IMAT * x) {

}

double imat_var(const IMAT * x) {

}


void imat_row_maxes(const IMAT * x, IVEC * maxes) {

}

void imat_row_means(const IMAT * x, DVEC * means) {

}

void imat_row_covs(const IMAT * x, DMAT * covs) {

}

void imat_row_vars(const IMAT * x, DVEC * vars) {

}


void imat_col_maxes(const IMAT * x, IVEC * maxes) {

}

void imat_col_means(const IMAT * x, DVEC * means) {

}

void imat_col_covs(const IMAT * x, DMAT * covs) {

}

void imat_col_vars(const IMAT * x, DVEC * vars) {

}


void imat_transpose(const IMAT * x, IMAT * xt) {

}

void imat_mult_by_diag(const IMAT * x, const IVEC * diag, IMAT * ans) {

}

void imat_mult(const IMAT * x, const IMAT * y, IMAT * ans) {

}


void imat_inv(const IMAT * x, DMAT * xinv) {

}

