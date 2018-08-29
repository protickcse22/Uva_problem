#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int arr1[1000000];
int arr2[1000000];
int main()
{
    int n,i,j,d,t,st,lt,a,val1,ma,l;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {

        scanf("%d%d",&d,&n);
        int val=0,k=0;
        a=d/2;
        for(j=0; j<n; j++)
        {

            scanf("%d",&arr[j]);

            if(arr[j]>a)
            {
                arr1[k++]=d-arr[j];
            }
            else
            {
                arr1[k++]=arr[j];
            }

        }

        for(j=0; j<n; j++)
        {
            if(arr1[j]>val)
            {
                val=arr1[j];
            }

        }
        ma=d/2;
        l=0;
        for(j=0; j<n; j++)
        {
            if(arr[j]>ma)
            {

                arr2[l++]=arr[j];
            }
            else
            {
                arr2[l++]=d-arr[j];
            }

        }
        val1=0;
        for(j=0; j<n; j++)
        {
            if(arr2[j]>val1)
            {
                val1=arr2[j];
            }

        }

        printf("%d %d\n",val,val1);

    }

    return 0;
}
