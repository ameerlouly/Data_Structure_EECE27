#include <iostream>

using namespace std;

void bin(int x[], int n);
int i = 0;

int main()
{
	int x; int binary[64];
    
	cout << "enter the number to convert to binary " << endl;
	cin >> x;

	bin(binary, x);

	cout << "binary number is \n";

	for (int j = i-1; j >= 0; j--)
		cout << binary[j]<<" ";
	return 0;
}

void bin(int x[], int n)
{
	if (n == 0)
		return ;
	else
	{
		 x[i]=n % 2 ;
		 i++;
		return bin(x, n / 2);
	}
}