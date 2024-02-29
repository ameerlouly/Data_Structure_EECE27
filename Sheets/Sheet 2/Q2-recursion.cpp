#include<iostream>

using namespace std;

double POWER_FUN(double num, int p)
{         int i=p;   
          if(i==0)
          {
           return 1;
          }
           i--;
	return num*POWER_FUN(num,i) ;
}

int main()
{
	double NUM , CALC;
	int POW;
	cout << "enter the number : "; 
	cin >> NUM;
	cout << "\nenter the power : ";
	cin >> POW ;
	 
	CALC = POWER_FUN(NUM, POW);
	cout << "the result is : " << CALC;
	return 0;
}