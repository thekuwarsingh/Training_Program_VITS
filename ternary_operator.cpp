#include<iostream>
using namespace std;

int main()
{
    int x, y, greater;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    greater = (x>y)? x : y;
    cout<<greater<<" is greater.";
    return 0;
}