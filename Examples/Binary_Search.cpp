#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a[14] = {1,2,5,5,5,5,5,6,6,8,12,13,13,20};
    int arr[11] = {0,2,4,7,8,99,512,652,742,834,999}; //sorted array
    int i = 0, j = 13, mid = (i + j)/2; //i is first and j is last, mid is the mid between i and j
    bool f = 0; //flag
    int t = 5; //target value to find

    while (j >= i)
    {
    mid = (i + j)/2;
    if (a[mid] == t)
        {cout << mid; f = 1; break;}
    else if (t > a[mid])
    {
        i = mid + 1;
    }
    else
        j = mid - 1;
    }

    if(f == 0)
        cout << "Not Found";
}


