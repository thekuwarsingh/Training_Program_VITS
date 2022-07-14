#include<iostream>
int factorial(int x);       //function prototype declaration
using namespace std;

int factorial(int x)
{
    int fact = 1;
    for(int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    for(int i = 1; i <= 10; i++)
    {
        cout<<"\nFactorial of "<<i<<" is : "<<factorial(i);
    }
    return 0;
}