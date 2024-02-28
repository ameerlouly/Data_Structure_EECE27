#include <iostream>

using namespace std;

int main()
{
	int n; //number of terms
	double sum=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + (1/pow(i,2));
	}
	cout << sum;
	return 0;
}