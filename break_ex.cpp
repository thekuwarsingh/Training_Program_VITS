#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i < 1000; i++)
    {
        cout<<i<<" ";
        if(i == 100)
        {
            break;
        }
    }
    return 0;
}