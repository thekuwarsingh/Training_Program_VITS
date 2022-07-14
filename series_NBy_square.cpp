#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int i;
    float sum = 0, n;
    cout<<"Enter the range of the series : ";
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        sum = sum + (i/(pow(i, 2)));
    }
    cout<<"Sum of the given series is : "<<sum;
    return 0;
}