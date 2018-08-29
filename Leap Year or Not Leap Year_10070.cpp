#include<bits/stdc++.h>
using namespace std;
int main()
{

    char str[1000000];
    bool flag;
    int i, j=0, k, l, mod1, mod2, mod3, mod4, mod5;
    while(scanf("%s", &str) == 1)
    {
       mod1=mod2=mod3=mod4=mod5=0;
       flag=0;
        for(i = 0; str[i] != '\0'; i++)
        {
            mod1 = (mod1 * 10 + (str[i] - '0')) % 4;
            mod2 = (mod2 * 10 + (str[i] - '0')) % 400;
            mod3 = (mod3 * 10 + (str[i] - '0')) % 15;
            mod4 = (mod4 * 10 + (str[i] - '0')) % 55;
            mod5 = (mod5 * 10 + (str[i] - '0')) % 100;
        }
        if(j>0)
            cout<<endl;
        if(mod1 == 0 && mod5 != 0|| mod2 == 0)
        {
            cout << "This is leap year." << endl;
            flag = 1;
        }
        if(mod3 == 0)
        {
            cout << "This is huluculu festival year." << endl;
            flag=1;

        }
        if(mod1 == 0 && mod5 != 0 || mod2 == 0)
        {
            if(mod4 == 0)
            {
                cout << "This is bulukulu festival year." << endl;
                flag = 1;
            }
        }
        if(flag == 0)
            cout << "This is an ordinary year." << endl;
            j++;
    }


    return 0;
}
