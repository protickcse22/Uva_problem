#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, b, s;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        s = 0;
        if(n < 180000)
            cout << "Case " << i + 1 << ": 0" << endl;
        else
        {
            n = n - 180000;
            if(n < 300000)
                s = s + (float)(n * 0.1);
            if(n >= 300000)
            {
                n = n - 300000;
                s = s + 30000;
                if(n < 400000)
                    s = s + (float)(n * (0.15));
                if(n >= 400000)
                {
                    n = n - 400000;
                    s = s + 40000;
                    if(n < 300000)
                        s = s + (float)(n * (0.20));
                    if(n >= 300000)
                    {
                        n = n - 300000;
                        s = s + 30000;
                        s = s + (float)(n * (0.25));

                    }

                }
            }
            if(s == 0) cout << "Case " << i + 1 << ": 2000" << endl;
            else
                cout << "Case " << i + 1 << ": " << s << endl;



        }


    }
    return 0;
}
