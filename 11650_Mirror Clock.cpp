#include<bits/stdc++.h>
using namespace std;
int main()
{

    int h, m, a, b, c, n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        scanf("%d:%d", &h, &m);
        if((h == 12 || h == 6 || h == 0 ) && m == 0)
        {
            printf("%02d:%02d\n", h, m);
        }
        else if(h < 11 && m > 0)
        {
            printf("%02d:%02d\n", 11 - h, 60 - m);
        }

        else if(h == 11 && m > 0)
        {
            printf("%02d:%02d\n", h + 1, 60 - m);

        }

        else if(h == 12 && m > 0)
        {
            printf("%02d:%02d\n", h - 1, 60 - m);
        }
        else if(h <= 11 && m == 0)
        {
            printf("%02d:%02d\n", 12 - h, m);
        }

    }
    return 0;
}
