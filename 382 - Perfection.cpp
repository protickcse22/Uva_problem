

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
   int n,a,b,c,sum;
  printf("PERFECTION OUTPUT\n");
   while(scanf("%d",&n)==1)
   {
       if(n==0)
       {
          printf("END OF OUTPUT\n");
          break;
       }
      sum=0;
     for(int i=1;i<n;i++)
     {
         if(n%i==0)
         {
             sum+=i;
         }

     }
   if(sum==n)
   {
       printf("%5d  PERFECT\n",n);
   }
   else if(sum<n)
   {
       printf("%5d  DEFICIENT\n",n);
   }
   else
    printf("%5d  ABUNDANT\n",n);

   }
return 0;
}


