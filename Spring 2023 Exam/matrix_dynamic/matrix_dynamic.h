#ifndef MATRIX_DYNAMIC_H
#define MATRIX_DYNAMIC_H

class MATRIX
{
    int r, c;
    int *matrix;

    public:

    MATRIX(int, int, int arr[] = 0);
    int get(int i , int j);
    bool add(MATRIX &);
    bool subtract(MATRIX &);
    MATRIX multiply(MATRIX);
    void display();
};

#endif  //MATRIX_DYNAMIC_H