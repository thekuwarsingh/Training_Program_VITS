#include<iostream>
using namespace std;

int main()
{
    char alpha;
    cout<<"Enter the alphabet : ";
    cin>>alpha;
    switch (alpha)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<alpha<<" is a vowel.";
        break;    
    default:
        cout<<alpha<<" is a consonant.";
    }
    return 0;

}