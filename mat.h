typedef struct dvec {
  int n;
  double * data;
} DVEC;

DVEC * dvec_create(int n);
DVEC * dvec_create_noalloc(int n, double * data);
void dvec_free(DVEC * v);
void dvec_free_noalloc(DVEC * v);

double dvec_max(const DVEC * v);
double dvec_mean(const DVEC * v);
double dvec_cov(const DVEC * u, const DVEC * v);
double dvec_var(const DVEC * v);

typedef struct dmat {
  int nr, nc;
  double * data;
} DMAT;

DMAT * dmat_create(int nr, int nc);
DMAT * dmat_create_noalloc(int nr, int nc, double * data);
void dmat_free(DMAT * x);
void dmat_free_noalloc(DMAT * x);

void dmat_get_row(int row_i, const DMAT * x, DVEC * row);
void dmat_get_col(int col_i, const DMAT * x, DVEC * col);

double dmat_max(const DMAT * x);
double dmat_mean(const DMAT * x);
double dmat_var(const DMAT * x);

void dmat_row_maxes(const DMAT * x, DVEC * maxes);
void dmat_row_means(const DMAT * x, DVEC * means);
void dmat_row_covs(const DMAT * x, DMAT * covs);
void dmat_row_vars(const DMAT * x, DVEC * vars);

void dmat_col_maxes(const DMAT * x, DVEC * maxes);
void dmat_col_means(const DMAT * x, DVEC * means);
void dmat_col_covs(const DMAT * x, DMAT * covs);
void dmat_col_vars(const DMAT * x, DVEC * vars);

void dmat_transpose(const DMAT * x, DMAT * xt);
void dmat_mult_by_diag(const DMAT * x, const DVEC * diag, DMAT * ans);
void dmat_mult(const DMAT * x, const DMAT * y, DMAT * ans);

void dmat_inv(const DMAT * x, DMAT * xinv);

typedef struct ivec {
  int n;
  int * data;
} IVEC;

IVEC * ivec_create(int n);
IVEC * ivec_create_noalloc(int n, int * data);
void ivec_free(IVEC * v);
void ivec_free_noalloc(IVEC * v);

int ivec_max(const IVEC * v);
double ivec_mean(const IVEC * v);
double ivec_cov(const IVEC * u, const IVEC * v);
double ivec_var(const IVEC * v);

typedef struct imat {
  int nr, nc;
  int * data;
} IMAT;

IMAT * imat_create(int nr, int nc);
IMAT * imat_create_noalloc(int nr, int nc, int * data);
void imat_free(IMAT * x);
void imat_free_noalloc(IMAT * x);

void imat_get_row(int row_i, const IMAT * x, IVEC * row);
void imat_get_col(int col_i, const IMAT * x, IVEC * col);

int imat_max(const IMAT * x);
double imat_mean(const IMAT * x);
double imat_var(const IMAT * x);

void imat_row_maxes(const IMAT * x, IVEC * maxes);
void imat_row_means(const IMAT * x, DVEC * means);
void imat_row_covs(const IMAT * x, DMAT * covs);
void imat_row_vars(const IMAT * x, DVEC * vars);

void imat_col_maxes(const IMAT * x, IVEC * maxes);
void imat_col_means(const IMAT * x, DVEC * means);
void imat_col_covs(const IMAT * x, DMAT * covs);
void imat_col_vars(const IMAT * x, DVEC * vars);

void imat_transpose(const IMAT * x, IMAT * xt);
void imat_mult_by_diag(const IMAT * x, const IVEC * diag, IMAT * ans);
void imat_mult(const IMAT * x, const IMAT * y, IMAT * ans);

void imat_inv(const IMAT * x, DMAT * xinv);
