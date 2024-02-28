#include <iostream>

using namespace std;

int main()
{
	float R, T;   //R:salary - T:taxes
	for (int i = 1; i <= 100; i++)
	{
		cout << "enter your salary ";
		cin >> R;
		cout << endl;
		if (R <= 2000)
			T = 0;
		else if (2000<R&&R<=4000)
			T = 0.1*R;
		else
			T = 0.2*R;
			cout << "your taxes is " << T << " your net salary is " << R-T<<endl;		
	}
	return 0;
}