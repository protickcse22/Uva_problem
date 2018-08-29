#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, x, d, e, m, a1, b1, c1, n, sum, cnt = 0, t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {

        cin >> a;

        if(a <= 9)
            x = (a * a);
        else
            x = a;
        sum = 0;
        while(x > 0)
        {
            b = x % 10;
            x = x / 10;
            c = (b * b);
            sum += c;
        }
        if(sum <= 9)
        {
            if(sum == 1)
            {
                cout << "Case #" << i + 1 << ": " << a << " is a Happy number." << endl;
            }
            else
                cout << "Case #" << i + 1 << ": " << a << " is an Unhappy number." << endl;
        }

        else
        {
            while(sum > 9)
            {
                n = 0;
                while(sum > 0)
                {
                    d = sum % 10;
                    sum = sum / 10;
                    m = (d * d);
                    n += m;
                }
                if(n > 9)
                    sum = n;

            }
            if(n == 1)
            {
                cout << "Case #" << i + 1 << ": " << a << " is a Happy number." << endl;
            }
            else
                cout << "Case #" << i + 1 << ": " << a << " is an Unhappy number." << endl;

        }

    }

    return 0;

}
