#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int main()
{
    int n,a,average,cnt=0;
    double x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        int sum=0;
        for(int j=0;j<a;j++)
        {
            cin>>arr[j];
            sum=sum+arr[j];

        }
        average=sum/a;
        for(int i=0;i<a;i++)
        {

       if(average<arr[i])
       {
        cnt++;
       }

        }

    x=(double)(cnt*100)/a;
    printf("%.3lf%%\n",x);
    cnt=0;

    }




  return 0;
}
