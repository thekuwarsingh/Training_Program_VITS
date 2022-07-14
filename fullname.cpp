#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstname, middlename, lastname;
    string fullname;
    cout<<"Enter your fisrtname : ";
    cin>>firstname;
    cout<<"Enter your middlename : ";
    cin>>middlename;
    cout<<"Enter your lastname : ";
    cin>>lastname;
    fullname = firstname + " "+ middlename + " " + lastname;
    //first method of printing the fullname

    //cout<<"\nMy name is "<<firstname<<" "<<middlename<<" "<<lastname;
   
   //second method of printing the fullname
   cout<<"\n My name is "<<fullname;
   return 0;
}