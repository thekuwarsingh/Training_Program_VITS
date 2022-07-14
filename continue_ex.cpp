#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 10; i +=1)
    {
        if(i == 8)
            continue;
        cout<<i<<" ";
    }
    return 0;
}