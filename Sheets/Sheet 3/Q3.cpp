#include<iostream>
using namespace std;
int main()
{
	float marks[2][4]; float avg[] = {0,0,0,0};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "enter grade of course " << j+1 << " of student " << i+1<<" : ";
			cin >> marks[i][j];
			while (marks[i][j] > 100 || marks[i][j] < 0)
			{
				cout << "invalide input";
				cin >> marks[i][j]; cout << endl;
			}
			cout << endl;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		int sum_of_grades = 0;
		for (int j = 0; j < 4; j++)
		{
			sum_of_grades += marks[i][j];
			cout << "mark of course " << j+1 <<" = " << marks[i][j]<<" grade ";
			if (marks[i][j] >= 85)
				cout << "A , ";
			else if (marks[i][j] >= 75)
				cout << "B ,";
			else if (marks[i][j] >= 65)
				cout << "C , ";
			else if (marks[i][j] >= 50)
				cout << "D , ";
			else cout << "F , ";
		}

		cout << "total score in all courses is " << sum_of_grades<<" of 400" << endl;
	}
    
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			avg[i] += marks[j][i];
		}
		cout << "average of course " << i << " is " << avg[i] / 10 << " of 100" << endl;
	}
    
	return 0;
}