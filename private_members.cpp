#include<iostream>
using namespace std;

class VITS
{
    private:
        string name = "Pushpa";
    public:
        int x = 5;
        string store_name = name;
};

int main()
{
    VITS Access_Members;
    cout<<"x : "<<Access_Members.x<<endl;
    cout<<"Name : "<<Access_Members.store_name;
    return 0;
}