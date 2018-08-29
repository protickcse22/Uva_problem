#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else if(n==1)
        {

             double u,v,t,a,s;
             scanf("%lf%lf%lf",&u,&v,&t);
             s=((u+v)/2)*t;
             a=(v-u)/t;
             printf("Case %d: %.3lf %.3lf\n",cnt+1,s,a);
        }
        else if(n==2)
        {
            double u,v,a,s,t;
            scanf("%lf%lf%lf",&u,&v,&a);
            s=((v*v)-(u*u))/(2*a);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",cnt+1,s,t);

        }
        else if(n==3)
       {
           double u,a,s,v,t;
           scanf("%lf%lf%lf",&u,&a,&s);
           v=sqrt((u*u)+(2*a*s));
           t=(v-u)/a;
           printf("Case %d: %.3lf %.3lf\n",cnt+1,v,t);
       }
        else if(n==4)
       {
           double u,a,s,v,t;
           scanf("%lf%lf%lf",&v,&a,&s);
           u=sqrt((v*v)-(2*a*s));
           t=(v-u)/a;
           printf("Case %d: %.3lf %.3lf\n",cnt+1,u,t);
       }
       cnt++;


    }
  return 0;
}
