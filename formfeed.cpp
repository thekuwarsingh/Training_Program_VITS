#include<iostream>
#include<string>
using namespace std;

int main()
{
    int dd, mm, yyyy, age;
    string name, add, course, branch, gender;
    cout<<"Enter your name : ";
    //cin>>name;
    getline(cin, name);
    cout<<"Enter your Date of birth - "<<endl;
    cout<<"Date\t:\t";
    cin>>dd;
    cout<<"Month\t:\t";
    cin>>mm;
    cout<<"Year\t:\t";
    cin>>yyyy;
    cout<<"Enter your age in years : ";
    cin>>age;
    cout<<"Enter your address : ";
    //cin>>add;
    getline(cin, add);
    cout<<"Enter your course : ";
    cin>>course;
    cout<<"Enter your branch : ";
    cin>>branch;
    cout<<"Enter your gender :( Are you human or not? :( : ";
    cin>>gender;
    cout<<"---------------*****Student Deatils*****---------------"<<endl;
    cout<<"\tName\t:\t"<<name<<endl;
    cout<<"\tCourse\t:\t"<<course<<endl;
    cout<<"\tBranch\t:\t"<<branch<<endl;
    cout<<"\tDOB\t:\t"<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
    cout<<"\tAge\t:\t"<<age<<endl;
    cout<<"\tGender\t:\t"<<gender<<endl;
    cout<<"\tAddress\t:\t"<<add<<endl;
    cout<<"---------------------*****End*****---------------------";
    return 0;
}