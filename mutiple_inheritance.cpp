#include<iostream>
using namespace std;

class Father
{
    public:
        void msg()
        {
            cout<<"Father\n";
        }
};

class Mother
{
    public:
        void _msg()
        {
            cout<<"Mother";
        }
};

class Child : public Mother, public Father
{

};

int main()
{
    Child access_property;
    access_property.msg();
    access_property._msg();
    return 0;
}