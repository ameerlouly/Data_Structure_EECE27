#include <iostream>

using namespace std;

int main()
{
int x, i;
bool f = 1;

while(1)
{
label:
f = 1;
cin >> x;

if(x == 0 || x == 1) {f = 0;}
else if(x < 0) {cout <<"Please Enter Positive Number\n"; goto label;}
else
{
    for(i = x - 1; i*i >= x; i--)
    {
        if(x % i == 0)
        {
        f = 0;
        break;
        }
    }
}
    if(f)
        cout << "Prime\n";
    else
        cout << "Not Prime\n";
    }
}
