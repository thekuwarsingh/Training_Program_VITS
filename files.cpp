#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream File("data.txt");
    File<<"Kuch bhi likh dijiye";
    File.close();

    return 0;
}