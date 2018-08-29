

/*****************************************************************
 *                                    *
 *          protick kumer dey                                   *
 *          JU-CSE-22
            perseus_cilix                                            *
 *                                                   *
 *****************************************************************/

#include<algorithm>
#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<deque>
#include<climits>
#include<complex>

#define S scanf
#define p  printf

#define LL long long int
#define ULL unsigned long long int
#define D double
#define pi acos(-1)
#define Max(a,b)    (a>b?a:b)
#define Min(a,b)    (a<b?a:b)
#define _Max(a,b,c) Max(a,Max(b,c))
#define _Min(a,b,c) Min(a,Min(b,c))
#define SQR(n)      (n*n)
#define NL         printf("\n");
#define fl(i,a,b) for(int i=a;i<=b;i++)
#define rfl(i,a,b) for(int i=b;i>=a;i--)
#define sfl(i,n) for(int i=0;i<n;i++)
#define rsfl(i,n) for(int i=n-1;i>=0;i--)
#define MEM(array,value) memset(array,value,sizeof(array));

using namespace std;

string str = "1", res = "", ans[1001];
int n, a, b, c, carry = 0, i, j, k, l1, m, l2;

void fact1000()
{
    for(i = 1; i <= 1000; i++)
    {
        l1 = str.size();
        for(j = l1 - 1; j >= 0; j--)
        {
            a = ((str[j] - '0') * i) + carry;
            if(a > 9)
            {
                b = a % 10;
                res += (b + '0');
                carry = a / 10;
            }
            else
            {
                res += (a + '0');
                carry = 0;
            }
        }
        str = "";
        if(carry > 0)
        {
            while(carry)
            {
                b = carry % 10;
                res += (b + '0');
                carry /= 10;
            }
        }
        l2 = res.size();
        for(k = l2 - 1; k >= 0; k--)
        {
            str += res[k];
        }
        res = "";
        ans[i] = str;
    }

}
int main()
{
    int n;
    fact1000();
    while(scanf("%d", &n) == 1)
    {
        ans[0] = 1;
        cout << n << "!\n" << ans[n] << endl;
    }

    return 0;
}


