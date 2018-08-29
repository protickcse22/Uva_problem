#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    double n, w, x, y, z, s;
    while(cin >> a >> b >> c)
    {


        s = (a + b + c) / 2;
        double i = (s * (s - a) * (s - b) * (s - c));
        n = sqrt(i);
        x = (4* n) / 3;
        w = ((x * 2) / a);
        y = ((x * 2) / b);
        z = ((x * 2) / c);

        if((w + y) > z || (y + z) > w || (z + w) > y)
        {
            printf("%.3lf\n", x);
        }
        else
            cout << "-1.000" << endl;
    }

    return 0;
}
