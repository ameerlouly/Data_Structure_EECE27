#include <iostream>

using namespace std;

int main()
{
	int x; int binary[64]; int i = 0;

	cout << "enter the number to convert to binary " << endl;
	cin >> x;

	for (i; x != 0; i++)
	{
		binary[i] = x % 2;
		x = x / 2;
	}

	cout << "binary number is ";

	for (int j = i-1; j >=0; j--)
		cout << binary[j] << " ";
	return 0;
}