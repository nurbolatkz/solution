#ifndef HELPER_H
#define HELPER_H
 
#include <iostream>
#include <vector>
#include <iomanip>

#define size_x 3
#define size_y 3
#define k_val 3

using namespace std;

vector<vector <int>> searchKvalue(int*** matrx, int l, int m , int n, int z);
int*** arraycreator(int DIM1,int DIM2, int DIM3);
void arraycleaner(int*** arr, int DIM1, int DIM2);
 
#endif 

