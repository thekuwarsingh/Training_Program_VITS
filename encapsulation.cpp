#include<iostream>
using namespace std;

class Data
{
    private:
        int S_age;
    public:
        //setter
        void setAge(int age)
        {
            S_age = age;
        }
        //getter
        int getAge()
        {
            return S_age;
        }
};

int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    Data access_age;
    access_age.setAge(age);
    cout<<"\nAge\t:\t"<<access_age.getAge();
    return 0;
}