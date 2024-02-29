#include<iostream>

using namespace std;

int main()
{
	int n, score[10], temp;
    
	cout << "enter N (less than or equel 10) :\n";
	cin >> n;
	cout << "enter " << n << " numbers\n";

	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
	}

	for (int i = 0; i < n / 2; i++)
	{
		temp = score[i];
		score[i] = score[n - 1 - i];
		score[n - 1 - i] = temp;

	}

	cout << "score after process is:\n";

	for (int i = 0; i < n; i++)
	{
		cout << score[i] << endl;
	}
}
