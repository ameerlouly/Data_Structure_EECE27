#include<iostream>

using namespace std;

int combination(int n, int p)
{
    if(n==p)
        { return 1;}

    else if(p==1)
        {return n;}

    else if(n>p && p > 1)
        {return combination(n - 1, p - 1) + combination(n-1,p);}

    else
        return 0;

}
int main()
{
        int n ,p ,sum;
        cin >> n >> p;
        sum = combination(n, p);
        cout << sum;
    return 0;
}