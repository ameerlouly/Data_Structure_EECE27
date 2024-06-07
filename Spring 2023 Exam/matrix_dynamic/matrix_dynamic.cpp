#include "matrix_dynamic.h"
#include <iostream>

using namespace std;

MATRIX::MATRIX(int a, int b, int arr[])
{
    r = a;
    c = b;
    matrix = new int[r * c];

    if(arr)
        for(int i = 0; i < r * c; i++)
            matrix[i] = arr[i];
    else
        for(int i = 0; i < r * c; i++)
            matrix[i] = 0;
}

int MATRIX::get(int i , int j)
{
    return matrix[i*r + j];
}

void MATRIX::display()
{
    for(int i = 0; i < r; i++)
    {
        for(int j =0; j < c; j++)
            cout << matrix[i*r + j] << " ";
        cout << endl;
    }
}

bool MATRIX::add(MATRIX &B)
{
    if(r != B.r || c != B.c)
        return false;

    for(int i = 0; i < r * c; i++)
        B.matrix[i] += matrix[i];
    return true;
}

bool MATRIX::subtract(MATRIX &B)
{
    if(r != B.r || c != B.c)
        return false;

    for(int i = 0; i < r * c; i++)
        B.matrix[i] -= matrix[i];
    return true;
}

MATRIX MATRIX::multiply(MATRIX B)
{
    if(c != B.r)
    {
        MATRIX C(0, 0);
        return C;
    }

    MATRIX C(r, B.c);
    for(int i = 0; i < r; i++)
    {    
        for(int j = 0; j < B.c; j++)
        {
            for(int x = 0; x < c; x++)
                C.matrix[i*r + j] += matrix[i*r + x] * B.matrix[x*B.r + j];
        }
    }

    return C;
}