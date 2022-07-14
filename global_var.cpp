#include<iostream>
using namespace std;

int var1 = 10;      //It is a global variable

int main(){
    static int var2;
    cout<<"Initial Value of a : "<<var1;
    var1 += 5;
    cout<<"\nUpdated Value of a : "<<var1;
    return 0;
}