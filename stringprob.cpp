#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000],s;
    int a,b;
    gets(ch);
    int l=strlen(ch);
    for(int i=0;i<l;i++)
   {
       if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
       {
          printf("%c",ch[i]);

       }
     else if(ch[i]!='a' || ch[i]!='e' || ch[i]!='i'|| ch[i]!='o'|| ch[i]!='u' || ch[i]!='A' || ch[i]!='E' || ch[i]!='I' || ch[i]!='O' || ch[i]!='U')
     {
        printf("%c",ch[i]);
     }

   }
  return 0;
}
