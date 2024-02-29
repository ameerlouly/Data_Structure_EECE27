#include<iostream>

using namespace std;

int main()
{
	int max, min,location_max, location_min; int arr[10];
	cout << "enter 10 numbers\n";
	for (int i = 0; i < 10; i++)
		cin >> arr[i];
	max = arr[0];			//to make sure that the min/max are in the array
	min = arr[0];			//the initialization shouldn't be inside the loob so their value does not cahnge each loob
	for (int i = 1; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			location_max = i;
		}
		else if (min > arr[i])
		{
			min = arr[i];
			location_min = i;
		}
	}
	cout << "max number is " << max << " and its location is " << location_max << endl << "min number is " << min << " and its location is " << location_min;
	return 0;
}
