#include <iostream>
#define SIZE 100

using namespace std;

int large(int *);

int main()
{
    int arr[] = {2,0};
    int occ = 0;
    int max = large(arr);
    for(int i = 0; i < 100; i++)
    {
        if(arr[i] == max)
            {
                occ++;
                cout << "Max at index: " << i << endl;
            }
    }
    cout << "Number of Occurences = " << occ << endl;
}

int large(int *arr)
{
    int max = arr[0];
    for(int i = 0; i < 100; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}