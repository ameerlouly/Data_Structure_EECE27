#include <iostream>

using namespace std;

//INFINITE LOOP

int main()
{
	int j;
	int n = 10;

	for (int i = 0; i < n; i++)
	{
		j = i + 2;
		while (j > n)
		{
			cout << "Hello";
			j = j + 2;
		}
	}
}