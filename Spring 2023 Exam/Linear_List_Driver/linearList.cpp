#include "linearList.h"
#include <assert.h>

linearList::linearList()
{
    number = 0;
    current = -1;
}

void linearList::insert(const elemtype &e)
{
    assert(number < max_size);
    listarray[number] = e;
    number++;
}

bool linearList::first(elemtype &e)
{
    if(number == 0)
        return false;

    current = 0;
    e = listarray[current];

    return true;
}

bool linearList::next(elemtype &e)
{
    assert(current >= 0);

    if(current >= number - 1)
        return false;

    current++;
    e = listarray[current];
    return true;
}