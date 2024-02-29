#include<iostream>

using namespace std;

double POWER_FUN(double num, int p)
{
	double result = 1;
	for (int i = 1; i <= p; i++)
	{
		result *= num;
	}
	return  result;
}

int factorial(int number)
{
int fact_num=1;

        while(number>0)
        {
            fact_num *= number;
            number--;
        }

    return fact_num;
}

    double RESULT;

int main()
{
    int NUM,N;
    cout << "enter the number then the N ";
    cin >> NUM >> N;

    for(int i=0;i<=N;i++)
    {
        RESULT +=(POWER_FUN(-1,i))*(POWER_FUN(NUM,i))/factorial(i);
    }
    cout << RESULT;

}