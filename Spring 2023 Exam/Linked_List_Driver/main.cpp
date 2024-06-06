#include <iostream>
#include "linkedList.h"

using namespace std;

int main()
{
    linkedList l1;
    int n;
    elemtype x;
    cin >> n;

    cout << l1.count_node() << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        l1.insert(x);
    }

    // bool notempty = l1.first(x);
    // while(notempty)
    // {
    //     cout << x << " ";
    //     notempty = l1.next(x);
    // }

    // cout << endl;

    cout << l1.count_node() << endl;

    l1.print_list();
    l1.remove(30);
    l1.print_list();
}

