#include<iostream>
using namespace std;

int main()
{
    int option;
    cout<<"Turn on the switch : ";
    cin>>option;
    switch (option)
    {
    case 1:
        cout<<"Socket.";
        break;
    case 2:
        cout<<"Fan.";
        break;
    case 3:
        cout<<"Light.";
        break;
    case 4:
        cout<<"Fan.";
        break;
    case 5:
        cout<<"Projector.";
        break;
    default:
        cout<<"Invalid Switch is pressed.";
        break;
    }
    return 0;
}