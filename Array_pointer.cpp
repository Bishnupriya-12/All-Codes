#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 3, 10, 32, 21};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    cout<<endl;
    int *p;
    p=arr;
    cout<<p[1]<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+3)<<endl;

    return 0;
}

