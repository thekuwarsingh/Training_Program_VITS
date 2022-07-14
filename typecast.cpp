/*
Type Casting :
    1.  Implicit    -   Done internally by Language Processors. 
    2.  Explicit    -   Forcefully by Programmers.

*/
#include<iostream>
using namespace std;

int main()
{
    int x = 5, y = 2;
    float res;
    //explicit
    res = (float)x / (float)y;
    //Output    :   5 / 2 = 2.5
    cout<<x;
    cout<<" / ";
    cout<<y;
    cout<<" = ";
    cout<<res;
    //Single Line Output    :   cout<<x<<" / "<<y<<" = "<<res;
    //implicit
    cout<<"\n5 / 2 = "<<5/float(y);
    return 0;
}