#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int *p; int arr[5]={10,20,30,40,50};
    cout<< " integer array through indicies " << endl;

    for(int i=0;i<5;i++)
        cout<<arr[i]<<endl; cout<<endl<<endl;
    
    cout<<" array as pointers "<<endl;
    for(int i=0;i<5;i++)cout<<*(arr+i)<<endl;
        cout<<" addresses of integer array and another copy of array" << endl << endl;

    p=arr; for(int i=0;i<5;i++)cout<<"address "<< (p+i) << " value "<<*(p+i) << endl;

    double *y;
    double arr2[5]={5, 10, 15, 20, 25};
    y=arr2;
    cout<<" addresses of array of type double and therir values using pointers " << endl << endl;

    for(int i=0;i<5;i++)
        cout << " address " << (y+i) <<" value " << *(y+i) << endl;
}