#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int nValue = 7;
    int nOtherValue = 3;
    int *pnPtr = &nValue;
    
    cout << &nValue << endl;
    cout << nValue << endl; cout << pnPtr << endl;
    cout << *pnPtr << endl; cout << endl;

    *pnPtr = 9; cout << &nValue << endl;

    cout << nValue << endl; 
    cout << pnPtr << endl;
    cout << *pnPtr << endl;
    cout << endl;

    pnPtr = &nOtherValue;
    
    cout << &nOtherValue << endl;
    cout << nOtherValue << endl;
    cout << pnPtr << endl;
    cout << *pnPtr << endl;
    cout << endl;
    cout << sizeof(pnPtr) << endl;
    cout << sizeof(*pnPtr) << endl;
}