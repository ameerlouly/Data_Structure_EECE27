#include <iostream>

using namespace std;

int highfreq(int* arr, int n)
{
    int maxcount = 0;
    int highest_freq_elem;
    for(int i = 0; i < n; i++)
    {   
        int count = 0;
        for(int j = 0; j < n; j++)
            if(arr[i] == arr[j])
            {
                count++;
            }

        if(count > maxcount)
        {
            maxcount = count;
            highest_freq_elem = arr[i];
        }
    }

    return highest_freq_elem;
}

int main()
{
    int arr[20] = {1, 2, 2, 2, 3, 5, 3, 5, 3, 6, 9, 7, 1, 2, 2, 2, 5, 3, 6, 10};

    cout << highfreq(arr, 20);

}