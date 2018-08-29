#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, cnt;
    while(cin >> a >> b)

    {   cout << a << " " << b;

        if(a > b)
        {
            swap(a,b);
        }
        int cnt1;
        cnt1 = 0;
        for(int i = a; i <= b; i++)
        {
            cnt = 1;
            int j = i;

            while(j > 1)
            {
                if((j % 2) != 0)
                {
                    j = (3 * j) + 1;
                }
                else
                {
                    j = j / 2;
                }
                cnt++;
            }
            if(cnt >= cnt1)
                cnt1 = cnt;
        }

       cout << " " << cnt1 << endl;
    }

    return 0;
}
