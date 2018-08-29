#include<bits/stdc++.h>
using namespace std;
double factdigit(double n)
{
    double cnt = 0;
    for(int i = 1; i <= n; i++)
    {

        cnt += log10(i);
    }
    return  cnt;
}
int main()
{

    double n;
    double a;
    cin >> n;
    a = factdigit(n);
    cout << ceil(a) << endl;
    main();

    return 0;
}
