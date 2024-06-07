#include "Linked_List_Driver/linkedList.h"

bool linkedList::remove_bunch2(int n, int m)
{
    link p, s;

    current = head;
    for(int i = 1; i < n; i++)
    {
        if(current->next == 0)
            return false;
        current = current->next;
    }
    p = current;
    current = current ->next;
    for(int i = 0; i < m; i++)
    {
        if(current->next)
        {
            s = current;
            current = current->next;
            delete s;
        }
    }

    p->next = current;
    if(current->next == 0)
    {
        tail = current;
    }
    return true;
}
