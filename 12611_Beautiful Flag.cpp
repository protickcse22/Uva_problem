#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,rad,len,wid,ul,ur,lf,lr,x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>n;
    for(int i=0;i<n;i++)
{
    cin>>r;
    rad=r;
    len=(5*r);
    wid=(3*r);
    x1=(len*(45.0/100))*(-1);
    y1=wid/2;
    x2=len*(55.0/100);
    y2=wid/2;
    x3=len*(55.0/100);
    y3=(wid/2)*(-1);
    x4=(len*(45.0/100))*(-1);
    y4=(wid/2)*(-1);
    cout<<"Case "<<i+1<<":\n"<<x1<<" "<<y1<<"\n"<<x2<<" "<<y2<<"\n"<<x3<<" "<<y3<<"\n"<<x4<<" "<<y4<<endl;


}
   return 0;
}
