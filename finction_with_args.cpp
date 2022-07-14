#include<iostream>
void table(int x);       //function prototype declaration
using namespace std;

void table(int x)
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        cout<<x*i;
        cout<<"\n";
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    table(n);
    return 0;
}