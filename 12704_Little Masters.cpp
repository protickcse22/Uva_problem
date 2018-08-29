#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,r,a,b,c,d,s,l,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>x>>y>>r;
       a=(x*x)+(y*y);
       b=sqrt(a);
       l=(r+b);
       s=fabs((r-b));

     printf("%.2lf %.2lf\n",s,l);

    }

  return 0;
}
