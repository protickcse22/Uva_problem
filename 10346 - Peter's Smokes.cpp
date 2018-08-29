#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, c, x, d;
    while ( cin >> n >> k )
    {
        c = n;
        while ( n >= k )
        {

            x = n % k;
            n = n / k;
            c = c + n;
            n = n + x;
        }
        cout << c << endl;

    }

    return 0;
}
