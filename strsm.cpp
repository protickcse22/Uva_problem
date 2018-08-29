#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[10000], str2[10000], str3[10000], str4[10000];
    int len1, len2, cry, i, j, k, l, i1, j1, k1, l1, cnt, x1;
    gets ( str1 );
    gets ( str2 );
    for ( i = ( strlen ( str1 ) - 1 ), j = 0; i >= 0, j < strlen ( str1 ); i--, j++ )
    {
        str3[j] = str1[i];
    }
    str3[j] = '\0';

    for ( i1 = ( strlen ( str2 ) - 1 ), j1 = 0; i1 >= 0, j1 < strlen ( str2 ); i1--, j1++ )
    {
        str4[j1] = str2[i1];
    }
    str4[j1] = '\0';

    if ( strlen ( str3 ) > strlen ( str4 ) )
    {
        for ( k = strlen ( str4 ); k < strlen ( str3 ); k++ )
        {
            str4[k] = '0';
        }
        str4[k] = '\0';
    }
    else
    {
        for ( l = strlen ( str3 ); l < strlen ( str4 ); l++ )
        {
            str3[l] = '0';
        }
        str3[l] = '\0';
    }
 char sum[10000];
 int carry=0,x;
 for(x=0;x<strlen(str3);x++)
 {
     int x1=str3[x]-'0'+str4[x]-'0'+carry;
     if(x1>9)
     {   carry=1;
         sum[x]=(x1%10)+'0';
     }
     else
        sum[x]=x1+'0';

 }
  sum[x]='\0';
  if(carry>0) sum[x]=carry +'0';

  for(int m=(strlen(sum)-1);m>=0;m--)
  {
      cout<<sum[m];
  }

   return 0;
}
