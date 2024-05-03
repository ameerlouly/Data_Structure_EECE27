#include <iostream>

using namespace std;

//Destructor function works on the destructon of the an object
// same syntax as construct but with ~ behind the name of the class

class destruct_examp
{
    int a;

    public:
        destruct_examp(int n){ a = n; }    //onstructor function with parameters
        ~destruct_examp(){  cout << "class destroyed" << endl; }
        int get_a(){ return a; }
};

int main()
{
    destruct_examp test(-1);   //give the constructor parameters here
    destruct_examp test2(11);

    cout << test.get_a() << " " << test2.get_a() << endl;

    //Destructor works automatically as objects are destroyed automatically at the end of main

}
