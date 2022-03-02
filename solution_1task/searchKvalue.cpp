#include "helper.h"


vector<vector <int>> searchKvalue(int*** matrx, int l, int m , int n, int z){
    
    vector<vector <int>> result;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < n; k++){
                if(matrx[i][j][k] == z){
                    vector<int> cooridnates(3);
                    cooridnates[0] = i;
                    cooridnates[1] = j;
                    cooridnates[2] = k;
                    result.push_back(cooridnates);
                }
            }
        }
        
    }

    return result;
    
}