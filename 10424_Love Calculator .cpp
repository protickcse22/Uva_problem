
/*****************************************************************
 *                                    *
 *          protick kumer dey                                   *
 *          JU-CSE-22
            perseus_cilix                                            *
 *                                                   *
 *****************************************************************/

#include<algorithm>
#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<deque>
#include<climits>
#include<complex>
#include<bits/stdc++.h>

#define S scanf
#define P printf

#define LL long long int
#define ULL unsigned long long int
#define D double
#define pi acos(-1)
#define Max(a,b)    (a>b?a:b)
#define Min(a,b)    (a<b?a:b)
#define _Max(a,b,c) Max(a,Max(b,c))
#define _Min(a,b,c) Min(a,Min(b,c))
#define SQR(n)      (n*n)
#define NL         printf("\n");
#define fl(i,a,b) for(int i=a;i<=b;i++)
#define rfl(i,a,b) for(int i=b;i>=a;i--)
#define sfl(i,n) for(int i=0;i<n;i++)
#define rsfl(i,n) for(int i=n-1;i>=0;i--)
#define MEM(array,value) memset(array,value,sizeof(array));

using namespace std;
 int sumdigit( int n)
{
     int sum = 0, a;

    while(n > 0)
    {
        a = n % 10;
        n = n / 10;
        sum = sum + a;
    }
    if(sum <= 9)
    {
        return sum;
    }
    return sumdigit(sum);
}
int main()
{
  char s[40],s1[40];
  int n,a,b,c,r,i,j;

  while(gets(s) && gets(s1)){
    //getchar();
    int l1=strlen(s);
    int l2=strlen(s1);
    int sum1=0,sum2=0;
    for(i=0;i<l1;i++)
    {
      if(s[i]=='a' || s[i]=='A') a=1;
      else if(s[i]=='b' || s[i]=='B') a=2;
      else if(s[i]=='c' || s[i]=='C') a=3;
      else if(s[i]=='d' || s[i]=='D') a=4;
      else if(s[i]=='e' || s[i]=='E') a=5;
      else if(s[i]=='f' || s[i]=='F') a=6;
      else if(s[i]=='g' || s[i]=='G') a=7;
      else if(s[i]=='h' || s[i]=='H') a=8;
      else if(s[i]=='i' || s[i]=='I') a=9;
      else if(s[i]=='j' || s[i]=='J') a=10;
      else if(s[i]=='k' || s[i]=='K') a=11;
      else if(s[i]=='l' || s[i]=='L') a=12;
      else if(s[i]=='m' || s[i]=='M') a=13;
      else if(s[i]=='n' || s[i]=='N') a=14;
      else if(s[i]=='o' || s[i]=='O') a=15;
      else if(s[i]=='p' || s[i]=='P') a=16;
      else if(s[i]=='q' || s[i]=='Q') a=17;
      else if(s[i]=='r' || s[i]=='R') a=18;
      else if(s[i]=='s' || s[i]=='S') a=19;
      else if(s[i]=='t' || s[i]=='T') a=20;
      else if(s[i]=='u' || s[i]=='U') a=21;
      else if(s[i]=='v' || s[i]=='V') a=22;
      else if(s[i]=='w' || s[i]=='W') a=23;
      else if(s[i]=='x' || s[i]=='X') a=24;
      else if(s[i]=='y' || s[i]=='Y') a=25;
      else if(s[i]=='z' || s[i]=='Z') a=26;
      else a=0;
      sum1+=a;
    }
   double pr=sumdigit(sum1);

    for(j=0;j<l2;j++){
         if(s1[j]=='a' || s1[j]=='A') b=1;
      else if(s1[j]=='b' || s1[j]=='B') b=2;
      else if(s1[j]=='c' || s1[j]=='C') b=3;
      else if(s1[j]=='d' || s1[j]=='D') b=4;
      else if(s1[j]=='e' || s1[j]=='E') b=5;
      else if(s1[j]=='f' || s1[j]=='F') b=6;
      else if(s1[j]=='g' || s1[j]=='G') b=7;
      else if(s1[j]=='h' || s1[j]=='H') b=8;
      else if(s1[j]=='i' || s1[j]=='I') b=9;
      else if(s1[j]=='j' || s1[j]=='J') b=10;
      else if(s1[j]=='k' || s1[j]=='K') b=11;
      else if(s1[j]=='l' || s1[j]=='L') b=12;
      else if(s1[j]=='m' || s1[j]=='M') b=13;
      else if(s1[j]=='n' || s1[j]=='N') b=14;
      else if(s1[j]=='o' || s1[j]=='O') b=15;
      else if(s1[j]=='p' || s1[j]=='P') b=16;
      else if(s1[j]=='q' || s1[j]=='Q') b=17;
      else if(s1[j]=='r' || s1[j]=='R') b=18;
      else if(s1[j]=='s' || s1[j]=='S') b=19;
      else if(s1[j]=='t' || s1[j]=='T') b=20;
      else if(s1[j]=='u' || s1[j]=='U') b=21;
      else if(s1[j]=='v' || s1[j]=='V') b=22;
      else if(s1[j]=='w' || s1[j]=='W') b=23;
      else if(s1[j]=='x' || s1[j]=='X') b=24;
      else if(s1[j]=='y' || s1[j]=='Y') b=25;
      else if(s1[j]=='z' || s1[j]=='Z') b=26;
      else b=0;

      sum2+=b;
    }
    double br=sumdigit(sum2);
    double res;
    if(pr>br)
    {
        res=(br/pr)*100.0;
        P("%.2lf %%\n",res);
    }
     else{
        res=(pr/br)*100.0;
        P("%.2lf %%\n",res);
     }


    }
return 0;
}


