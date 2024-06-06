#include <iostream>
#include "linkedList.h"

using namespace std;

int main()
{
    linkedList l1;
    for(int i = 0; i < 10; i++)
        l1.insert(i * 5);
    l1.display();
    l1.insert_before(999, 5);
    l1.display();
}

