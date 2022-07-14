#include<iostream>
using namespace std;

class Base_Class
{
    public:
        string parent_name = "Jerry";
        void msg()
        {
            cout<<"Parent Class.\n";
        }
};

class Derived_Class : public Base_Class
{
    public:
        string child = "Tom";
};

int main()
{
    Derived_Class access_property;
    access_property.msg();
    cout<<"\n";
    cout<<"Parent Name\t:\t"<<access_property.parent_name;
    cout<<"\nChild Name\t:\t"<<access_property.child;
    return 0;
}