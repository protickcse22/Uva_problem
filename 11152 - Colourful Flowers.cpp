#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    double a, b, c;
    double r1, r2, r, as, av, ar, x, y, s;
    while(cin >> a >> b >> c)
    {

       r = (sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b)));
    r1 = ((a * b * c) / r);
    s = (a + b + c)/2;
    x = (s * (s - a) * (s - b) * (s - c));
    double i = (sqrt(x));
    r2 = (i * 2) / (a + b + c);
    as = ((pi * (r1 * r1)) - i);
    ar = (pi * (r2 * r2));
    av = (i - ar);

    printf("%.4lf %.4lf %.4lf\n", as, av, ar);

    }


    return 0;
}
