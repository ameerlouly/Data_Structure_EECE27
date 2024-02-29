#include<iostream>
using namespace std;
int main()
{
	int mat1[10][10]; int mat2[10][10];int r1, r2, c1, c2;

	cout << "enter the first matrix dimensions (max 10x10)\n";
	cin >> r1 >> c1;
	cout << "enter the second matrix dimensions (max 10x10)\n";
	cin >> r2 >> c2;

	if (r1 != c2)
	{
		cout << "multiplication is not possible";
		return 0;
	}
	else
	{
		cout << "enter first matrix \n";
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c1; j++)
			{
				cin >> mat1[i][j];
			}
		}

		cout << "enter second matrix \n";

		for (int i = 0; i < r2; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				cin >> mat2[i][j];
			}
		}

		cout << "\nresult =\n";
        
		for (int i = 0; i < r1 ; i++)		//i is used change matrix 1 raws
		{
			for (int k = 0; k < c2; k++)	//k is used to change matrix 2 colamns
			{
				int sum = 0;
				for (int j = 0; j < c1; j++)	//j is used to change matrix 1 colamns and matrix 2 rows
				{
					sum += mat1[i][j] * mat2[j][k];
				}
				cout << sum<<" ";
			}
			cout << endl;
		}
	}
	return 0;
}
