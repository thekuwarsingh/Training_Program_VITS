#include<iostream>
#include<string>
using namespace std;

void country(string c);

void country(string c = "India")
{
    cout<<"\nYou live in "<<c;
}

int main()
{
    string s = "Russia";
    country();
    return 0;
}