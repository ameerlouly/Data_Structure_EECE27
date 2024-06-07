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

linkedList::~linkedList()
{
    current = head;
    while(head)
    {
        current = head;
        head = head->next;
        delete current;
    }
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

linkedList::link linkedList::search_link(const elemtype &e)
        {
            elemtype x;
            int n = 0;

            current = head;
            while(current->elem != e && current->next)
                current = current->next;
            if(current->elem == e)
                return current;

            return 0;
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

void linkedList::insert_before(const elemtype &e, int n)
{
    link add = new node;
    assert(add);
    add->elem = e;

    if(head == 0)
    {
        add->next = 0;
        head = add;
        return;
    }

    if(n == 1)
    {
        add->next = head;
        head = add;
        return;
    }

    link prev = head;
    current = head->next;
    for(int i = 2; i < n; i++)
    {
        if(current->next == 0)  //only works if n < size of array
            break;
        prev = current;
        current = current->next;
    }

    prev->next = add;
    add->next = current;
    
}

void linkedList::display()
{
    current = head;
    cout << head->elem << " ";
    while(current->next)
    {
        current = current->next;
        cout << current->elem << " ";
    }
    cout << endl;
}

bool linkedList::remove_index(int n)
{
    link temp;

    if(head == 0)
        return false;

    if(n == 1)
    {
        temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    current = head;
    for(int i = 1; i < n - 1; i++) //assuming index starts from 1
    {
        if(current->next == 0)
            return false;
        current = current->next;
    }

    temp = current->next;
    current->next = temp->next;
    if(current->next == 0)
        tail = current;
    delete temp;
    return true;
}