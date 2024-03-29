#ifndef SVM_H

#define SVM_H

#include "AI_main.h"
#include <stdbool.h>

#ifdef SAMPLE_TESTINGSET
#include "minimal_testing_set.h"
#else
#include "testing_set.h"
#endif
#include "PPParams.h"
#include "SVM_params.h"

void svm_test_dataset(bool);
float svm_regression(float []);
int svm_classification(float []);
//float *preprocess(float *);

#endif