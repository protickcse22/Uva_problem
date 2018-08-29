#include<bits/stdc++.h>
using namespace std;
int main()
{
    double d, v, u, a, b, c, t, x;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> d >> v >> u;
        if(v == 0 || u == 0 || v >= u)
            cout << "Case " << i + 1 << ": can't determine" << endl;
        else
        {
            a = (d / u);
            b = (u * u) - (v * v);
            c = sqrt(b);
            t = (d / c);
            x = fabs(a - t);
            if(x < 0.001)
                cout << "Case " << i + 1 << ": can't determine" << endl;
            else
                printf("Case %d: %.3lf\n", i + 1, x);
        }



    }

    return 0;
}
