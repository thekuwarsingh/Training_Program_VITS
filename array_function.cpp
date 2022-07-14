#include<iostream>
void data(int arr_e[5]);
using namespace std;

void data(int arr_e[5])
{
    for(int i = 0; i < 5; i++)
    {
        cout<<"\nElement "<<i+1<<" : "<<arr_e[i];
    } 
}

int main()
{
    int arr[5] = {12, 77, 90, 8, 4};
    data(arr);
    return 0;
}