#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,arr[1000];
    while(cin>>n)
    {
        if(n==0) break;
        int cnt=0,x=0;
        while(n>0)
        {
            arr[x]=n%2;
            n=n/2;
            if(arr[x]==1)
            {
                cnt++;
            }
           x++;

        }
        cout<<"The parity of ";
        for(int j=x-1;j>=0;j--)
        {
            cout<<arr[j];
        }
        cout<<" is "<<cnt<<" (mod 2)."<<endl;
    }


  return 0;
}

