#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    system("cls");
    string S = "C_Plus_Plus";
    //Accessing Single Character 
    cout<<S[0];
    //Manipulating String or Character in String Sequence.
    S[1] = ' ';
    cout<<setw(6)<<S<<setw(6);
    for(int i = 2; i <= 5; i++)
    {
        cout<<S[i];
    }
    return 0;
}