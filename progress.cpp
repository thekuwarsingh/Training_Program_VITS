#include<iostream>
using namespace std;

int main()
{
    float grade;
    cout<<"Enter your percentage : ";
    cin>>grade;
    if(grade<40)
    {
        cout<<"Failed.";
    }
    else if(grade>=40 && grade<50)
    {
        cout<<"Passed in third division.";
    }
    else if(grade>=50 && grade<60)
    {
        cout<<"Passed in second division.";
    }
    else if(grade>=60 && grade<75)
    {
        cout<<"Passed in first division.";
    }
    else if(grade>=75 && grade<95)
    {
        cout<<"Passed with distinction.";
    }
    else if(grade>=95 && grade<=100)
    {
        cout<<"Congratulations! You are in the merit list.";
    }
    return 0;
}