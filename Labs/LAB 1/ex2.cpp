#include <iostream>

using namespace std;

int main()
{
int x, y=0;

    for (x = 1; x <= 10; x++)
    {
        y += 2*x;
        if (x > 5 && y > 20)
        break;
        cout << "X = " << x <<" Y = "<< y << endl;
    }

    printf("Broke out of loop at X = %d and Y = %d", x, y);

}
