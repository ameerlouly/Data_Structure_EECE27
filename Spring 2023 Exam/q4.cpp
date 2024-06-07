#include "Doubled_Linked_List_Driver/doubleLinked.h"
#include <assert.h>
#include <iostream>

using namespace std;

//Question 4
void doubleLinked::insert_ascend(const elemtype &e)
{
    current = head;
    if(head->elem >= e)
    { 
        insert(e);
        return;
    }

    while(current->next && e > current->next->elem)
        current = current->next;
    
    link add = new node;
    assert(add);
    add->elem = e;

    add->next = current->next;
    if(current->next)
        current->next->prev = add;
    current->next = add;
    add->prev = current;
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