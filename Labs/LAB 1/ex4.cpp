#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 1, k = 1;

    label:  //Start of Labelt Statement

    cout<< i << " " << j << " " << k << endl;
    j *= i; //j = j * i
    k *= 2*i; // k = k * (2 * i)
    i++;
    cout<< i << " " << j << " " << k << endl;

    if(j > 20 || k > 40)
        cout << "goto is not used "<< endl << i <<" "<< j << " " << k << endl;
    else
    {
        cout << "goto is used " << endl;
        goto label;
    }
}
