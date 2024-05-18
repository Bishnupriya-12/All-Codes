#include<iostream>
using namespace std;
void Swapfunction(int x, int y)
{
   swap(x,y);
   cout<<"First number : "<<x<<endl;
   cout<<"Second number : "<<y;
}
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    Swapfunction(a,b);
}

