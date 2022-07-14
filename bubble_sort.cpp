#include<iostream>
using namespace std;

int main(){
    int n, arr[20], i, j;
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
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (n - i - 1); j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<"\nArray elements after Sorting :";
    for(i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}