#include<iostream>
int change(int a);
using namespace std;
int change(int a)
{
    a = 5;
    return a;
}
int main()
{
    int a = 6, val;
    val = change(a);
    cout<<"a : "<<a;
    return 0;
}