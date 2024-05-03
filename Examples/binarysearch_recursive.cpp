#include <iostream>

using namespace std;

int bin_search(int x[], int t, int i, int j)
{
    int mid = (i + j)/2;
    if (i > j)
        return -1;
    if(x[mid] == t)
        return mid;
    else if (t > x[mid])
        return bin_search(x, t, i, mid - 1);
    else
        return bin_search(x, t, mid + 1, j);
}

int main()
{
    int x[10] = {0, 5 ,7, 9, 12, 23, 58, 69, 99, 100};
    int i = 0, j = 9, t = 12;
    cout << bin_search(x, t, i, j);

}
