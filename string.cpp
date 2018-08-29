#include<bits/stdc++.h>
using namespace std;
int main()
{
//initialized string
    int j;
    char str1[80];
    const int MAX = 80; //size of str2 buffer
    char str2[MAX];
    cout << "Enter your String here: ";
    cin.get ( str1, 100 ); //empty string
    strcpy ( str2, str1 );
    cout << str2 << endl; //display str2
    return 0;
}
