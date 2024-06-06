#include "Linked_List_Driver/linkedList.h"

//Question 3
bool linkedList::remove_bunch(int n, int m)
{
    link p, s;
    current = head;
    for(int i = 1; i <= n; i++)
        current = current->next;
    p = current;
    for(int i = 1; i <= m; i++)
        current = current->next;
    s = current;

    current = p;
    p = p->next;
    current->next = s->next;
    s->next = 0;
    while(p)
    {
        s = p;
        p = p->next;
        delete s;
    }
   
}