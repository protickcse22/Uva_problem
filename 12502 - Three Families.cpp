#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n, a, b, c;
    float s, x;
    cin >> n;
    for ( int i = 0; i < n; i++ )
    {
        cin >> a >> b >> c;
        x=(c/(a+b));
        s=((x*a)+(a-b)*x);
        printf("%.0f\n",s);

    }


    return 0;
}
