#include <iostream>

using namespace std;

//FUNCTION IS A RECURSIVE FUNCTION THAT REVERESES NUMBERS
// OUTPUT: 132001

int unknown_function(int n, int temp2 = 0, int temp1 = 0)
{
    if(n == 0) return temp2;

    temp1 = n % 10;
    temp2 = temp2 * 10 + temp1;
    return unknown_function(n/10, temp2);
}

int main()
{
    int n = 100231;
    cout << unknown_function(n) << endl;
}