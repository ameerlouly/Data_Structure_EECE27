#include <iostream>

using namespace std;

float value(float *p1, float *p2) //function takes pointer parameters, NOTE: This functions is call by value
{return *p1**p2;}   //must use * operator forr working with values of pointers

void cub_1(int *n)      //this function is call by value, cuz it sends the address of a variable to a pointer in the Functions
{*n = *n * *n * *n;}    //Use * cuz dealing with pointers

void cub_2(int &n) //Call by refrence
{n = n * n * n;}

int * fun()         //function returns pointer (Returns address)
{int *x; int y = 10; x = &y; return x;}

int fun_2(int *x){*x = 30;} //functions returns interger

int main()
{
    int n = 2;
    float k1 = 10, k2 = 20;
    float *p1 = &k1;
    float *p2 = &k2;
    cout << value(p1, p2) << endl; //send pointers to functions
    cub_1(&n);
    cout << n << endl;
    n = 2; cub_2(n);
    cout << n << endl;


}
