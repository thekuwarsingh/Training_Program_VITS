#include<iostream>
using namespace std;

int main()
{
    struct{
        int a;
        float b;
        char c;
    } mem_var;
    char symbol;
    cout<<"Enter the symbol character : ";
    cin>>symbol;
    mem_var.a = 5;
    mem_var.b = 2.99;
    mem_var.c = symbol;
    //Printing output
    cout<<"\na : "<<mem_var.a;
    cout<<"\nb : "<<mem_var.b;
    cout<<"\nc : "<<mem_var.c;
    return 0;
}