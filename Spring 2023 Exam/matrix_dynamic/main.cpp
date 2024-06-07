#include <iostream>
#include "matrix_dynamic.h"

using namespace std;

int main()
{
    int arr1[9] = {1, 1, 1, 2, 2, 2, 3, 3, 3};
    int arr2[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    MATRIX A(3, 3, arr1);
    MATRIX B(3, 3, arr2);

    A.display();
    cout << B.get(1, 1) << endl;
    B.display();

    MATRIX C = A.multiply(B);
    C.display();
    
}