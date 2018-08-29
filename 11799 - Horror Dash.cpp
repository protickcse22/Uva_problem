#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,arry[1000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arry[j];
        }
        sort(arry,arry+n);
        cout<<"Case "<<i+1<<": "<<arry[n-1]<<endl;

    }

   return 0;
}
