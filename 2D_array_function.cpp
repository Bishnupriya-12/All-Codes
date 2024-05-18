#include<iostream>
using namespace std;
void sumFunction(int arr[2][3],int row, int col)
{
    int sum = 0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    cout<<"The result of sum : "<<sum<<endl;
}

void averageFunction(int arr[2][3], int row, int col)
{
    int sum = 0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    float result = sum / 6;
    cout<<"The result of average number is : "<<result<<endl;

}
void displayFunction(int arr[2][3], int row, int col)
{
    int sum = 0;
    cout<<"The 2D array matrix is : "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

}
int main()
{
    int arr[2][3]={{2,3,4},{4,5,6}};
    sumFunction(arr,2,3);
    averageFunction(arr,2,3);
    displayFunction(arr,2,3);

    return 0;
}

