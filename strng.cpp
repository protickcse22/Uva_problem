#include<bits/stdc++.h>
using namespace std;
int main()
{

    char str1[1000], str2[1000];
    int i, len1, len2, j;
    gets ( str1 );
    gets ( str2 );
    len1 = strlen ( str1 );
    len2 = strlen ( str2 );
    if ( len1 > len2 )
    {
        for ( i = len2; i < len1; i++ )
        {
            str2[i] = '0';
        }
        str2[i] = '\0';

    }
    else
    {
        for ( j = len1; j < len2; j++ )
        {
            str1[j] = '0';
        }
        str1[j] = '\0';
    }
    puts ( str1 );
    puts ( str2 );



    return 0;
}
