#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, cnt1, cnt2, cnt3, cnt4;
    char s[1000];
    scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++)
    {
        gets(s);
        int l = strlen(s);
        cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
        for(int j = 0; j < l; j++)
        {
            if(s[j] == 'a' || s[j] == 'd' || s[j] == 'g' || s[j] == 'j' || s[j] == 'm' || s[j] == 'p' || s[j] == 't' || s[j] == 'w' || s[j] == ' ')
            {
                cnt1++;
            }
            else if(s[j] == 'b' || s[j] == 'e' || s[j] == 'h' || s[j] == 'k' || s[j] == 'n' || s[j] == 'q' || s[j] == 'u' || s[j] == 'x')
            {
                cnt2 = cnt2 + 2;
            }
            else if(s[j] == 'c' || s[j] == 'f' || s[j] == 'i' || s[j] == 'l' || s[j] == 'o' || s[j] == 'r' || s[j] == 'v' || s[j] == 'y')
            {
                cnt3 = cnt3 + 3;
            }
            else if(s[j] == 's' || s[j] == 'z')
            {
                cnt4 = cnt4 + 4;
            }

            x = cnt1 + cnt2 + cnt3 + cnt4;
        }

        cout << "Case #" << i + 1 << ": " << x << endl;

    }

    return 0;
}
