#include "matrix.h"
#include <iostream>

using namespace std;

MATRIX::MATRIX(int a, int b)    //Constructor
    {
        r = a;
        c = b;
        for(int i = 0; i < r; i++)  //Intializes the matrix with all zeros
        {
            for(int j = 0; j < c; j++)
                data[i][j] = 0;
        }
    }

    
void MATRIX::insert(int e, int i, int j)
{
    data[i][j] = e;
}

int MATRIX::get(int i, int j)
{
    return data[i][j];
}

void MATRIX::display()
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cout << data[i][j] << " ";
        cout << endl;
    }
}

bool MATRIX::add(MATRIX b)
{
    if(r != b.r || c != b.c)
        return false;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            data[i][j] += b.data[i][j];
    }
    return true;
}

bool MATRIX::subtract(MATRIX b)
{
    if(r != b.r || c != b.c)
        return false;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            data[i][j] -= b.data[i][j];
    }
    return true;
}

MATRIX MATRIX::multiply(MATRIX b)
{
    MATRIX C(r, b.c);

    if(c != b.r)
        return C;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < b.c; j++)
        {
            for(int x = 0; x < c; x++)
                C.data[i][j] += data[i][x] * b.data[j][x];
        }
    }
    return C;
}