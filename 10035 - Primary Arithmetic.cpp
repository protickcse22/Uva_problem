#include<iostream>
using namespace std;
int main()
{
    int a, b, x, c, d, n;
    while(cin >> a >> b)
    {
        if(a == 0 && b == 0) break;
        int cnt = 0;
        if(a < b)
            swap(a, b);
            c=0;
        while(a > 0 || b > 0)
        {
            n = a % 10;
            a = a / 10;

            x = b % 10;
            b = b / 10;

            c = (n + x) + c;

            if(c > 9)
            {
                c = 1;
                cnt++;
            }
            else{
                c=0;

            }
        }
        if(cnt == 0)
            cout << "No carry operation." << endl;
        else if(cnt == 1)cout << cnt << " carry operation." << endl;
        else
            cout << cnt << " carry operations." << endl;

    }

    return 0;
}
