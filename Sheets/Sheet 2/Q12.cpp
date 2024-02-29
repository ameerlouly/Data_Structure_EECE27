#include<iostream>

using namespace std;

int Fibonacci(int n)
{

    if(n==1 || n==0)
    {
        return n;
    }
    else if (n>1)
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}

int main()
{
    int i;
    cin>> i;
    cout << Fibonacci(i);

return 0;
}
