#include <iostream>
#include <cstring>

using namespace std;

struct student
{
    string name;
    int number, dep;
    float score;
};

void display_details(student someone);

int main()
{
    student me; student you;

    me.number= 10;
    me.name = "Ahmed";
    me.dep = 1;
    me.score= 88;
    display_details(me);

    cin>>you.name;
    cin>>you.number;
    cin>>you.dep;
    cin>>you.score;
    display_details ( you);
}

void display_details ( student someone)
{
    cout << "Name : " << someone.name << endl;
    cout << "departement : ";
    switch (someone.dep)
    {
    case 1 : cout << " Communication "; break;
    case 2 : cout << " Compuuter"; break;
    case 3 : cout << " Medical Engineering"; break;
    case 4 : cout<< " Electrical Power"; break;

    default : cout << "Unknown";
    }

    cout << endl;
    cout <<" Grade ";
    if(someone.score < 50)cout<<" Fail "<< endl;
    if(someone.score >= 50 && someone.score<65)cout<<" Accept"<< endl;
    if(someone.score >= 65 && someone.score<75)cout<<" Good"<< endl;
    if(someone.score >= 75 && someone.score<85)cout<<" Very good"<< endl;
    if(someone.score >= 85)cout<<" Excellent "<< endl;
}