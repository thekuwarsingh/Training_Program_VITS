#include<iostream>
using namespace std;
int main()
{
    int i, n, fact = 1;
    cout<<"Enter the number : ";
    cin>>n;
    for(i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    cout<<"Factorial of "<<n<<" is : "<<fact;
    return 0;  
}