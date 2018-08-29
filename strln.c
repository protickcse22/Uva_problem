#include<stdio.h>
int main()
{
    int cnt=0,i;
    char s[100];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        cnt++;
    }
    printf("%d\n",cnt);

   return 0;
}
