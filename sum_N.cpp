#include<iostream>
using namespace std;

int main()
{
    int i = 1, sum = 0, n;
    cout<<"Enter the value of n : ";
    cin>>n;
    /*
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout<<"Sum of the series is : "<<sum;
    */
   for(; i <= n; )
    {
        sum = sum + i;
        i = i + 1;
    }
    cout<<"Sum of the series is : "<<sum;
    return 0;
}