#include<iostream>
using namespace std;
void Trianglefunction()
{
   int base;
   cout<<"Enter the base: ";
   cin>>base;
   int height;
   cout<<"Enter the height: ";
   cin>>height;

   float result = 0.5*base*height;
   cout<<result;
}
void Circlefunction()
{
    int r;
    cout<<"Enter radius: ";
    cin>>r;
     float result = 3.1416*r*r;
     cout<<result;

}
int main()
{

    char a;
    cout<<"Enter c or t:"<<endl;
    cin>>a;

    if(a=='t')
    {
      Trianglefunction();
    }

    else if(a=='c')
    {
        Circlefunction();
    }
    else
    {
        cout<<"Invalid Input ";
    }

}

