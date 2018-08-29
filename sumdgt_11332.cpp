#include<bits/stdc++.h>
using namespace std;
long long int sumdigit(long long int n)
{
    long long int sum = 0, a;

    while(n > 0)
    {
        a = n % 10;
        n = n / 10;
        sum = sum + a;
    }
    if(sum <= 9)
    {
        return sum;
    }
    return sumdigit(sum);

}
int main()
{
    long long int a, b;
    while(cin >> a)
    {
        if(a == 0)break;

        b = sumdigit(a);
        cout << b << endl;

    }
    return 0;
}
