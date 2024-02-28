#include <iostream>

using namespace std;

int main()
{
	float sum = 0, x;
	cout << "enter a number ";
	cin >> x;
	while (x != 0)
	{
		sum += x;
		cout << "sum = " << sum<<endl;
		cout << "enter a number ";
		cin >> x;
		
	}
	return 0;
}