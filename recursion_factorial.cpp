#include<iostream>
int fact(int x);
using namespace std;

int main()
{
    int n = 4;
    int result;
    result = fact(n);
    cout<<"\nFactorial of "
    <<n<<" is : "<<result;
    return 0;
}

int fact(int x)
{
    if(x >= 1)
    {
        return x * fact(x - 1);
    }
    else 
    {
        return 1;
    }
}