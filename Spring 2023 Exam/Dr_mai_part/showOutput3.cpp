#include <iostream>

using namespace std;

int *fun(int *p, int *q)
{
    cout << "Start Fun\n";
    (*p)++;
    cout << p << endl << *p << endl;
    p++;
    cout << p << endl << *p << endl;
    q = p;
    return q;
}

int main()
{
    int k1 = 5, k2 = 7;
    //K1 address 0x0014, K2 address 0x0010;
    int *prt = &k1;
    //int
}