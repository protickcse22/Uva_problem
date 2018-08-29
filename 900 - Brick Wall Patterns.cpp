#include<bits/stdc++.h>
using namespace std;
int ptwall(long long  n)
{
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else if(n == 3)
        return 3;
    else
        return ptwall(n - 1) + ptwall(n - 2);
}
int main()
{
    long long x;
    while(cin >> x)
    {
        if(x == 0) break;
        long long c = ptwall(x);
        cout << c << endl;
    }

    return 0;
}

