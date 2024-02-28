#include <iostream>
#include <cmath>

using namespace std;

int main()
{
		int prime_num;
		int num_of_prime = 0;
		for (int i = 2; i <= 100; i++)
		{
			bool prime_state = 1;
			prime_num = i;
			for (int k = sqrt(prime_num); k >= 2; k--)
			{
				if (prime_num % k == 0)
					prime_state = 0;
			}
			if (prime_state)
			{
				num_of_prime += 1;
				cout << prime_num << " is prime number" << endl;
			}
		}
		cout <<"total number of prime numbers in this range is "<<num_of_prime;
		return 0;
}