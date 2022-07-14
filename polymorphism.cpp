#include<iostream>
using namespace std;
//Base Class
class Bird
{
    public:
        void feature()
        {
            cout<<"Birds can fly, walk and swim..";
        }
};
//Derived Class
class DonalDuck : public Bird{
    public:
        void feature()
        {
            cout<<"Duck can Swim & Walk.";
        }
};
//Derived Class
class Cukoo : public Bird{
    public:
        void feature()
        {
            cout<<"Cukoo is mostly eaten.";
        }
};

int main(){
    Bird myBird;
    DonalDuck myDuck;
    Cukoo myCukoo;

    myBird.feature();
    myDuck.feature();
    myCukoo.feature();

    return 0;
}

