/*
Pointers Lecture
3/4/2024
Dr. Naemat AbdelKader
*/
#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int *y, *z;
    y = &x;
    z = y;
    y++;

    cout << x << endl;
    cout << &x << endl;

    cout << endl;

    cout << y << endl;
    cout << &y << endl;
    cout << *y << endl;

    cout << endl;

    cout << z << endl;
    cout << &z << endl;
    cout << *z;

    cout << "\n\n\n";

    char *ptr = "I'm Ameer";

    cout << *ptr << " ,  " << ptr << " , " << &ptr << "\n\n";

    //string *peter = "Hello World!"; //error
}
