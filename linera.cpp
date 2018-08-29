#include<bits/stdc++.h>
using namespace std;
int DATA[1000],n,item,LOC;
void linear()
{

    DATA[n+1]=item;
    LOC=1;
    while(DATA[LOC]!=item)
    {

        LOC++;
    }
    if(LOC=n+1)
    LOC=0;

}
int main()
{
    int a,array[1000],itm;
    cin>>a;
    cin>>itm;
    for(int i=0;i<a;i++)
    {
        cin>>array[i];
        linear(array[i]);
    }
    printf("Item is found");



}
