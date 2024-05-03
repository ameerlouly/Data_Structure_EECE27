#include <iostream>

using namespace std;

class example
{
    int a;

    public:
        example(int n){ a = n; }    //onstructor function with parameters
        int get_a(){ return a; }
};

int main()
{
    example test(-1);   //give the constructor parameters here
    example test2(11);

    cout << test.get_a() << " " << test2.get_a() << endl;
}
