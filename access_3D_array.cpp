#include<iostream>
#include<string>
using namespace std;

int main()
{
    int m, n, p, i, j, k;
    m = n = p = 2;
    string cars[m][n][p] = {
                            {{"A", "B"}, {"C", "D"}},
                            {{"E", "F"}, {"G", "H"}}
                        };
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < p; k++)
            {
                cout<<cars[i][j][k]<<"\t";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}