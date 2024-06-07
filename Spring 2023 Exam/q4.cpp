#include "Doubled_Linked_List_Driver/doubleLinked.h"
#include <assert.h>
#include <iostream>

using namespace std;

//Question 4
void doubleLinked::insert_ascend(const elemtype &e)
{
    current = head;
    cout << e << endl;
    if(head->elem >= e)
    { 
        insert(e);
        return;
    }

    int i = 0;
    while(current && e > current->elem)
    {
        current = current->next;
        i++;
    }

    insert_after(e, i);
}

/* ANOTHER SOLUTIO NOT COMPLETE YET
link add = new node;
assert(add);
add->elem = e;

if(head == 0)
    {
        add->next = 0;
        add->prev = 0;
        head = add;
    }
    else
    {
        if(head->elem <= e)
        {
            head->prev = add;
            add->next = head;
            add->prev = 0;
            head = add;
        }
        else
        {
            current = head;
            while(e > current->next->elem)
                current = current->next;
        }

    }
*/