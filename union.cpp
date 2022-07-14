#include<iostream>
using namespace std;

union Data
{
    char name[10];
} Access_Data;

int main(){
    cout<<"Enter your name : ";
    cin>>Access_Data.name;
    cout<<"\nName\t:\t"<<Access_Data.name;
    return 0;
}
