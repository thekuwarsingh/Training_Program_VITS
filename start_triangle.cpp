#include<iostream>
void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
using namespace std;

void pattern1()
{
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void pattern2()
{
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
void pattern3()
{
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void pattern4()
{
    for(int i = 3; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
void pattern5()
{
    for(int i = 4; i >= 1; i--)
    {
        for(int j = 4; j >= i; j--)
        {
            cout<<" ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }
}
void pattern6()
{
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 3; j >= i; j--)
        {
            cout<<" ";
        }
        for(int k = 1; k <= (2 * i) - 1; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern7()
{
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 3; j > i; j--)
        {
            cout<<" ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout<<"*";
        }
        for(int l = 2; l <= i; l++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    cout<<"\n------Star Patter : 1------"<<endl;
    pattern1();
    cout<<"\n------Star Patter : 2------"<<endl;
    pattern2();
    cout<<"\n------Star Patter : 3------"<<endl;
    pattern3();
    cout<<"\n------Star Patter : 4------"<<endl;
    pattern4();
    cout<<"\n------Star Patter : 5------"<<endl;
    pattern5();
    cout<<"\n------Star Patter : 6------"<<endl;
    pattern6();
    cout<<"\n------Star Patter : 7------"<<endl;
    pattern7();
    cout<<"\n---------End---------";

    return 0;
}