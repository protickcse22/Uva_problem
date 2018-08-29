
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
int main()
{
    D x1, y1, x2, y2, x3, y3, x4, y4, x, y;
    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) == 8)
    {
        if(x1 == x2 && y1 == y2)
        {
            x = (x3 + x4) - x1;
            y = (y3 + y4) - y1;
        }
        else if(x1 == x3 && y1 == y3)
        {
            x = (x2 + x4) - x1;
            y = (y2 + y4) - y1;
        }
        else if(x1 == x4 && y1 == y4)
        {
            x = (x2 + x3) - x1;
            y = (y2 + y3) - y1;
        }
        else if(x2 == x3 && y2 == y3)
        {
            x = (x1 + x4) - x2;
            y = (y1 + y4) - y2;
        }
        else if(x2 == x4 && y2 == y4)
        {
            x = (x1 + x3) - x2;
            y = (y1 + y3) - y2;
        }
        else if(x3 == x4 && y3 == y4)
        {
            x = (x1 + x2) - x3;
            y = (y1 + y2) - y3;

        }
        printf("%.3lf %.3lf\n", x, y);
    }
    return 0;
}



