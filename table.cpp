#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    for(int i = 1; i <=10; i++)
    {
        //cout<<num*i<<endl;
        cout<<num<<" X "<<i<<"\t=\t"<<num*i;
        cout<<"\n";
    }
    return 0;
}