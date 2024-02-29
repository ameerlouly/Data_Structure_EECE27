#include<iostream>

using namespace std;

double POWER_FUN(double num, int p)
{
	double result = 1;
	for (int i = 1; i <= p; i++)
	{
		result *= num;
	}
	return  result;
}

int main()
{
	double NUM , CALC;
	int POW;
	cout << "enter the number : "; 
	cin >> NUM;
	cout << "\nenter the power : ";
	cin >> POW ;
	 
	CALC = POWER_FUN(NUM, POW);
	cout << "the result is : " << CALC;
	return 0;
}