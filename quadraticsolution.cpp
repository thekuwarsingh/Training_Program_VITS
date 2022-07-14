#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a, b, c, D, root1, root2;
    cout<<"Enter the value of a, b & c :";
    cin>>a>>b>>c;
    D = (b*b) - (4*a*c);
    if(D<0)
    {
        cout<<"Roots are imaginary.\n";
    }
    else if(D==0)
    {
        cout<<"Roots are equal.\n";
    }
    else
    {
        root1 = (-b + sqrt(D))/ (2*a);
        root2 = (-b - sqrt(D))/ (2*a);
    }
    cout<<"Root1\t:\t"<<root1<<endl;
    cout<<"Root2\t:\t"<<root2;
    return 0;
}