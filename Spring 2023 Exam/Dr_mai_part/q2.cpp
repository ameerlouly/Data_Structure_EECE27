/*NOT COMPLETE SOLUTION YET*/

#include <iostream>
#include <string.h>

using namespace std;

bool isSym(char s[])
{
    int n = strlen(s);
    for(int i = 0; i <= n/2; i++)
    {
        if(s[i] != s[n - i - 1])
            return false;
    }
    return true;
}

int main()
{
    char s[] = "abcdcba";
    cout << isSym(s);
}