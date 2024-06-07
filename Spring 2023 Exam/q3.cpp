#include "Linked_List_Driver/linkedList.h"

//Question 3
bool linkedList::remove_bunch(int n, int m)
{
    link p, s;
    current = head;
    for(int i = 1; i < n; i++)
    {
        if(current->next == 0)   //Checks if i reached the end of the list, and returns false if true
            return false;     
        current = current->next;
    }
    p = current; //P points to the node before the node i want to start deleting from
      
    for(int i = 1; i <= m; i++)
    {
        if(current->next == 0)  //Checks if i reached the end of the list, and returns false if true
            return false;     
        current = current->next;
    }
    s = current; //s points to the last node i want to delete

    current = p;  
    p = p->next; // moves p to the first node i want to delete
    current->next = s->next;
    s->next = 0;
    while(p) //deletes all the nodes i want to get rid of
    {
        s = p;
        p = p->next;
        delete s;
    }
   return true;
}