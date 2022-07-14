#include<iostream>
float circle(float r);
using namespace std;

float circle(float r)
{
    return 3.14 * r * r;
}
int main()
{
    bool loop = true;
    int option;
    char choice;
    while(loop)     //enter_menu:
    {               //skip
        cout<<"------------Menu-------------\n";
        cout<<"1. Area of Circle\n";
        cout<<"Choose option to perform operation (1-6) : ";
        cin>>option;
        switch(option)
        {
            case 1:
            float radius, aoc;
            cout<<"Enter the radius of the circle : "<<endl;
            cin>>radius;
            aoc = circle(radius);
            cout<<"\nArea of Circle is : "<<aoc;
            break;
        }
        cout<<"\nDo you want to perform another operation (Y/N) : ";
        cin>>choice;
        if(choice == 'Y' || choice == 'y')
        {
            continue;   //goto enter_menu
        }
        else{           //skip
            break;      
        }
    }       //skip
    return 0;
}