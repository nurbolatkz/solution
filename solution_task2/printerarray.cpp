#include "printerarray.h"

void printer_array(int n){

	int imin = 0, jmin = 0, imax = n - 1,jmax = n - 1;

    int k = n * n;
    int arr[n][n];
    
    do{

       for(int i = imax; i >= imin; i--){
           arr[i][jmax] = k;
           k--;
       }
       jmax--;

       for(int j = jmax; j >= jmin; j--){
           arr[imin][j] = k;
           k--;
       }
       imin++;

       for(int i = imin; i <= imax; i++){
           arr[i][jmin] = k;
           k--;
       }
       jmin++;

       for(int i = jmin; i <= jmax; i++){
           arr[imax][i] = k;
           k--;
       }
       imax--;
   }while(k > 0);
   
   for(int i = 0; i < n; i++){

       for(int j = 0; j < n; j++){
           cout<<arr[i][j]<<setw(3);
       }
       cout<<endl;
   }
   cout<<"Finished";
}