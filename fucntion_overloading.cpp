#include<iostream>
int overload(int x, int y);
float overload(float x, float y);
using namespace std;

int overload(int x, int y)
{
    return x + y;
}

float overload(float x, float y)
{
    return x + y;
}

int main()
{
    int x = 5, y = 3;
    float a = 2.3, b = 4.99;
    int calc1 = overload(x, y);
    float calc2 = overload(a, b);
    cout<<"Calc 1 : "<<calc1<<endl;
    cout<<"Calc 2 : "<<calc2;
    return 0;
}