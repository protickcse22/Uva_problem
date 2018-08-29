#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, d;
    cin >> n;
    for ( int i = 0; i < n; i++ )
    {
        cin >> a >> b >> c >> d;
        if ( a >= b + c + d || b >= a + c + d || c >= a + b + d || d >= a + b + c )
            cout << "banana" << endl;
        else if ( ( a == b ) && ( b == c ) && ( c == d ) )
            cout << "square" << endl;
        else if ( ( ( a == c ) && ( b == d ) ) || ( ( a == b ) && ( c == d ) ) || ( ( a == d ) && ( b == c ) ) )
            cout << "rectangle" << endl;
        else
            cout << "quadrangle" << endl;

    }
    return 0;
}


