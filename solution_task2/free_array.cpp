#include "helper.h"

void free_array(int** matrix, int dim){
	for(int i = 0; i < dim; i++){
		delete[] matrix[i];
	}
	delete[] matrix;

	cout<<"Cleaned"<<endl; 
}