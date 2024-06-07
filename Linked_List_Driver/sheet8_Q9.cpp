#include <iostream>
#include "linkedList.h"

using namespace std;

int main()
{
    linkedList l1;
    for(int i = 0; i < 10; i++)
        l1.insert(i + 1);
    l1.display();
    for(int i = 1; i <= 5; i++)
        l1.remove_index(i);
    l1.display();
}

