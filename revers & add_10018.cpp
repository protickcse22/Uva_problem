#include<bits/stdc++.h>
using namespace std;
long long int revers(long long int  n)
{
    long long int  arr[100], a, b, i = 0,j;
    while(n > 0)
    {
        arr[i] = n % 10;
        n = n / 10;
        i++;
    }
    long long int cnt = 0;
    b = 1;
    for(j = i - 1; j >= 0; j--)
    {
        cnt += arr[j] * b;
        b *= 10;

    }
    return cnt;
}
int main()
{
    long long int  n, a, b, c, t,x,i;
    cin >> t;
    for(i = 0; i < t; i++)
    {

        cin >> n;
        b=revers(n);
        x=n+b;
        c = 1;
        while(revers(x) != x)
        {
            x = x + revers(x);
            c++;
        }
        cout << c << " " << x << endl;


    }
    return 0;
}

