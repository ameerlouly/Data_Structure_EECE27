#include <iostream>

using namespace std;

struct product
{
    string name;
    float price;
};

struct product addname();
// product addname();     //both prototype work, but this one might fail with older versions
void listfunc(product pnew)
{
    cout << pnew.name << endl;
    cout << pnew.price;
}

int main()
{
    product p1, p2;

    p1 = addname();
    p2 = addname();

    listfunc(p1);
    listfunc(p2);
}

product addname()
{
    product pnew;

    cout << "Name:\n";
    getline(cin, pnew.name);

    cout << "Price:\n";
    cin >> pnew.price;
    cin >> ws;

    return pnew;
}
