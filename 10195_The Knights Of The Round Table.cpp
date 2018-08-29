#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, x, r, s;
    while(cin >> a >> b >> c)
    {
        if(a != 0 && b != 0 && c != 0)
        {
            s = (a + b + c) / 2.0;

            x = ((s - a) * (s - b) * (s - c)) / s;
            r = sqrt(x);
            printf("The radius of the round table is: %.3lf\n", r);
        }
        else
        {
            cout << "The radius of the round table is: 0.000" << endl;
        }

    }

    return 0;
}
