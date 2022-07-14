#include<iostream>
using namespace std;

int main()
{
    struct structure
    {
        string name;
        string course;
        int sem;
    };

    structure record;
    string f_name, c;
    int semester;

    cout<<"\n";
    cout<<"\nEnter the details of student - \n";
    cout<<"Name : ";
    cin>>f_name;
    cout<<"Course : ";
    cin>>c;
    cout<<"Semester : ";
    cin>>semester;

    record.name = f_name;
    record.course = c;
    record.sem = semester;

    cout<<"\n--------<<Record of Student>>--------\n";
    cout<<"\tName\t:\t"<<record.name<<endl;
    cout<<"\tCourse\t:\t"<<record.course<<endl;
    cout<<"\tSem\t:\t"<<record.sem<<endl;

    return 0;
}