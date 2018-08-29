#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e,f,c,d,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {

      cin>>e>>f>>c;
      int x=(e+f);
      b=0;
      while(x>=c)
        {
           a=x/c;
           b+=a;
           x=a+(x%c);
        }
     cout<<b<<endl;
    }

   return 0;
}
