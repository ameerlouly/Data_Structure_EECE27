#include "linkedList.h"
#include <assert.h>
#include <iostream>

using namespace std;

linkedList::linkedList()
{
    head = 0;
    tail = 0;
    current = 0;
}

void linkedList::insert(const elemtype &e)
{
    link addnode(new node); //Dynamic memory allocation of a node
    assert(addnode);    // checks if there is enough memory for node
    addnode->elem = e;
    
    if(head == 0)
        head = addnode;
    else
        tail->next = addnode;

    addnode->next = 0;
    tail = addnode;
}

bool linkedList::first(elemtype &e)
{
    if(head == 0)
        return false;
    else
    {
        e = head->elem;
        current = head;
        return true;
    }
}

bool linkedList::next(elemtype &e)
{
    assert(current); //for proper use current should be nonzero

    if(current == tail)
        return false;
    {
        current = current->next;
        e = current->elem;
        return true;
    }
}

void linkedList::print_list()
{
    current = head;
    cout << current->elem << " ";

    while(current->next)
    {
        current = current->next;
        cout << current->elem << " ";
    }

    cout << endl;
}

int linkedList::search(const elemtype &e)
{
    int n = 1;
    current = head;
    while(current->next)
    {
        if(current->elem == e)
            return n;
        n++;
        current = current->next;
    }
    if(current->elem == e)
            return n;
    return -1;
}

int search_list(linkedList l1, elemtype &e)
{
    elemtype x;
    int n = 1;

    bool notempty = l1.first(x);
    while(notempty)
        if(x == e)
            return n;
        else
            {
                n++;
                notempty = l1.next(x);
            }
    return -1;

}

int linkedList::count_node()
{
    int n = 1;
    if(head == 0)   return 0;
    current = head;
    while(current->next)
    {
        n++;
        current = current->next;
    }
    return n;
}

bool linkedList::remove(const elemtype &e)
{
    if(head->elem == e)
    {
        current = head->next;
        delete head;
        head = current;
        return true;
    }

    link p;
    current = head;
    while(current->next->elem != e && current->next)
        current = current->next;

    if(current->next == 0)
        return false;
    p = current->next;
    current->next = p->next;
    delete p;
    return true;
}