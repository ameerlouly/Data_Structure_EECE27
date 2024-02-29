#include <iostream>
#include <cmath>

using namespace std;

void prime(int n);
int main()
{
	int n;
	cin >> n;
	prime(n);
	return 0;
}

void prime(int n)
{
	for (int k = 2; k <= n; k++)
	{
		bool prime_state = 1;
		for (int i = sqrt(k); i > 1; i--)
		{
			if (k % i == 0)
			{
				prime_state = 0;
				break;
			}
		}
		if (prime_state) cout << k << " is prime"<<endl;
	}
}

