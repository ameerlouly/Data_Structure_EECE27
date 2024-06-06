#include <iostream>
#include "matrix.h"

using namespace std;

int main()
{
    MATRIX A(3, 4);
    
    for(int i = 0; i < 3; i ++)
        for(int j = 0; j < 4; j++)
            A.insert(i + j, i, j);

    A.display();
}