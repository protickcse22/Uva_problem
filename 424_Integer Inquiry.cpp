#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[10000], s2[10000], s3[10000], s4[10000], s5[10000], s6[10000], sum[10000];
    int a, b, i, i1, i2, i3, i4, j, j1, j2, j3, j4, j5, carry;
    int v=0;
    while(gets(s1))
    {
        if(s1=="0")
        {
            for(int a=strlen(sum)-1;a>=0;a--)
            {
                cout<<sum[a];
            }
            cout<<endl;
        }


        for(i = (strlen(s1) - 1), j = 0; i >= 0, j < strlen(s1); i--, j++)
        {
            s2[j] = s1[i];
        }
        s2[j] = '\0';

        if(v==0){
            for(i1 = 0; i1 < strlen(s1); i1++)
            {
                s3[i1] = '0';
            }
            s3[i1] = '\0';
            v++;
        }

        carry = 0;
        int x, x1;
        for(i2 = 0; i2 < strlen(s2); i2++)
        {
            x = s2[i2] - '0' + s3[i2] - '0' + carry;
            if(x > 9)
            {
                carry = 1;
                sum[i2] = (x % 10) + '0';
            }
            else
            {
                sum[i2] = x + '0';
                carry=0;
            }
        }
        sum[i2] = '\0';
        if(carry > 0) sum[i2] = carry + '0';
        sum[i2 + 1] = '\0';

        strcpy(s3, sum);

        for(int a = strlen(sum) - 1; a >= 0; a--)
        {
            cout << sum[a];
        }
        cout << endl;
    }
    return 0;
}
