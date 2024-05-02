#include <iostream>

using namespace std;

struct dist
{
    int cm, m, km;
};

void readData(dist *x)
{
    cout << "Enter Lenghts (cm, m, km): ";
    cin >> x->cm >> x->m >> x->km;
}

dist calc_dist(dist a, dist b)
{
    dist l3;

    l3.cm = a.cm + b.cm;
    l3.m = a.m + b.m;

    if (l3.cm >= 100)
        {
            l3.m++;
            l3.cm -=100;
        }

    l3.km = a.km + b.km;

    if (l3.m >= 1000)
        {
            l3.km++;
            l3.m -= 1000;
        }
    
    return l3;
}

void dispData(dist a)
{
    cout << a.cm << " " << a.m << " " << a.km << endl;
}

int main()
{
    dist l1, l2, l3;
    dist *p1 = &l1;
    readData(p1);

    p1 = &l2;
    readData(p1);

    l3 = calc_dist(l2, l1);
    dispData(l3);
}