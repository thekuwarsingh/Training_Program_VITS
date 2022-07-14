#include<iostream>
using namespace std;

int main()
{
    struct
    {
        string name;
        string course;
        int sem;
    } student_one, student_two, student_three;
    
    string f_name, c;
    int semester;

    //Student Record One
    
    student_one.name = "Vikkoo";
    student_one.course = "B.Tech";
    student_one.sem = 7;
    
    //Student Record Two
    
    student_two.name = "Pratibha";
    student_two.course = "B.Tech";
    student_two.sem = 7;
    
    //Printing Record of Student One
    cout<<"--------<<Record of Student One>>--------\n";
    cout<<"\tName\t:\t"<<student_one.name<<endl;
    cout<<"\tCourse\t:\t"<<student_one.course<<endl;
    cout<<"\tSem\t:\t"<<student_one.sem<<endl;
    
    //Printing Record of Student Two
    
    cout<<"--------<<Record of Student Two>>--------\n";
    cout<<"\tName\t:\t"<<student_two.name<<endl;
    cout<<"\tCourse\t:\t"<<student_two.course<<endl;
    cout<<"\tSem\t:\t"<<student_two.sem<<endl;
    cout<<"\n";
    cout<<"\nEnter the details of third student - \n";
    cout<<"Name : ";
    cin>>f_name;
    cout<<"Course : ";
    cin>>c;
    cout<<"Semester : ";
    cin>>semester;

     //Student Record Three
    
    student_three.name = f_name;
    student_three.course = c;
    student_three.sem = semester;

    //Printing Record of Student Three
    
    cout<<"\n--------<<Record of Third Student>>--------\n";
    cout<<"\tName\t:\t"<<student_three.name<<endl;
    cout<<"\tCourse\t:\t"<<student_three.course<<endl;
    cout<<"\tSem\t:\t"<<student_three.sem<<endl;
    cout<<"-------------------------------";
    
    return 0;
}