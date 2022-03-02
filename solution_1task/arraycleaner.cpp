#include "helper.h"

void arraycleaner(int*** arr, int DIM1, int DIM2){
    for(int i = 0; i < DIM1; i++)
    {
        for(int j = 0; j < DIM2; j++)
        {
            delete[] arr[i][j];
        }
        delete[] arr[i];

    }
    delete[] arr;
    cout<<"Cleaned"<<endl;
}