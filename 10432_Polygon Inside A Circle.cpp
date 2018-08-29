#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{

    double r,n,a,b,c,d,area;
    while(cin>>r>>n)
    {
        a=(0.5)*n*(r*r);
        b=sin(((2*pi)/n));
        area=a*b;
        printf("%.3lf\n",area);
    }


   return 0;
}
