#include<iostream>
using namespace std;

class fruit
{
    public:
        string fruit_name;
        int count;

};

int main(){
    fruit access_fruit;
    access_fruit.fruit_name = "Apple";
    access_fruit.count = 6;

    cout<<"Fruit Name : "<<access_fruit.fruit_name;
    cout<<"\n#Fruits : "<<access_fruit.count;
    return 0;
}