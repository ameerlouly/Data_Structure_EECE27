#include "Linear_List_Driver/linearList.h"

//WRONG ANSWER
//PLEASE CHECK THE ANSWER ON THE GOOGLE DRIVE
//UNTILL THIS IS EDITED

//Question 2
linearList linearList::equal(linearList B)
{
    elemtype elemA, elemB;
    linearList C;
    bool foundA = first(elemA);
    bool foundB = B.first(elemB);

    while(foundA && foundB)
    {
        if(elemA == elemB)
            C.insert(elemA);
        else
            C.insert(0);

        next(elemA);
        B.next(elemB);
    }

    return C;

}