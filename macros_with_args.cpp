#include<iostream>

//macro with parameter
#define AREA(l, b) (l * b)

int main()
{
    int length = 5, breadth = 6, area;
    area = AREA(length, breadth);
    std :: cout<<"Area : "<<area;
    return 0;
}