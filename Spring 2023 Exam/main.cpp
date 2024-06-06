#include <iostream>
#include "q1_matrix.h"
#include "Linked_List_Driver/linkedList.h"
#include "Linear_List_Driver/linearList.h"

using namespace std;

int main()
{
    MATRIX A(3, 4);
    
    for(int i = 0; i < 3; i ++)
        for(int j = 0; j < 4; j++)
            A.insert(i + j, i, j);

    A.display();

    //Question 2
    linearList L1, L2, C;
    C = L1.equal(L2);
    
}