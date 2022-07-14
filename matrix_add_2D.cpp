#include<iostream>
using namespace std;

int main()
{
    int row, col, i, j;
    cout<<"Enter the #rows : ";
    cin>>row;
    cout<<"Enter the #cols : ";
    cin>>col;
    int first[row][col], second[row][col], sum[row][col];
    cout<<"\nEnter the elements of first matrix : ";
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cin>>first[i][j];
        }
    }
    cout<<"\nEnter the elements of second matrix : ";
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cin>>second[i][j];
        }
    }
    //Addition of the matrices
    
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
        }
    }
    //Print the Result
    cout<<"\nResultant matrix is : \n";
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cout<<sum[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}