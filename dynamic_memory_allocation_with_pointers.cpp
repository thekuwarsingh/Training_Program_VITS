#include<iostream>
using namespace std;

int main(){
    int a = 5;
    //new operator : allocates memory dynamically at run time.
    int *p = new int;
    p = &a;
    cout<<p<<"\t"<<a<<"\t"<<*p;
    //delete operator : de-allocates the allocated memory space.
    delete p;
    return 0;
}
//Syntax : data-type var_name = new data-type