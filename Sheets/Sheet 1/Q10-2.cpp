#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, sum=0;
	int n;
	cin >> x >> n;
	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		sum = sum - pow(-x,i)/i;
	}
	cout << sum;
	return 0;
}