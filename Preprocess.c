#include "preprocess.h"
//ccc

float X_t[N_FEATURE];

#ifdef STANDARD_NORMALIZATION
normalize_std(float *X, float *s_x, float*u_x){
int i=0;
for (i=0; i<N_ORIG_FEATURE; i++) {
    X[i] = (X[i] - u_x[i]) / s_x[i];
}
}
#elif defined(MINMAX_NORMALIZATION)
normalize_mm(float *X, float *s_x){
int i=0;
for (i=0; i<N_ORIG_FEATURE; i++) {
    X[i] = s_x[i] * X[i];
}
}
#endif

float *PCA_transform(float *X){
int i=0, j=0;
/*float debug[N_ORIG_FEATURE];
for (j=0; j<N_ORIG_FEATURE; j++) {
    debug[j]=X[j];
}*/
for (i=0; i<N_FEATURE; i++) {
    X_t[i]=0;
    for (j=0; j<N_ORIG_FEATURE; j++) {
        X_t[i] += X[j]*pca_components[i][j];
    }
}
return X_t;
}

float *preprocess(float *X)
{
    #ifdef STANDARD_NORMALIZATION
        normalize_std(X, s_x, u_x);
    #elif defined(MINMAX_NORMALIZATION)
        normalize_mm(X, s_x);
    #endif
    return PCA_transform(X);
}