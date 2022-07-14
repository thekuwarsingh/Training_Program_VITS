#include<iostream>
using namespace std;

int main()
{
    int num = 0;
    counter:
    {
        cout<<num<<" ";
        num += 1;
    }
    if(num <= 10)
    {
        goto counter;
    }
    return 0;
}