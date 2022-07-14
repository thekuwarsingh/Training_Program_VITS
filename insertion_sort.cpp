#include<iostream>
using namespace std;

int main(){
    int n, arr[20], i, j, key;
    cout<<"How many elements you want to insert ? : ";
    cin>>n;
    //Insertion
    for(i = 0; i < n; i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"\nArray elements before Sorting : ";
    for(i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (key < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout<<"\nArray elements after Sorting :";
    for(i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}