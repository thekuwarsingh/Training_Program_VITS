#include<iostream>

#define PI 3.14
#undef PI
int main(){
    float radius;
    std :: cout<<"Enter the radius of the circle : ";
    std :: cin>>radius;
    std :: cout<<"\nArea of Circle is : "<<PI * radius * radius;
    return 0;
}