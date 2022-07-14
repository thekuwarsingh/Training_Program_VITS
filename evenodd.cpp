#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter any positive integer : ";
    cin>>num;
    if(num % 2==0)
    {
        cout<<num<<" is an even number.";
    }
    else
    {
        cout<<num<<" is a odd number.";
    }
    return 0;
}