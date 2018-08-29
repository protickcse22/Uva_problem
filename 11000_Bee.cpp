#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,t;
    while(cin>>n)
    {

        if(n<0) break;
        else
        {
            if(n==0) {cout<<n<<" 1"<<endl;}
            else if(n==1)
            {
                cout<<n<<" "<<n+1<<endl;

            }
            else
            {
                m=n+1;
                t=n+m;
                cout<<m<<" "<<t<<endl;
            }

        }

    }



}
