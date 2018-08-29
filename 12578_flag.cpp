#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
   int n,a,b,c;
   double cir,rec,len,wid,rad;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>a;
       len=a;
       wid=a*(3.0/5);
       rad=a*(1.0/5);
       cir=pi*(rad*rad);
       rec=(len*wid)-cir;
       printf("%.2lf %.2lf\n",cir,rec);


   }

}
