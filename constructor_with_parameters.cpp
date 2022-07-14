#include<iostream>
using namespace std;

class Record
{
    public:
        string S_name;
        int S_age;
        Record(string name, int age);
};

Record :: Record(string name, int age)
{
    S_name = name;
    S_age = age;
}

int main()
{
    int age;
    string name;
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Age : ";
    cin>>age;
    Record Access_Record(name, age);
    cout<<"\nName\t:\t"<<Access_Record.S_name;
    cout<<"\nAge\t:\t"<<Access_Record.S_age;
    return 0;
}