#include<cstdio>
#include<iostream>
#define P(a)            printf("%d\n",a)
#define  FOR(i,a,b)     for(int i=a;i<=b;i++)
#define S1(a)           scanf("%d",&a)
#define S2(a,b)         scanf("%d%d",&a,&b)
#define  DBLS(a)        scanf("%lf",&a)
#define FOR1(i,n)       for(int i=1;i<=n;i++)
#define  pi acos(-1)
using namespace std;
int main()
{
    int n,sum=1,i;
    S1(n);
    if(n==0)
    printf("0");
    FOR1(i,n)
  {
      sum*=i;
  }
P(sum);
   return 0;
}
