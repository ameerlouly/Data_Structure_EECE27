#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int num, tries=0, guess;
	srand(time(0));	//srand makes rand fun randomize every run
	num = rand() % 1000;	//the (%1000) is used to set limits
	cout << "guess the number" << endl;
	for (tries ; tries < 100; tries++)
	{
		cin >> guess;
		if(guess==num)
		{
			cout << " correct xd " << endl<<"you tried "<<tries<<"tries1";
			break;
		}
		else if (guess > num)
		{
			cout << " try lower number " << endl;
		}
		else if (guess < num)
		{
			cout << " try bigger number " << endl;
		}
		
	}
	if (tries == 100)
		cout << "better luck next time";

	return 0;
}
