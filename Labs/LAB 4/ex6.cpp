#include<iostream>
#include<cstring>

using namespace std;

struct student
{
    int number;
    string name_1;
    string name_2;
};

int main()
{
    // declare the struct type variables
    cout<<" start "<<endl;
    student p, *SPtr;

    cout << " size of structure " << sizeof(p) << endl;
    p.number=1;
    p.name_1 = "Ahmed";
    p.name_2 = " Abdelrahman";
    
    SPtr = &p;
    cout << " pointer " << SPtr << endl;
    cout << "Accessing structure element:\n";
    cout << " SPtr->number = " << SPtr->number << endl;
    cout << "\n\'SPtr->name_1\' = " << SPtr->name_1 << endl;
    cout << "\'SPtr->name_2\' = " << SPtr->name_2 << endl;
}