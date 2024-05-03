#include <iostream>

using namespace std;

class test{
int q[100];
int sloc, rloc;

public:
    void init();
    void put(int);
    bool get(int &e);
};

void test::init(){sloc = rloc = 0;}
void test::put(int i)
{
    if(sloc >= 100)
    {
    cout << "array is full" << endl;
    return;
    }

    q[sloc++] = i;
}

void test::get(int &e)
{
    if(rloc == sloc) {return false;}
    e = q[rloc]; rloc++; return true;
}

int main()
{
    test obj;
    obj.init();
    obj.put(5);
}
