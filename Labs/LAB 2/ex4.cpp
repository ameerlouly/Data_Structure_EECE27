#include <iostream>

using namespace std;

int AreaOfCube(int length, int width = 25, int height = 1); // a function prototype, width = 25 and height = 1, are default values

int main()
{ 
    int length = 100;   // assigning new values
    int width = 50;
    int height = 2;
    int area;

    area = AreaOfCube(length, width, height);
    cout<<"First time function call, area = "<<area<<"\n";
    area = AreaOfCube(length, width);    // height = 1, default value
   
    cout<<"Second time function call, area = "<<area<<"\n";
    area = AreaOfCube(length);  // width = 25, height = 1, default values
    
    cout<<"Third time function call, area = "<<area<<"\n";

return 0;
}

int AreaOfCube(int length, int width, int height)
{
    return (length * width * height);
}