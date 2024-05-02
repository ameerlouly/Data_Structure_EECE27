#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string st;

    st="the first string";
    
    string *ss;

    cout << " address of string st " << &st << endl;
    cout << " the string st= " << ss << endl;   //Prints Garbage Data

    // ss=st; //eror

    ss = &st;
    cout << " address after pointing to string st " << ss << endl;

    for(int i=0; i<10;i++)
        cout<< (ss+i)<<endl;

    for(int i=0; i<10;i++)
        cout<< st[i]<<endl;
}