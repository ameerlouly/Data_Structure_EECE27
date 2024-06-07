#include <iostream>

using namespace std;

//  Given an ascending sorted rotated array Arr of distinct integers of size N. The array is right rotated K times. Find the value of K.
// Input:
// N = 5
//  Arr[] = {5, 1, 2, 3, 4} 
// Output: 1
// Explanation: The given array is 5 1 2 3 4.
// The original sorted array is 1 2 3 4 5. We can see that the array was rotated
//  1 times to the right. 

// Input:
// N = 5
//  Arr[] = {1, 2, 3, 4, 5} 
//  Output: 0 
//  Explanation: The given array is not rotated.

int isrotated(int *arr, int n)
{
    int count = 1, i;
    for(i = 0; arr[i] < arr[i + 1] && i < n - 1; i++)
        count++;
    if(i == n - 1)
        return 0;
    return count;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << isrotated(arr, 5);
}