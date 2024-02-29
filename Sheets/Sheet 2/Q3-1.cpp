#include<iostream>

using namespace std;
// the first func

bool IS_PRIME(int num)
{
	if (num > 1)
	{
		for (int i = num - 1; i > 1; i--)
		{

			if (num % i == 0)
			{
				return false;
			}
			if (i == 2)
			{
				return true;
			}

		}
		return true;
	}
	else
		return false;
}

void PRIME(int NUM)
{
for(int i=NUM;i>1;i--)
{

bool answer = IS_PRIME(i);
if(answer)
 cout << i <<" @@ ";

}
}

int main()
{
	int number;
	cout << "enter the positive integer number : ";
	cin >> number;
	if (IS_PRIME(number))
		cout << "prime \n";
	else
		cout << "not prime \n";

          PRIME(number);
	return 0;
}