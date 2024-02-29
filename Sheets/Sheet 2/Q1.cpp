#include <iostream>

using namespace std;

void fun(int &i)
{
    cout << "hello\n";
    i++;
}

int main()
{
    int temp=0;
    fun(temp);

    fun(temp);

    fun(temp);

    cout << temp ; // this is the answer  


return 0;
}