#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cout<<"Enter the number : ";
    cin>>n;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            cout<<n<<" is not a prime number.";
            break;
        }
    }
    if(n == i){
        cout<<n<<" is a prime number.";
    }
    return 0;  
}