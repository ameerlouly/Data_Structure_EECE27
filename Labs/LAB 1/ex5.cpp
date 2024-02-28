// counting letter grades using while, switch and multiple cases
#include <iostream>
using namespace std;
int main()
{
int E;
char grade;
int aCount = 0, bCount = 0, cCount = 0, dCount = 0, eCount = 0, fCount = 0;

    cout << aCount <<" " << bCount <<" "<< cCount <<" "<< dCount <<" "<< eCount <<" "<< fCount << endl;
    cout <<"Enter the E: ";
    cin >> E;
    cout <<" E FALSE to end input.\n";
    cout <<"Enter the letter grades. \n";

    while (E)
    {
    cin >> grade;
        // switch nested in while
        switch(grade)
        {
            // grade was uppercase A or lowercase a
            case 'A': case 'a':
            ++aCount; break;
            // grade was uppercase B or lowercase b
            case 'B': case 'b':
            ++bCount; break;
            // grade was uppercase C or lowercase c
            case 'C': case 'c':
            ++cCount; break;
            // grade was uppercase D or lowercase d
            case 'D': case 'd':
            ++dCount; break;
            // grade was uppercase E or lowercase e
            case 'E': case 'e':
            ++eCount; break;
            // grade was uppercase F or lowercase f
            case 'F': case 'f':
            ++fCount; break;
            // ignore these input
            default:{cout<<"Incorrect letter grade entered.\n"; cout<<"Enter a new grade.\n";}
        }
    cout <<"Enter the E: ";
    cin >> E;
    } // do the counting...
    cout << "\nTotals for each letter grade are:\n";
    cout << "A:" << aCount << endl;
    cout << "B:" << bCount << endl;
    cout << "C:" << cCount << endl;
    cout << "D:" << dCount << endl;
    cout << "E:" << eCount << endl;
    cout << "F:" << fCount << endl;
return 0;
}
