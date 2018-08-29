#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,j;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        b=((((((a*567)/9)+7492)*235)/47)-498);
        c=b/10;
        d=c%10;
        if(d<0)
        {
            j=d*(-1);
        cout<<j<<endl;
        }
        else
        cout<<d<<endl;


    }

   return 0;
}

