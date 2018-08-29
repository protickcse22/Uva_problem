#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b,i,j;

    for(i = 1; i <= 12; i++)
    {
        for(j = 0; j <= 59; j++)
        {
            a = fabs(((i * 30) + (0.5 * j)) - (6 * j));

            cout<<i<<":"<<j<<"="<<a<<endl;
        }


    }


    return 0;
}
