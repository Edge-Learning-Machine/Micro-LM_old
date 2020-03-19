#ifndef AI_MAIN_H
#define AI_MAIN_H

//#define SVM
//#define DT
#define KNN

#define DS_TEST //Otherwise it is one shot
//You must define REGRESSION, if it is regression
//#define REGRESSION

// A reduced size testing set may be useful not to occupy too much memory
// Comment out if you want the full testing set
#define SAMPLE_TESTINGSET


#ifdef SVM
void svm_test_dataset(bool);
float svm_regression(float[]);
int svm_classification(float[]);
//float *preprocess(float *);
#endif

#ifdef DT
void decisionTree_test_dataset(bool);
float decisionTree_regression(float[]);
int decisionTree_classification(float[]);
#endif

#ifdef KNN
void knn_test_dataset(bool);
float knn_regression(float[]);
int knn_classification(float[]);
#endif

//enum normalization_enum {none, standard, minmax};

#endif