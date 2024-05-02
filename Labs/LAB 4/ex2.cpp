#include <iostream>

using namespace std;

struct fract
{
    int nom, denom;
};

float multiply(fract a, fract b)
{
    float nom_prod = a.nom * b.nom;
    float denom_prod = a.denom * b.denom;

    return nom_prod / denom_prod;
}

int main()
{
    fract num1, num2;

    cout << "Enter First Fraction:\n";
    cin >> num1.nom >> num1.denom;

    cout << "Enter Second Fraction:\n";
    cin >> num2.nom >> num2.denom;

    cout << "Multiply = " << multiply(num1, num2);
}