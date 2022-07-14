#include<iostream>
using namespace std;

int main()
{
    int angle_one, angle_two, angle_three;
    cout<<"Enter the first angle : ";
    cin>>angle_one;
    cout<<"Enter the second angle : ";
    cin>>angle_two;
    cout<<"Enter the third angle : ";
    cin>>angle_three;
    if (angle_one + angle_two + angle_three == 180)
    {
        cout<<"Forms a triangle..";
    }
    else
    {
        cout<<"Does not form a triangle..";
    }
    return 0;
}