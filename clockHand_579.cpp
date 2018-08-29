#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h, m, a, b;
    while(scanf("%lf:%lf", &h, &m) == 2)
    {
        if(h == 0 && m == 00)
            break;
        a = fabs(((h * 30) + (0.5 * m)) - (6 * m));   /* a = fabs(((0.5)*((h*60)+m))-6m) */
        if(a > 180)
        {
            b = 360 - a;
            printf("%.3lf\n", b);
        }
        else
            printf("%.3lf\n", a);

    }

    return 0;
}
