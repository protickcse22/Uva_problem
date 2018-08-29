#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, d, a, b, n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s >> d;
        a = (s + d) / 2;
        b = (s - d) / 2;
        if(b < 0 || ((s % 2) != 0 && (d % 2) == 0) || ((s % 2) == 0 && (d % 2) != 0) )
            cout << "impossible" << endl;
        else
            cout << a << " " << b << endl;
    }
    return 0;
}
