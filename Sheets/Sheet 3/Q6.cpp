#include <iostream>

using namespace std;

int main()
{
	int x[100]; int temp,n=0;

	cout << "enter numbers you want to arrenge and then write -0 to end\n";

	for (int i = 0; i < 100; i++)
	{
		cin >> x[i];
		n++;
		if (x[i] == -0)
			break;
	}

	cout << "arrenged numbers is\n";
    //Bubble Sort
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
            //swapping
            
			if (x[i] > x[j])
			{
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
			
		}
		cout << x[i] << " ";
	}
	return 0;
}