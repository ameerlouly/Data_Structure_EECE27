#include "Doubled_Linked_List_Driver/doubleLinked.h"
#include <assert.h>

//Question 4
void doubleLinked::insert_ascend(const elemtype &e)
{
    current = head;
    if(head->elem >= e)
        insert(e);
    int i = 1;
    while(e > current->elem && current->next)
    {
        current = current->next;
        i++;
    }

    insert_after(e, i);
}

/* TEST LATER
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