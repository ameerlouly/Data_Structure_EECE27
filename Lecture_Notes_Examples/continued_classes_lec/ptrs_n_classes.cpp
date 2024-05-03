#include <iostream>

using namespace std;

class rectangle
{
    int a, b;

    public:
    int c;
    void f1(){a = 20; b = 12; cout << a << " " << b << endl;};
};

int main()
{
    rectangle r1;
    rectangle *p1;  //pointer to object of class rectangle

    r1.c = 10; //c is public so this works

    p1 = &r1; //Pointer points at object r1

    p1->c = 12; //similar to pointer to structre we use -> operator to access memebrs through pointers
    p1->f1();   //same for functions
}
