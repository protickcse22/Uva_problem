#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b%a==0)
        cout<<a<<" "<<b<<endl;
        else
        cout<<"-1"<<endl;
    }


  return 0;
}
