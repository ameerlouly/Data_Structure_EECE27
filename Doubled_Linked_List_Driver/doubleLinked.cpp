#include "doubleLinked.h"
#include <iostream>
#include <assert.h>

using namespace std;

doubleLinked::doubleLinked() //constructor intializes the List
{
    head = 0; current = 0;
}

doubleLinked::~doubleLinked()
{
    current = head;
    while(head)
    {
        current = head;
        head = head->next;
        delete current;
    }
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

int doubleLinked::search(const elemtype &e)
{
    int n = 1;
    if(head->elem == e)
        return n;
    current = head;
    while(current->next)
    {
        current = current->next;
        n++;
        if(current->elem == e)
            return n;
    }
    return -1;
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

    current = head;
    while((current->next->elem != e) && (current->next))
        current = current->next;
    if(current->next == 0)
        return false;

    temp = current->next;
    current->next = temp->next;
    if(current->next)   //checks if the current is the last node in the list
        current->next->prev = current;
    delete temp;
    return true;  
}

void doubleLinked::insert_before(const elemtype &e, int n)
{
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
        current = head;
        for(int i = 1; i < n; i++)
        {
            if(current->next == 0)
                break;
            current = current->next;
        }

        add->prev = current->prev;
        if(current->prev) //checks if current is the first node
            current->prev->next = add;

        add->next = current;
        current->prev = add;
    }
}

bool doubleLinked::remove_index(int n)
{
    link temp;

    if(head == 0)
     return false;

    current = head;
    for(int i = 1; i < n - 1; i++)
        {
            if(current->next == 0)
                return false;
            current = current->next;
        }
    temp = current->next;
    current->next = temp->next;
    if(temp->next != 0)
        temp->next->prev = current;
    delete temp;
    return true;
}

void doubleLinked::display()
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