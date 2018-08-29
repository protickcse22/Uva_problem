#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    while(gets(s))
    {

        int up=0,low=0,num=0,sp=0;
        int len=0;
        for(int i=0; s[i]!='\0'; i++)
        {    len++;


           if(s[i]>='A' && s[i]<='Z' )
            {
                up++;
                cout<<s[i];
            }

            else if(s[i]>='a' && s[i]<='z')
            {
                low++;
            }
            else if(s[i]>='0' && s[i<='9'])
            {
                num++;
            }
            else if(s[i]==' ')
            {
                sp++;
            }

        }
        cout<<endl;
        cout<<"String length :"<<len<<endl;
        cout<<"Upper case letter: "<<up<<endl;
        cout<<"Lower case letter: "<<low<<endl;
        cout<<"Numeric case letter: "<<num<<endl;
        cout<<"Space case letter: "<<sp<<endl;
        puts(s);
    }
    return 0;
}
