
#include <iostream>
#include <iomanip>
#include "helper.h"
using namespace std;



int main()
{
    int DIM1 = 3, DIM2 = 3, DIM3 = 3;
    int ***ary =  arraycreator(DIM1, DIM2, DIM3);

    vector<vector<int>> myresult = searchKvalue(ary, 3,3,3,3);


    for(int i = 0; i < myresult.size(); i++){

        for(int j = 0; j < myresult[i].size(); j++){
            cout<<myresult[i][j]<<"   ";
        }
        cout<<endl;
    }
    
    arraycleaner(ary, DIM1, DIM2);
    
    cout<<"Finished"<<endl;

    return 0;
}