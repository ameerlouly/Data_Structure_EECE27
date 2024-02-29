#include<iostream>

using namespace std;

int fact(int num)
{
	int i = num, factorial = 1;
	if (num == 1) return 1;
	else
	{
		factorial *= num;
	}


	return factorial * fact(num - 1);

}

void print_fact()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << fact(i) <<"\n";

	}
}

int main()
{
	print_fact();

	return 0;
}
