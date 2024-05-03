#include <iostream>

using namespace std;

class vctr
{
    int a[100], siz = 0;

    public: vctr();
    void insrt(int , int);
    void print();
    void add(vctr b); //argument is object of class
    void add2(vctr l1, vctr l2);
};

vctr::vctr(){cout << "New" << endl;}    //constructor
void vctr::insrt(int index, int val){ a[index] = val; siz++;}
void vctr::print()
{
    for(int i = 0; i < siz; i++)
        cout << a[i] << endl;
        cout << endl;
}
void vctr::add(vctr b)
{
    for(int i = 0 ; i < siz; i++)
        a[i] += b.a[i];
}

void vctr::add2(vctr l1, vctr l2)
{
    for(int i = 0; i < siz; i++)
        a[i] = l1.a[i] + l2.a[i];
}

int main()
{
    vctr l1, l2, l3;

    l1.insrt(0, 11); l1.insrt(1, 12); l1.insrt(2, 13);
    l1.print();
    l2.insrt(0, 10); l2.insrt(1, 3);  l2.insrt(2, 5);
    l2.print();

    l1.add(l2);
    l1.print();
    l2.print();

    l3.add2(l1, l2);
    l3.print();
}
