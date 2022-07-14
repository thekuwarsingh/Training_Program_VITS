#include<iostream>
using namespace std;

class Square
{
    public:
        int square(int x);
};

int Square ::square(int x)
{
    return x * x;
}

int main()
{
    Square access_data;
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int result = access_data.square(num);
    cout<<"\n";
    cout<<"Square of "<<num<<" is : "<<result;
    return 0;
}