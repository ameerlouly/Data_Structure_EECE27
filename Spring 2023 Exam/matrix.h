#ifndef MATRIX_H
#define MATRIX_H

//Question 1

class MATRIX
{
    int r, c;
    int data[100][100];

    public:

    MATRIX(int a, int b);   //Constructor
    void insert(int e, int i, int j);
    int get(int i , int j);
    void display();
    bool add(MATRIX b); //does A + B and stores it in A
    bool subtract(MATRIX b);    //does A - B and stores it in A
    MATRIX multiply(MATRIX b);    //does A * B and returns a matrix C with the result

};

#endif //MATRIX_H