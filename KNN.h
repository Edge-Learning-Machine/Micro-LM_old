#ifndef KNN_H

#define KNN_H

#include "AI_main.h"
#include <stdbool.h>

#ifdef SAMPLE_TESTINGSET
#include "minimal_testing_set.h"
#else
#include "testing_set.h"
#endif
#include "PPParams.h"
#include "training_set.h"
#include "KNN_params.h"

void knn_test_dataset(bool);
float knn_regression(float[]);
int knn_classification(float[]);
#endif