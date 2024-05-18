#include<iostream>
using namespace std;
void Prime(int n)
{
    int d=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            d++;
        }
    }


    if(d==2)
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number" <<endl;
    }




}
 int main()
 {
     int n;
     cout<<"Enter a number : ";
     cin>>n;
     Prime(n);

 }
