#include<iostream>
using namespace std;

class satna
{
    public:
        void greet()
            {
                cout<<"Welcome to Satna..";
            }
};
int main()
{
    satna greet_msg;
    greet_msg.greet();

    return 0;
}