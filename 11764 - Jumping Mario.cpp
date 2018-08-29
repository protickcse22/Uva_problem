#include<bits/stdc++.h>
using namespace std;
int arr[100];
int main()
{
    int n,a,b,lc=0,hc=0,k;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        for(int j=0; j<a; j++)
        {
            cin>>arr[j];

        }
        for(k=0;k<a-1;k++)
        {
           if(arr[k]!=arr[k+1])
           {
               if(arr[k+1]>arr[k])
               {
                   hc++;
               }
               else
                lc++;
           }
        }
       cout<<"Case "<<i+1<<": "<<hc<<" "<<lc<<endl;
       hc=0,lc=0;
    }


return 0;
}
