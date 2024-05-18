#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p;
    p=&x;
    int y=*p;
    cout<<"x = "<<x<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"&x = "<<&x<<endl;
    cout<<"&p = "<<&p<<endl;
    cout<<"&y = "<<&y<<endl;
    //cout<<"*x = "<<*x<<endl;
    cout<<"*p = "<<*p<<endl;
   // cout<<"*y = "<<*y<<endl;


    return 0;
}

