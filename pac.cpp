#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
 {
     int x;
     x=sqrt(n);
     for(int i=2;i<=x;i++)
     {
         if(n%i==0)
         return false;
     }
     return true;
 }

int main()
{
   int n,a,b;
   while(cin>>n)
   {
     if(isprime(n))
    cout<<"this is prime number"<<endl;
   else
    cout<<"this is prime not number"<<endl;

   }

   return 0;
}
