#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000],v[1000];

    int ps,len,j=0;
    gets(s);
    cin>>ps>>len;
    for(int i=ps; i<ps+len; i++)
    {
        v[j]=s[i];
        j++;
    }
    v[j]='\0';
    cout<<v;
    return 0;
}
