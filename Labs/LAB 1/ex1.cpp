#include <iostream>

using namespace std;

int main()
{
    int i, j, r;
    cin >> r;
    for(i = 1; i <= r; i++)
    {
        for(j = 1;  j <= r - i; j++)
        cout << " ";

        for(j = 1; j <= 2*i - 1; j++)
        cout << "$";

        cout <<"\n";
    }

}
