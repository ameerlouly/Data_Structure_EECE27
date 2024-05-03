#include <iostream>

using namespace std;

int main()
{
    /* ARRAY & POINTERS */

    int p[5] = {1, 2, 3, 4, 5};

    cout << p << endl; //Prints array address, name of the array is a pointer to the first element in the arr
   int *ptr;
    //ptr = &p;  ERROR!
    ptr = p; //Correct
    ptr = &p[0]; //Correct

    for(int i =0; i < 5; i++)
        cout << *(ptr + i) << " ";    //print array using pointer to array

        cout << endl;

    for(int i =0; i < 5; i++)
        cout << *(p + i) << " ";    //prints array using its name

        cout << endl;

    for(int i =0; i < 5; i++)
        cout << (ptr + i) << " ";   //printer array address, do the same with p instead of ptr

    cout << endl;

    //You can assing value to array using its name as a pointer
    //Ex.

    *(p + 1) = 30; //assigns 30 to the second member of the array

    for(int i =0; i < 5; i++)
        cout << *(ptr + i) << " ";  //prints array to see the change

        cout << endl;

        //p++ ERROR, Because p is the name of array and must point to the first member at all times


}
