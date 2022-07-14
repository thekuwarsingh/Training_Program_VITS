#include<iostream>
using namespace std;

int main()
{
    float per;
    cout<<"Enter Percentage : ";
    cin>>per;
    if(per<40)
    {
        cout<<"Failed.";
    }
    else if(per>=40 && per<=100)
    {
        cout<<"Passed.";
    }
    else{
        cout<<"Out of range.";
    }
    return 0;
}