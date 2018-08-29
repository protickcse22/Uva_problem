#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,x;
    double f,a;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
     scanf("%d%d",&c,&x);
     f=(((9*c)+160)/5.0)+x;
     a=((5*f)-160)/9.0;

     printf("Case %d: %.2f\n",i+1,a);

    }
 return 0;
}
