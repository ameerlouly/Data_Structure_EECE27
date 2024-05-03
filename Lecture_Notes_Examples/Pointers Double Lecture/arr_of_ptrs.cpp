#include <iostream>

using namespace std;

int main()
{
        /* ARRAY OF POINTER*/
int a[3][4]; int *p [3];

for (int i = 0; i < 3; i++)
    {
        p[i] = a[i];              //Pointer P points to each row in 2D array a

    for(int j = 0; j < 4; j++)
        {a[i][j] = i + 2*j;   cout << *(p[i] + j);}
        cout << endl;
    }

    cout << endl << endl;

/////////////////////////////////////////////////////////////////////
        /* Array of Pointer and String*/
// using array of characters


// using class

string str[4] = {"ameer","ahmed","ziad","Naemat"};

    string *sptr = str; //Pointer points to str array of strings





}
