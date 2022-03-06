#include "helper.h"

void printer_array(int** matrix, int dim){ // n is size of matrix n*n

   for(int i = 0; i < dim; i++){
    for(int j = 0; j < dim; j++){
           cout<<matrix[i][j]<<setw(3);
       }
       cout<<endl;
   }
   cout<<"Finished" <<endl;
}