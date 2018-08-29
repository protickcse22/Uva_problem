#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,sum=0,i;
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
        {

            sum=sum+(i*i*i);

        }
        cout<<sum<<endl;
        sum=0;
    }

   return 0;
}
