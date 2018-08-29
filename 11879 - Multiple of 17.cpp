#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int mod, i, a, b;
    bool flag = 0;
    while(scanf("%s", s) == 1)
    {
        flag = 0;
        mod = 0;
        int len = strlen(s);
        if(len == 1 && s[0] == '0') break;
        for(i = 0; i < len; i++)
        {

            mod = (mod * 10 + (s[i] - '0')) % 17;

        }
        s[i] = '\0';
        if(mod == 0)
        {
            flag = 1;
            cout << "1" << endl;

        }
        if(flag == 0)
            cout << "0" << endl;

    }



    return 0;
}
