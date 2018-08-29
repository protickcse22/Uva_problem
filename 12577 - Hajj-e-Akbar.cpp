#include<bits/stdc++.h>
using namespace std;
int main()
{  int cnt=0;
   string s;
   while(getline(cin,s))
     {
         if(s=="*")break;
         else if(s=="Hajj")
         {
             cout<<"Case "<<cnt+1<<": Hajj-e-Akbar"<<endl;
         }
         else if(s=="Umrah")
         {
             cout<<"Case "<<cnt+1<<": Hajj-e-Asghar"<<endl;
         }
         cnt++;
     }
   return 0;
}
