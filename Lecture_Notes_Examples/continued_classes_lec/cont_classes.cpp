#include <iostream>

using namespace std;

        /* CONTINUED CLASSES*/

//EXAMPLES FOR REVISION
class example
{
    private:    //if not written anything written here is considered private
    //Code and stuff

    public:
    //code and stuff
};

class test
{
    private:
    int data1; float data2; //private variables

    public:
        int b;  //public variables
        void function1();   //class function prototypes
        float function2();
};

void test::function1()  //if a function is small define it inside the class, if big define it outside
{
    data1 = 2;
    b = 10;
    cout << b << endl;
}


int main()
{
    test obj;   //Creating an object from the class
    //test.function1(); //error
    obj.function1();   //calling a function from a class
}
