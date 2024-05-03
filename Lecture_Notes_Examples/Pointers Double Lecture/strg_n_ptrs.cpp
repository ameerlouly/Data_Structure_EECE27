#include <iostream>

using namespace std;

int main()
{
    char *c;
    char st[20] = "C++ Exam";
    //c = &st; ERROR
    c = st; //pointer points to string
    cout << *st << endl;    //Prints first member in string
    cout << *(st + 2) << endl;  //prints third element in string;
    cout << st << endl; //print entire string

    for (int i = 0; i < 8; i++)
        cout << st[i] << endl;  //Print string char by char

    cout << c << endl; //Same as cout << st; prints entire string

    for (int i = 0; i < 8; i++)
        cout << (c + i) << endl;    //prints entire array starting from member i

    //To Print address we use (int *)c

    cout << (int *)c << endl; //Type casting
    for (int i = 0; i < 8; i++)
        cout << (int *)(st + i) << endl << endl << endl;    //or (c + i)

//////////////////////////////////////////////////////////////////////////////////////
                        /* Using Class String*/

    string str; //class string
    string *sptr;  //pointer to string

    // s = st; ERROR
    sptr = &str; //Pointer is pointing to string str Acceptable
    str = "Ameer";
    cout << sptr << endl;
    cout << &str << endl;   //prints string address of the first character, same address both lines
    //Each character in string class requires more bytes, typically 4 bytes, but dfferent according to compiler






}
