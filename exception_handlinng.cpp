#include<iostream>
using namespace std;

float Division(float num, float den)
{
    if(den == 0)
    {
        throw runtime_error("Math Error : Attempted to divide by Zero\n");
    }
    return num / den;
}

int main()
{
    float numerator = 5.0, denominator = 0, result;
    try{
        result = Division(numerator, denominator);
        cout<<"Quotient : "<<result;
        cout<<"\n";
    }
    catch(runtime_error& e)
    {
        cout<<"Exception occured..\n";
    }
    return 0;
}