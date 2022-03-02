#include "helper.h"

int*** arraycreator(int DIM1,int DIM2, int DIM3){
    int*** ary;
    int cnt = 1;
    ary = new int ** [DIM1];

    for (int i = 0; i < DIM1; i++){
        ary[i] = new int * [DIM2];
        
        for (int j = 0; j < DIM2; j++){
            ary[i][j] = new int [DIM3];
        }
    }

    for (int i = 0; i < DIM1; i++){

    	for (int j = 0; j < DIM2; j++){

            for (int k = 0; k < DIM3; k++){
                ary[i][j][k] = cnt++;
                cout << setw(4) << ary[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return ary;
}