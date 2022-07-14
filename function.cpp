#include<iostream>
void greet();       //function prototype declaration
using namespace std;

void greet()
{
    cout<<"\nLearning is your superpower.";
}
int main()
{
    for(int i = 1; i <=10; i++)
    {
        greet();
    }
    return 0;
}