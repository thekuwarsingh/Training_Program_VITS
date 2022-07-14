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
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    cout<<"\nFactorial of "<<n<<" is : "<<factorial(n);
    return 0;
}