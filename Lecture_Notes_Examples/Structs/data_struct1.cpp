/*
* Trying codes here for the first
* Data structure lecture
*
*
*
*/
#include <iostream>
#include "stdio.h"
#include <string.h>

using namespace std;

struct EECE
{
    int id;
    string name;
    float grds[6], sum, avg;
    int num;

};

int main()
{
    struct EECE stud[3];
    for(int i = 0; i < 3; i++)
    {
        cout <<"Enter Student Name, id, number of subjects:\n";

        getline(cin >> ws, stud[i].name);
        cin >> stud[i].id;
        cin >> stud[i].num;
        stud[i].sum = 0;

        cout << "Enter Grades:\n";
            for(int j = 0; j < stud[i].num; j++)
                {
                    cin >> stud[i].grds[j];
                    stud[i].sum += stud[i].grds[j];
                }
        stud[i].avg = stud[i].sum/stud[i].num;

    }

    for(int i = 0; i < 3; i++)
    {
        cout << stud[i].name << endl;
        cout << stud[i].sum << endl;
        cout << stud[i].avg << endl;
    }
}
