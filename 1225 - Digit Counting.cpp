

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
int arr[100001];
int main()
{
    int n, a, b, i, j, k, t, l, m;
    scanf("%d", &t);
    sfl(i, t)
    {
        scanf("%d", &n);
        int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;
        k = 0;
        for(j = 1; j <= n; j++)
        {
            m = j;
            while(m > 0)
            {
                arr[k++] = m % 10;
                m = m / 10;
            }

        }
        sfl(l, k)
        {
            if(arr[l] == 0) c0++;
            else if(arr[l] == 1) c1++;
            else if(arr[l] == 2) c2++;
            else if(arr[l] == 3) c3++;
            else if(arr[l] == 4) c4++;
            else if(arr[l] == 5) c5++;
            else if(arr[l] == 6) c6++;
            else if(arr[l] == 7) c7++;
            else if(arr[l] == 8) c8++;
            else if(arr[l] == 9) c9++;
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", c0, c1, c2, c3, c4, c5, c6, c7, c8, c9);
    }

    return 0;
}


