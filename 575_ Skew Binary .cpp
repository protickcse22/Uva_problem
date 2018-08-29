#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,arr[1000],j,cnt;
    while(cin>>n)
    {
      long long x=0;
    cnt=0;
    while(n>0)
    {
       arr[x]=n%10;
       n=n/10;
       x++;
       cnt++;
    }
    for(j=x-1;j>=0;j--)
       {
           if(j!=0)
            cout<<arr[j]<<" ";
           else
            cout<<arr[j];

       }
    cout<<endl<<cnt<<endl;
    }
  return 0;
}
