#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if((a + b > c) && (b + c > a) && (c + a > b))
            cout << "OK" << endl;
        else
            cout << "Wrong!!" << endl;
    }

    return 0;
}
