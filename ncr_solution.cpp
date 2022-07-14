#include<iostream>
float factorial(float x);       //function prototype declaration
using namespace std;

float factorial(float x)
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
    float n, r;
    float ncr;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    ncr = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"\nnCr = "<<ncr;
    return 0;
}