#include "printerarray.h"

void printer_array(int n){ // n is size of matrix n*n

	int imin = 0, jmin = 0, imax = n - 1, jmax = n - 1;

    int k = n * n; // max value in matrix, to fill array from max to min
    int arr[n][n]; // initialized matrix with size n
    
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
   
   // display filled array 
   for(int i = 0; i < n; i++){

       for(int j = 0; j < n; j++){
           cout<<arr[i][j]<<setw(3);
       }
       cout<<endl;
   }
   cout<<"Finished";
}