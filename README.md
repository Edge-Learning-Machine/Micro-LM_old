# MicroML

Create a new project using STM32CubeIDE

## ANN: 
1- Load the generated .h5 model from DeskML into STM32CubeIDE and generate the code

2- Copy the generated files from DeskML "minimal_testing_set.c" and "PPparams.c" from this directory ./out/source

3- In your created project using STM32CubeIDE go to ./Core/Src and paste them

4- Copy the generated files from DeskML "minimal_testing_set.h" and "PPparams.h" from this directory ./out/ds_name/include

5- In your created project using STM32CubeIDE go to ./Core/Inc and paste them

### Testing
There are two options for testing the generated C code:

1- Testing the dataset: using "minimal_testing_set.h"

2- Testing one row of data: one row of input X similar to the input data in the dataset and them preprocess X using "PPparams.h" 

These two steps are clear in the example project called "Test_ANN" (the only modification done is in the ./X-CUBE-AI/App/app_x-cube-ai.c)

## SVM/K-NN/DT:
Copy from DeskML the .c files  to ./Core/Src directory and .h files to ./Core/Inc directory in the new created project using STM32CubeIDE

In ./core directory of the created project in STMCubeIDE:

1- you should create a folder and name it dataset

2- in the dataset folder you should copy the two generated folders by python ("source" and "include") and paste them in this directory

3- right click on the dataset folder and choose properties then in C/C++ General choose Paths and Symbols

4- in the includes tab press Add and press File system to choose the directory of "include" (the folder you already paste it in dataset folder)

5- Apply and close

6- choose the wanted algorithm to be deployed into target from AI_main.h and comment the others 

7- build the project.

NOTE: "source" and "include" folders generated in python are different for each dataset, so you should for each dataset test in python (and for each algorithm) replace the new generated folders following instruction number (2)

An example project called "AI_TEST" is provided to clear this procedure.
