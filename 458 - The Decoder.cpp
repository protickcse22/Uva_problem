#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    while((s=getchar())!=EOF)
    {
        if(s == '\n')

            putchar(s);
        else
        {
            int i = s;
            int x = i - 7;
            char c = x;
            putchar(c);
        }

    }
    return 0;
}
