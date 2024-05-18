#include<iostream>
using namespace std;
int main()
{
    int array [2][4];
for (int r=0;r<2; r++)
{
    cout << "Row:" << r<< endl;
    for (int c=0; c<4; c++)
    {
        cout << "Column:" << c<< endl;
        cin >>array [r][c];

    }
    cout << endl;
}

int largest= array[0][0];
int smallest= array[1][0];
for (int i=0; i<4; i++)
{
    if(array[0][i]> largest)
    {
        largest=array[0][i];
    }
    if (array [1][i]< smallest)
    {
        smallest= array[1][i];
    }
}
    cout << "Largest Element For Row-0 is:"<< largest << endl;
    cout << "Smallest Element For Row-1 is:"<< smallest << endl;
    return 0;
}

