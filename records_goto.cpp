#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name, branch;
    enter_details:
    {
        cout<<"Enter the student name : ";
        cin>>name;
        cout<<"Enter the branch name : ";
        cin>>branch;
    }
    cout<<"\tName\t:\t"<<name<<endl;
    cout<<"\tBranch\t:\t"<<branch<<endl;
    char option;
    cout<<"Do you want to enter more records ? (Y/N) : ";
    cin>>option;
    if(option == 'Y' || option == 'y')
    {
        goto enter_details;
    }
    return 0;
}