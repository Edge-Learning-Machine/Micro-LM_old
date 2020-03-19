#ifndef MINIMAL_TESTINGSET_H
#define MINIMAL_TESTINGSET_H

#define N_TEST 10

#ifndef N_FEATURE
#define N_FEATURE 4
#endif

#ifndef N_ORIG_FEATURE
#define N_ORIG_FEATURE 13
#endif

extern int y_test[N_TEST];
extern float X_test[N_TEST][N_FEATURE];
#endif