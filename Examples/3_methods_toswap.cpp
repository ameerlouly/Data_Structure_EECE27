#include <iostream>

using namespace std;

int main()
{
    int i, j;
    
    cout << "Enter i then j\n";
    cin >> i >> j;

    //using extra variable
    int temp = i;
    i = j;
    j = temp;
    cout << "i = " << i << " j = " << j << endl;

    cout << "Enter i then j\n";
    cin >> i >> j;
    //using times and divide
    i = i * j;
    j = i / j;
    i = i / j;
    cout << "i = " << i << " j = " << j << endl;

    cout << "Enter i then j\n";
    cin >> i >> j;
    //using XOR
    i = i ^ j;          //the "^" operator is bitwise XOR in c++
    j = i ^ j;          //Bitwise operators deal with numbers as bits rather than integers
    i = i ^ j;
    cout << "i = " << i << " j = " << j << endl;


    //NOTE: The last 2 methods work only with numbers
    //but they are more memory effecient as they dont require extra memory
    //The Last XOR methods is considred to be the fastest

    return 0;
}
