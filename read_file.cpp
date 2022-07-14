#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string Read_Text;

    ifstream Read_File("data.txt");

    while (getline(Read_File, Read_Text))
    {
        cout<<Read_Text;
    }
    Read_File.close();

    return 0;
}