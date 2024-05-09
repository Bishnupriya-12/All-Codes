#include<iostream>
using namespace std;
void calculateTriangularNumber (int n)
{
    int i, sum = 0;
    for(i=1; i<=n; i++) // i = 1, 2, 3,
    {
        sum =   sum + i; // sum = 0, 1, 3, 6,
    }
    cout<<"Triangular number of " <<n  <<" is: "<<sum<<endl; //1, 3, 6,

}
int main() {
        calculateTriangularNumber (10);

        calculateTriangularNumber (20);

        calculateTriangularNumber (50);

        return 0;

    }
