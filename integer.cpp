#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(num>0)
    {
        cout<<num<<" is a +ve number.";
    }
    else if(num<0)
    {
        cout<<num<<" is -ve number.";
    }
    else if(num==0)
    {
        cout<<num<<" is Zero.";
    }
    else
    {
        cout<<"Invalid Input.";
    }
    return 0;
}