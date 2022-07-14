//file inclusion - preprocessor directives
#include<iostream>

//macro definition
#define OPTION true
#ifdef true
{
    cout<<"Successfully executed.";
}
#endif

int main(){
    if(OPTION)
    {
        std :: cout<<"Done\n";
    }
    return 0;
}