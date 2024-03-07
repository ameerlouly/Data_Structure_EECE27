#include<iostream>
using namespace std;


void change(int,int);   // call by value
int main()
{
    int a,b;

    cout<<"Enter values for a and b \n";
    cin>>a>>b;

    change(a,b);

    cout<<"\n The values of a and b after executing the function :";
    cout<<a<<" "<<b;
return 0 ;
}

void change(int c, int d)
{
    c=c*10;
    d=d+8;
    cout<<"\n The values of a and b inside the function : "<<c<<" "<<d;
}