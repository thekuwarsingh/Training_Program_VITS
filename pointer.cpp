#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;    //pointer variable
    cout<<"a : "<<a;
    cout<<"\np : "<<p;
    //dereference --> data
    cout<<"\n*p : "<<*p;

    //storing address of a pointer variable
    int **ps = &p;
    cout<<"\nps : "<<ps;

    //dereference - once

    cout<<"\n*ps : "<<*ps;
    //dereference --> data
    cout<<"\n**ps : "<<**ps;

    return 0;
}