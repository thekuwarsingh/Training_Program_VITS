#include<iostream>
using namespace std;

class record
{
    string name;
    int age;
    public:
        void getData();
        void displayData();
};

void record ::getData()
{
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Age : ";
    cin>>age;
}

void record ::displayData()
{
    cout<<"Name\t:\t"<<name;
    cout<<"\nAge\t:\t"<<age;
}

int main()
{
    record access_record;
    access_record.getData();
    cout<<"\n";
    access_record.displayData();
    return 0;
}