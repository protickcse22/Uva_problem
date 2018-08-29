#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int cnt=0,flag=1;
    while(scanf("%c",&ch)!=EOF){
            if(ch=='\n'){
                printf("%d\n",cnt);
                cnt=0;
               // flag=1;
            }
        if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
            if(flag==1){
                cnt++;
                flag=0;
            }
        }
        else{
            flag=1;
        }
    }


  return 0;
}
