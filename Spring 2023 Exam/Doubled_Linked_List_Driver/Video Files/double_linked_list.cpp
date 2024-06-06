#include "double_linked_list.h"
#include <assert.h>

double_linked::double_linked()  //Constructor
{
    head = 0; current = 0;
}

bool double_linked::first(elemtype &e)
{
    if(head == 0)
        return false;
    else
    {
        current = head;
        e = current->elem;
        return true;
    }
}

bool double_linked::next(elemtype &e)
{
    assert(current); //Current should be nonzero

    if(current->next == 0)
        return false;
    else
    {
        current = current->next;
        e = current->elem;
        return true;
    }
}

bool double_linked::prev(elemtype &e)
{
    assert(current); //Current should be nonzero

    if(current->prev == 0)
        return false;
    else
    {
        current = current->prev;
        e = current->elem;
        return true;
    }
}

void double_linked::insert(const elemtype &e)
{
    link add = new node;
    assert(add);

    add->elem = e;

    if(head == 0)
    {
        head = add;
        head->prev = 0;
        head->next = 0;
    }
    else
    {
        head->prev = add;
        add->next = head;
        add->prev = 0;
        head = add;
    }
}

void double_linked::insert_end(const elemtype &e)
{
    link add = new node;
    assert(add);

    add->elem = e;

    if(head == 0)
    {
        head = add;
        head->prev = 0;
        head->next = 0;
    }
    else
    {
        current = head;
        while(current->next != 0)
            current = current->next;

        current->next = add;
        add->prev = current;
        add->next = 0;
    }
}

void double_linked::insert_after(const elemtype &e, int n)
{
    link add = new node;
    assert(add);

    add->elem = e;

    if(head == 0)
    {
        head = add;
        head->prev = 0;
        head->next = 0;
    }
    else
    {
        current = head;
        for(int i = 1; i < n; i++)
        {
            if(current->next = 0)
                break;
            current = current->next;
        }

        if(current->next != 0)
            current->next->prev = add;

        add->next = current->next;
        add->prev = current;
        current->next = add;
    }
}