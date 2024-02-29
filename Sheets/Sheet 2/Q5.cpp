#include <iostream>
using namespace std;

void dec_t0_bin(int NUM)
{

	int i = 0;
	int binarynum[64];
	while (NUM > 0)

	{
		// STORING REMINDER IN BINARY
		binarynum[i] = NUM % 2;
		NUM = NUM / 2;
		i++;
	}
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