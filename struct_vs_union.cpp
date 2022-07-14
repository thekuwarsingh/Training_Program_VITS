#include<iostream>
using namespace std;

union Data
{
    char name[10];
    int n;
    float d;
};
struct 
{
    int a;
    float b;
    char string[10];
} Access_Structure;

int main(){
    union Data Access_Union;
    cout<<"Size occupied by Access_Union is : "<<sizeof(Access_Union);
    cout<<"\nSize occupied by Access_Structure is : "<<sizeof(Access_Structure);
    return 0;
}
