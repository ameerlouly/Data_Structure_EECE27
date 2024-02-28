#include <iostream>

using namespace std;

int main()
{
	int x,y;
	cout << "enter two numbers"<<endl;
		cin >> x>>y;
		int sum = 0;
		for (x; x <= y; x++)
		{
			sum += x;
		}
		cout << "sum = " << sum;
	return 0;
}