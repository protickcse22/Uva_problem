#include<bits/stdc++.h>
using namespace std;
int main()
{

    char arr[100], brr[100], c;
    gets(arr);
    int i, j;
    int l = strlen(arr);
    for(i = 0, j = 0; i < l; i++, j++)
    {
        if(((arr[i] == 'B') || (arr[i] == 'F') || (arr[i] == 'P') || (arr[i] == 'V')))

        {

            brr[j] = '1';
        }
        else if(((arr[i] == 'C') || (arr[i] == 'G') || (arr[i] == 'J') || (arr[i] == 'K') || (arr[i] == 'Q') || (arr[i] == 'S') || (arr[i] == 'X') || (arr[i] == 'Z')) && ((arr[i] != 'A') || (arr[i] != 'E') || (arr[i] != 'I') || (arr[i] != 'O') || (arr[i] != 'U') || (arr[i] != 'H') || (arr[i] != 'W')))
        {
            brr[j] = '2';
        }
        else if(((arr[i] == 'D') || (arr[i] == 'T')))
        {
            brr[j] = '3';
        }
        else if(((arr[i] == 'L')))
        {
            brr[j] = '4';
        }
        else if(((arr[i] == 'M') || (arr[i] == 'N')))
        {
            brr[j] = '5';
        }
        else if(((arr[i] == 'R')))
        {
            brr[j] = '6';
        }
        /*    else if(((arr[i]=='A') || (arr[i]== 'E') || (arr[i]== 'I') || (arr[i]=='O') || (arr[i]=='U') || (arr[i]=='H') || (arr[i]=='W')) && (arr[i]!=arr[i+1]))
           {
               brr[j]='';
           }
           */

    }
    brr[j]='\0';
    puts(brr);


    return 0;
}
