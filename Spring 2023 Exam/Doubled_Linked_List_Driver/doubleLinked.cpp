#include "doubleLinked.h"
#include <assert.h>

doubleLinked::doubleLinked() //constructor intializes the List
{
    head = 0; current = 0;
}

void doubleLinked::insert(const elemtype &e)    //Insert at the beginning of the list
{
    link addnode(new node);
    assert(addnode);

    addnode->elem = e;

    if(head == 0)
    {
        head = addnode;
        head->prev = 0;
        head->next = 0;
    }
    
    head->prev = addnode;
    addnode->next = head;
    addnode->prev = 0;
    head = addnode;
}

bool doubleLinked::prev(elemtype &e)
{
    assert(current);    //current should be nonzero
    if(current->prev == 0)
        return false;
    current = current->prev;
    e = current->elem;
    return true;
}

bool doubleLinked::next(elemtype &e)
{
    assert(current);    //current should be nonzero
    if(current->next == 0)
        return false;
    current = current->next;
    e = current->elem;
    return true;
}

void doubleLinked::insert_end(const elemtype &e)
{
    link add = new node;
    assert(add);
    add->elem = e;

    if(head == 0)
    {
        add->prev = 0;
        add->next = 0; 
        head = add;
    }
    else
    {
        current = head;
        while(current->next)
            current = current->next;
        current->next = add;
        add->prev = current;
        add->next = 0;
    }
}

void doubleLinked::insert_after(const elemtype &e, int n)
{
    link add = new node;
    assert(add);
    if(head == 0)
    {
        add->prev = 0;
        add->next = 0; 
        head = add;
    }
    else
    {
        current = head;
        for(int i = 1; i < n; i++)
        {
            if(current->next == 0)  //only works if n is smaller than the number of nodes in the list
                break;
            current = current->next;
        }

        if(current->next != 0)      //in case current was found to be the last element
            current->next->prev = add;
        
        add->next = current->next;
        add->prev = current;
        current->next = add;
    }
}

bool doubleLinked::remove(const elemtype &e)
{
    link temp;

    if(head->elem == e)
    {
        temp = head;
        head->next->prev = 0;
        head = head->next;
        delete temp;
        return true;
    }
    
}