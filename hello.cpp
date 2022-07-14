#include<iostream>
#include<iomanip>
#define PI 3.14
using namespace std;

int main()
{
    //const float PI = 3.14;
    float r, area;
    cout<<"Enter the radius of the circle :"<<setw(4);
    cin>>r;
    area = PI * r * r;
    cout<<"Area of Circle :"<<area;
    return 0;
}