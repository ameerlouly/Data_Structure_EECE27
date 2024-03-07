#include<iostream>

using namespace std;

int fibononacci(int n)
{

    if(n==1 || n==0)
    {
        return n;
    }
    else if (n>1)
    {
        return fibononacci(n-1)+fibononacci(n-2);
    }
}

int main()
{
    int i;
    cin>> i;
    cout << fibononacci(i);

return 0;
}
