#include <iostream>

using namespace std;

float triangle_area (float base, float height)
{
float area;
area = (0.5 * base * height);
return area;
}

int main()
{
float b, h, a;
b = 4;
h = 6;
a = triangle_area(b, h);

cout<<"Area = (0.5*base*height)"<<endl;
cout<<"where, base = 4, height = 6"<<endl;

// compiler will substitute the inline function code.

cout<<"Area = "<<a<<endl;

return 0;
}