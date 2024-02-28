#include <iostream>

using namespace std;

int main()
{
	int year=0, a = 1000;
	double b = 1000;
	while (b <= a)
	{
		year += 1;
		a +=100; b =b+ b*0.05;
	}
	cout << year;
return 0;
}