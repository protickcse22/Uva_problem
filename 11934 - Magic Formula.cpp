#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d, l, cnt, x, y;
    while ( cin >> a >> b >> c >> d >> l )
    {

        if ( a == 0 && b == 0 && c == 0 && d == 0 && l == 0 ) break;
        cnt = 0;
        for ( int i = 0; i <= l; i++ )
        {

            x = ( a * ( i * i ) ) + ( b * i ) + c;
            if ( ( x % d ) == 0 )
            {
                cnt++;
            }

        }
        cout << cnt << endl;

    }

    return 0;
}

