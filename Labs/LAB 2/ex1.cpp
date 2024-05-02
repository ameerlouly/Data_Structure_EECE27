// program showing function definition, declaration, call and
// the use of the return statement

#include <iostream>

using namespace std;

float avg (float a, float b)
{
  return (a + b)/2;
}

int main ()
{
// prototypes for the function avg() that main() is going to call
float y1, y2, avgy;

y1=5.0;
y2=7.0;

avgy = avg(y1, y2);

// calling the function avg() i.e. control passes
// to avg() and the return value is assigned to avgy

cout<<"\ny1 = "<<y1<<"\ny2 = "<<y2;
cout<<"\nThe average is= "<<avgy<<endl;

return 0;
}
