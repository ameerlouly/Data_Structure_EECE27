#include <iostream>

using namespace std;

int main()
{
	int sum,num2 ;
	for (int num1=1; num1<= 5000; num1++) //N.B: 5000 because adding any num after will make the sum >10000
											
	{
		sum = num1;		//first number of the sum
		num2 = num1;	// last number that will be added to make sum =10000
		for (int k=num2;k<=5000;k++)	// there sould be 2 loops because SO loop 1 increase the starting number and loop 2 adds number to the sum 
		{
			num2 = num2 + 1;
			sum = sum + num2;
			if (sum == 10000)
				cout << num1 << "  " << num2 << endl;
		}
	}
	
return 0;
}