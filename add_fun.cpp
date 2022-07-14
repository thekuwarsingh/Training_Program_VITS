#include<iostream>
int add(int x, int y);
using namespace std;

int add(int x, int y)
{
    return x+y;
}
int main()
{
    int a, b;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;
    //Store and Print.
    int sum = add(a, b);
    cout<<"Result = "<<sum;
    //Print without Storing
    cout<<"\nResult = "<<add(a, b);
    return 0;
}