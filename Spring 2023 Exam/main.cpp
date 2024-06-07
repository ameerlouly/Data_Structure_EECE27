#include <iostream>
#include "q1_matrix.h"
#include "Linked_List_Driver/linkedList.h"
#include "Linear_List_Driver/linearList.h"
#include "Doubled_Linked_List_Driver/doubleLinked.h"

using namespace std;

void displayList(doubleLinked L1)
{
    int x;
    bool found = L1.first(x);
    while(found)
    {
        cout << x << " ";
        found = L1.next(x);
    }
}

int main()
{
    doubleLinked L1;

    for(int i = 0; i < 10; i++)
        L1.insert_end(i * 5);

    displayList(L1);

    elemtype x;

    while(1)
    {
        cin >> x;
        L1.insert_ascend(x);
        displayList(L1);
        cout << endl;
    }

    
}