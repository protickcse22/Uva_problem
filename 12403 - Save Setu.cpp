#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    int t, a, b, j, sum;
    cin >> t;
    getchar();
    sum=0;
    for(int i=0;i<t;i++)
{
    scanf("%s",&arr);
    if(strcmp("donate",arr)==0)
    {
        cin>>a;
        sum+=a;
    }
    if(strcmp("report",arr)==0)
        cout<<sum<<endl;;

}
    return 0;
}
