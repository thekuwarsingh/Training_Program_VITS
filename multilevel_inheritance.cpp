#include<iostream>
using namespace std;

class Grand_Parent
{
    public:
        void msg()
        {
            cout<<"Grand Parent\n";
        }
};

class Parent : public Grand_Parent
{
    
};

class Child : public Parent
{

};

int main()
{
    Child access_property;
    access_property.msg();
    return 0;
}