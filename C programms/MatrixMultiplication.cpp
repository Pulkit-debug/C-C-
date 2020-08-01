#include<iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Enter the size of the row : ";
    cin>>row;
    cout<<"Enter the size of the coloumn : ";
    cin>>col;
    int a[row][col];
    int b[row][col];
    int sum[row][col];
    cout<<"Enter your first matrix : ";
    for(int i =0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
           cin>>a[i][j];
        }
    }

    for(int i =0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
           cin>>b[i][j];
        }
    }

    for(int i =0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            for(int k =0;k<col;k++)
            {
                    sum [i][j] = sum[i][j] + a[k][i]*b[j][k];
                
            }
          
        }
    }

    for(int i =0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
           cout<<sum[i][j]<<" ";
        
        }
        cout<<endl;
    }

    return 0;
}