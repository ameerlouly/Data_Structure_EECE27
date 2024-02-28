#include <iostream>

using namespace std;

int main()
{
int i, j, k, y = 5;
float x;
    for (i = 2; i < 4; i++)
    {
    cout << "First Loop " << endl;
    cout << "i = " << i << endl;
        for (j = 2; j < 6;j += 2)
        {
            cout << "Inside second loop" << endl;
            cout << " J " << j << endl;

            k = i/j;
            x = float(i)/j;
            printf("K %d X %d\n", k, x);
            y += i + j; //y = y + i +j
            if(y < 20)
            {
                printf("Y %d\nUse Continue\n", y);
                continue;   //End of if_true
            }
            y += 2;
            printf("Continue was not used\n Y = %d\n", y);
        } //End of inner Loop
    }// End of Outer Loop

}
