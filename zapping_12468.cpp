#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    while(cin >> a >> b)
    {
        if(a == -1 && b == -1)
            break;
        else
        {
            c = abs(a - b);

            if(c < 50)
                cout << c << endl;
            else
                cout << abs(100 - c) << endl;

        }
    }
        return 0;
    }
