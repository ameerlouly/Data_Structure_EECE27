#include <iostream>

using namespace std;

int strlen(char s1[])
{
    int i = 0;
    while(s1[i++]);
    return i - 1;
}

int strcmp(char s1[], char s2[])
{
    int diff = 0;
    for(int i = 0; i < strlen(s1); i++)
    {
        diff = s1[i] - s2[i];
        if(diff)
            return diff;
    }
    return diff;
}

void strcat(char s1[], char s2[])
{
    int len = strlen(s1) + 1;
    int i = 0;
    while(s2[i] != '\0')
    {
        s1[len + i] = s2[i];
        i++;
    }
}

int main()
{
    char s1[100] = "This";
    char s2[50] = "Ameer Louly";
    cout << strlen(s1) << endl;
    cout << strcmp(s1, s2) << endl;

    for(int i = 0; i < 20; i++)
        cout << s1[i];
    cout << endl;

    strcat(s1,s2);

    for(int i = 0; i < 20; i++)
        cout << s1[i];
    cout << endl;
    
    cout << s1;

}