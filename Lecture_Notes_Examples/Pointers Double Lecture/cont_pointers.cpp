#include <iostream>

using namespace std;

int main()
{
/*  REVISION

int *p   declare a pointer

p = &x   give p the address of x

int *p = &x last 2 steps in one line

* operator to  access value & operator to access address

p++ increments the value of the pointer with its data type size
*/

//IMPORTANT NOTE: WHY DOES POINTER NEED TO KNOW THE DATA TYPE OF WHATS IT'S POINTNING TO?
//ANSWER: To know when in the memory to end

    //CONSTANT POINTERS
    int a, b;
    int *const ptr = &a;
    *ptr = 20; //acceptable, changes the value of a
    //ptr = &b    //error, ptr is constant
    const int x = 200;  // int const and const int are both correct
    //int *p2 = &x;     // error, cannot convert constant int to int
    const int *p2 = &x; //Acceptable


    //Pointer arithmetic doesnt takne floaitng points, only intergers
}
