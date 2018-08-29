#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hc, mc, ha, ma, a, b, c;
    while(cin >> hc >> mc >> ha >> ma)
    {
        if(hc == 0 && mc == 0 && ha == 0 && ma == 0)
            break;
        else
        {
            if((hc < ha))
            {

                if((mc <= ma))
                {
                    a = abs((ha - hc) * 60 + (ma - mc));
                    cout << a << endl;
                }
                else
                {
                    b = abs((ha - hc - 1) * 60 + (60 - mc + ma));
                    cout << b << endl;
                }

            }
            else if(hc == ha)

            {
                if(mc > ma)
                {
                    c = abs((23 * 60) + (60 - mc + ma));
                    cout << c << endl;
                }
                else
                    cout << abs(ma - mc) << endl;

            }
            else if(hc > ha)
            {
                if(mc > ma)
                {
                    cout << abs(((24 - (hc - ha) - 1) * 60) + (60 - mc + ma)) << endl;
                }
                else
                    cout << abs(((24 - (hc - ha)) * 60) + (ma - mc)) << endl;
            }
            else if(hc == 23 && ha == 0)
            {
                cout << abs((60 - mc) + ma) << endl;
            }
        }


    }


    return 0;
}
