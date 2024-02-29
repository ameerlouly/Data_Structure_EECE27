#include <iostream>

using namespace std;

int main()
{
	char x;

	cin >> x;

	int n = x - 'A';
	char char1 = 'A';
    
	for (int k = 0; k <= n; k++)
	{
		for (int j=k; j <= n; j++)
		{
			cout << " ";
		}
		for (int i = 0; i <= k; i++)
		{
			cout << char(char1+i);
		}
		for (int i = k-1; i >= 0; i--)
		{
			cout << char(char1+i);
		}
		cout << endl;
	}

	return 0;
}