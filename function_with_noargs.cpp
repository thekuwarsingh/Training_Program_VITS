#include<iostream>
void table();       //function prototype declaration
using namespace std;

void table()
{
    int n, i;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(i = 1; i <= 10; i++)
    {
        cout<<n*i;
        cout<<"\n";
    }
}
int main()
{
    int range;
    cout<<"Enter how many tables you want : ";
    cin>>range;
    for(int i = 1; i <= range; i++)
    {
        table();
    }
    return 0;
}