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