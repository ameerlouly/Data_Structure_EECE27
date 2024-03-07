#include <iostream>

using namespace std;

void myFunction ();     // a function prototype

int x = 5, y = 7;   // a global scope variables
int main()
{
    cout<<"x = 5, y = 7, global scope\n";
    cout<<"\nx within main: "<<x<<"\n";
    cout<<"y within main: "<<y<<"\n\n";
    cout<<"Then function call....\n";

    myFunction();

    cout<< "Back from myFunction...\n\n";
    cout<< "x within main again: "<<x<<"\n";
    cout<< "y within main again: "<<y<<"\n\n";
    
return 0;
}

void myFunction()
{
// a local scope variable
    int y = 10;
    cout<<"\ny = 10, local scope\n"<<"\n";
    cout<<"x within myFunction: "<<x<<"\n";
    cout<<"y within myFunction: "<<y<<"\n\n";
}