#include<iostream>
using namespace std;

int main()
{
    int num, actual_number = 35;
    start_game:
    {
        cout<<"Guess your number (1-100) : ";
        cin>>num;
    }
    if(num == actual_number)
    {
        cout<<"Congratulations! You won!!! :)"<<endl;
    }
    else
    {
        cout<<"Sorry! You loose!!! :("<<endl;
    }
    char option;
    cout<<"Do you want to play again ? (Y/N) : ";
    cin>>option;
    if(option == 'Y' || option == 'y')
    {
        goto start_game;
    }
    return 0;
}