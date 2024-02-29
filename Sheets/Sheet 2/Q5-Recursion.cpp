#include <iostream>

using namespace std;

int k = 0;			//k and binarynum should be outside the function because as function loobs it self
int binarynum[64];  // they gain a rondom value because the are declered once again

void dec_t0_bin(int NUM)
{
	if (NUM != 0)
	{
		binarynum[k] = NUM % 2;
		k++;
		return dec_t0_bin(NUM / 2);
	}
	int i = k;
	for (int j = i - 1; j >= 0; j--)
	{
		cout << binarynum[j] << " ";
	}
}

int main()
{
	int num;
	cout << "enter the decimal num : ";
	cin >> num;
	dec_t0_bin(num);
	return 0;
}