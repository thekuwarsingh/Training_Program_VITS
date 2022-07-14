#include<iostream>
#include<string>
using namespace std;

int main()
{
    int m, n, i, j;
    m = n = 2;
    string cars[m][n] = {
        {"Audi", "BMW"}, 
        {"Honda", "Maruti"}
    };
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout<<cars[i][j]<<"\t";
        }
        cout<<"\n\n";
    }
    return 0;
}