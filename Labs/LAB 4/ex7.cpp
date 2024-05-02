#include <iostream>
#define SIZE 3
using namespace std;

int getMAx(int* a)
{
    int max = *a;

    for(int i = 0; i < SIZE; i++)
        if(*(a + i) > max)
            max = *(a + i);
    return max;
}

int main()
{
    int x[3];
    int *p = x;

    cout << "Enter SIZE Numbers\n";
    for(int i = 0; i < SIZE; i++)
        cin >> *(p + i);
    cout << endl << endl;

    cout << "Printing with Variable Name:\n";
    for(int i = 0; i < SIZE; i++)
        cout << x[i] << " ";
    cout << endl << endl;

    cout << "Printing with Pointer:\n";
    for(int i = 0; i < SIZE; i++)
        cout << *(p + i) << " ";
    cout << endl << endl;

    cout << "Printing with Addresses:\n";
    for(int i = 0; i < SIZE; i++)
        cout << (p + i) << " ";
    cout << endl << endl;
    
    cout << "Max number in array: " << getMAx(x) << endl;
}