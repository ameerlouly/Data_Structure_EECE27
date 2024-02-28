#include <iostream>
#include <string>

using namespace std;

int main()
{
    int arr[11] = {0,2,4,7,8,99,512,652,742,834,999}; //sorted array
    int i = 0, j = 10, mid = (i + j)/2; //i is first and j is last, mid is the mid between i and j
    bool f = 0; //flag
    int t = 999; //target value to find

    while (j >= i)
    {
    mid = (i + j)/2;
    if (arr[mid] == t)
        {cout << mid; f = 1; break;}
    else if (t > arr[mid])
    {
        i = mid + 1;
    }
    else
        j = mid - 1;
    }

    if(f == 0)
        cout << "Not Found";
}


