#include<iostream>
using namespace std;
int main()
{
    cout<<"----------Star Pattern 1----------"<<endl;
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"----------Star Pattern 2----------"<<endl;
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}