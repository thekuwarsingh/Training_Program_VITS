#include<iostream>

using namespace std;

int main()
{
    //Arithmetic Operators : +, -, *, /, %, ++, --
    float first, second, res;
    cout<<"Enter the first number :";
    cin>>first;
    cout<<"Enter the second number :";
    cin>>second;
    res = first + second;      //Addition
    cout<<first<<" + "<<second<<" = "<<res<<endl;
    res = first - second;      //Subtraction
    cout<<first<<" - "<<second<<" = "<<res<<endl;
    res = first * second;      //Product
    cout<<first<<" x "<<second<<" = "<<res<<endl;
    res = first / second;      //Div-Quotient
    cout<<first<<" / "<<second<<" = "<<res<<endl;
    //res = 5 % 2;      //Mod - Remainder
    cout<<first<<" % "<<second<<" = "<<(int)first % (int)second<<endl;
    res = first++;
    cout<<first<<"++ = "<<res<<endl;    //Inc : 5++ = 5 + 1
    res = first--;
    cout<<first<<"-- = "<<res<<endl;    //Dec : 5-- = 5 - 1
    return 0;
}