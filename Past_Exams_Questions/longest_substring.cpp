#include <iostream>
#include <string.h>

using namespace std;

// Given two strings. The task is to find the length of the longest common substring.
// Input: S1 = "ABCDGH", S2 = "ACDGHR", n = 6, m = 6
// Output: 4
// Explanation: The longest common substring
// is "CDGH" which has length 4.

int fun(char *s1, char *s2)
{
	int count = 0, maxcount = 0;
	int n = strlen(s1);
	int m = strlen(s2);
	for(int i = 0; i < n; i++)
	{
		count = 0;
		for(int j = i; j < m; j++)
		{	
			if(s1[i + j] == s2[j])
			{
				count++;
				if(count > maxcount)
					maxcount = count;
			}
		}
	}
	return maxcount;
}

int main()
{
	char s1[] = "ABCDGH", s2[] = "ACDGHR";
	cout << fun(s1, s2);

}