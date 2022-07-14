#include<iostream>
using namespace std;

int main()
{
    int a[] = {14, 21, 32, 5, 7, 11, 4};
    int element, length, found;
    cout<<"\nEnter the element to be searched : ";
    cin>>element;
    length = sizeof(a)/ sizeof(int);
    //cout<<length;
    for(int i = 0; i < length; i++)
    {
        if(a[i] == element)
        {
            found = a[i];
            break;
        }
    }
    if(found == element)
    {
        cout<<"found";
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}