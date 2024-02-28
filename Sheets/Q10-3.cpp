#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, sum=2;
	int n;
	cin >> x >> n;
	cout << endl;
	for (int i = 1; i <= n-1; i++) // n-1 since sum intial value is = 2
	{
		sum = sum + (pow(x, i) + pow(i, 2));
	}
	cout << sum;
	return 0;
}