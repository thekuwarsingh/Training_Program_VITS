#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = NULL; 
    cout<<p<<"\t"<<*p;
    cout<<endl;
    p = &a;
    cout<<p<<"\t"<<a<<"\t"<<*p;
    return 0;
}