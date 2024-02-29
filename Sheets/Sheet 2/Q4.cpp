#include<iostream>
#include<cmath>

using namespace std;

void the_calc()
{
	double result = 0;
	for (double i = 0; i < 1; i += 0.01)
	{
		result += tan(i) - pow(cos(i), 2);
	}
	cout << result;
}

int main()
{
	the_calc();
	return 0;
}