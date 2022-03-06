#include "helper.h"


int** magic_matrix(int dim){

	int imin = 0, jmin = 0, imax = dim - 1, jmax = dim - 1;

    int k = dim * dim; // max value in matrix, to fill array from max to min
    int** arr =  new int*[dim]; // initialized matrix with size dim
    
    for(int i = 0; i < dim; i++){
    	arr[i] = new int[dim];
    }

    do{

       for(int i = imax; i >= imin; i--){ // begin where replaced max value, fill last column
           arr[i][jmax] = k;
           k--;
       }
       jmax--;

       for(int j = jmax; j >= jmin; j--){ // fill first row with index which is equal to imin
           arr[imin][j] = k;
           k--;
       }
       imin++;

       for(int i = imin; i <= imax; i++){ // fill first column which indexed as imin
           arr[i][jmin] = k;
           k--;
       }
       jmin++;

       for(int i = jmin; i <= jmax; i++){ //  fill last row indexed as imax 
           arr[imax][i] = k;
           k--;
       }
       imax--;
   }while(k > 0);

   return arr;
}