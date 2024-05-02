// the following program get the values of alphabet characters
#include <string>
#include <iostream>

using namespace std;

int main()
{
    char a = 'a';
    int x,y;
    char b = 'A';

    for(int i = 0; i < 50; i++)
    {
        x = a;
        y = b;
        cout << " " << a << " " << x << " " << b << " " << y << endl;
        a++;
        b++;
    }

    return 0;
}