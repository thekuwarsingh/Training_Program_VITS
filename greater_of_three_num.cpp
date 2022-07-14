#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter the value of a, b and c : ";
    cin>>a>>b>>c;
    /*
    if(a>b && a>c)
    {
        cout<<a<<" is greater.";
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is greater.";
    }
    else
    {
        cout<<c<<" is greater.";
   3 }
    */
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is greater.";
        }
        else
        {
            cout<<c<<" is greater.";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<" is greater.";
        }
        else
        {
            cout<<c<<" is greater.";
        }
    }    
    return 0;
}