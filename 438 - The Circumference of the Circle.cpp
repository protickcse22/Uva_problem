#include<bits/stdc++.h>
#define pi 3.141592653589793
using namespace std;
int main()
{
    double a, b, c, d, e, f, x1, y1, x2, y2, x3, y3, r, l, n, g, h, cir;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)
    {

        e = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
        a = sqrt(e);
        l = ((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2));
        b = sqrt(l);
        n = ((x1 - x3) * (x1 - x3)) + ((y1 - y3) * (y1 - y3));
        c = sqrt(n);
        f = fabs((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c));
        g = sqrt(f);
        d = ((2.0 * a * b * c) / g);
        r = (d / 2.0);
        cir = (2.0 * pi * r);
        printf("%.2lf\n", cir);

    }


    return 0;
}
