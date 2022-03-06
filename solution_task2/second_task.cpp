#include "helper.h"

using namespace std;

int main()
{
    int random_num = 3 + rand() % 10;
    
    int** created_matrix = magic_matrix(random_num);
    printer_array(created_matrix, random_num);

    return 0;
    
}
