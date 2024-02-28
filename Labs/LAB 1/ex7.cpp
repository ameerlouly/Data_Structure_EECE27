#include <iostream>

using namespace std;

int main()
{
int x;
cout << "Enter Mark is Percentage\n";
label:
cin >> x;
        if(x >= 0 && x < 50) cout << "F";
        else if(x >= 50 && x < 60) cout << "C";
        else if(x >= 60 && x < 70) cout << "B";
        else if(x >= 70 && x < 80) cout << "B+";
        else if(x >= 80 && x < 90) cout << "A";
        else if(x >= 90 && x <= 100) cout << "A+";
        else
        {
        cout <<"Please enter number between 0 and 100\n";
        goto label;
        }

}
