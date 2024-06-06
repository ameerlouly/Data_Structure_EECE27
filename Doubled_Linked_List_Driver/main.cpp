#include <iostream>
#include "doubleLinked.h"

using namespace std;

int main()
{
    doubleLinked L1;
    for(int i = 0; i < 10; i++)
        L1.insert_end(i * 5);

    L1.display();

    cout << L1.remove(5) << endl;
    L1.display();
    L1.remove_index(4);
    L1.display();
    
}
