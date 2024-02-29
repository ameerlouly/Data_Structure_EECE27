#include<iostream>

using namespace std;

int i=0;

void fun()
{
    cout << "hello\n";
    i++;
}

int main()
{
    fun();

    fun();

    fun();

    cout << i ; // this is the answer  
return 0;
}