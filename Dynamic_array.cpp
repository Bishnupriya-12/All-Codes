#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    //int arr[n];
    int *arr = new int[n];
    cout<<"enter element : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"elements are : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}

