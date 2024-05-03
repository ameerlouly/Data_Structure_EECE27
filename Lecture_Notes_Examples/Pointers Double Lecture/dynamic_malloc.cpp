#include <iostream>

using namespace std;

int main()
{
int x[10];  //Static malloc
//Allocations 10*sizeof(int) bytes of memory, 40 Bytes

//NEW KEYWORDS

// new - creating contrusctors retunrs pointer of correct type
// delete - destroys contructor and frees space, de-allocates memory

int *p = new int;     //Dynamic Memory space allocated in heap memory
int x1;
//p = &x    //P stops pointing to data space allocated before
*p = 50;    //puts 50 in dynamically alloccated space
//to refer to the memory space we use the pointer name

cout << p << endl << *p << endl;

delete p; //empties dynamic space

cout << *p; //prints garbage or zero or error;

//NOTE: Cant's use delete if p is pointing to statically allocated var

////////////////////////////////////////////////////////////////////

                    /* USING POINTERS */

    int *arrptr = new int[10];  //Creates 10 locations in memory for array, linked lists dont create unless needed
    //similar to previosuly we deal with it using pointer name

    delete []ptr; //to delete array dynamic memory
}
