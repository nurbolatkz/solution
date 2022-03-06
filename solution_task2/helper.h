#ifndef PRINTERARRAY_H
#define PRINTERARRAY_H


#include <iomanip>
#include <iostream>
using namespace std;

int** magic_matrix(int dim);
void printer_array(int** matrix, int dim);
void free_array(int** matrix, int dim);

#endif