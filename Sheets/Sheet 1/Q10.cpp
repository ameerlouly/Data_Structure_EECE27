#include <iostream>

using namespace std;

int main()
{
	for (int line = 1; line <= 20; line++)
	{
		for (int num = 1; num <= line; num++)
		{
			cout << num << " ";
		}
		cout << endl;
	}
	return 0;
}