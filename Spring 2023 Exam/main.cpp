#include <iostream>
#include "matrix.h"
#include "Linked_List_Driver/linkedList.h"

using namespace std;

//Question 2
void linkedList::equal(linkedList A, linkedList B)
{
    elemtype elemA, elemB;
    bool foundA = A.first(elemA);
    bool foundB = B.first(elemB);

    while(foundA && foundB)
    {
        if(elemA == elemB)
            insert(elemA);
        else
            insert(0);

        A.next(elemA);
        B.next(elemB);
    }

}

int main()
{
    MATRIX A(3, 4);
    
    for(int i = 0; i < 3; i ++)
        for(int j = 0; j < 4; j++)
            A.insert(i + j, i, j);

    A.display();
}