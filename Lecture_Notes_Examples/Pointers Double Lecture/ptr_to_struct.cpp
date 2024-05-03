#include <iostream>
#include <cmath>
using namespace std;

struct student{
string name;
int age;
};

struct coord {int x; int y;};
float getdist(struct coord *X, struct coord *Y)
{
    int x_diff = X->x - Y->x;
    int y_diff = X->y - Y->y;
    float distance = sqrt(x_diff*x_diff + y_diff*y_diff);
    return distance;
}

int main()
{
        /*POINTER TO STRUCTURE OBJECTS*/
student st1, st2;   //declare objects of students

student *p1, *p2;   //declare pointer to strcuture

p1 = &st1;  p2 = &st2;  //pointer point to objeccts

st1.age = 5; /*equavlent to*/ p1->age = 5;  //we use -> operator when dealing with members of objects through pointers

coord a = {2, 3};
coord b = {3, 4};

cout << getdist(&a, &b);

}
