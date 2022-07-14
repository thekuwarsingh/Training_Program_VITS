#include<iostream>

void first();
void second();
/*
#pragma preprocessor directives:
1. #pragma startup
2. #pragma exit
*/
#pragma startup first
#pragma exit second

void first(){
    std :: cout<<"Inside the first function.";
}

void second(){
    std :: cout<<"Inside the second function";
}

int main()
{
    void first();
    void second();

    std :: cout<<"Inside the main function.";
    return 0;
}