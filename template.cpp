#include<stdio.h>
int main()
{
    int n,a[11],i,c,e,d,f,t,j=1;
    scanf("%d",&t);
    while(t--)
  {
    c=0;
    e=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
    for(i=1;i<n;i++)
      {
        if(a[i]>a[i-1])
          {
            for(i=1;i<n;i++)
            {
              if(a[i]>a[i-1])
                 c++;
            }
           }
              else
               {
                 for(i=1;i<n;i++)
                  {
                    if(a[i]<a[i-1])
                     c++;
                  }
               }
       }

       d=c/2;
       e=n-d;


       for(i=0;i<e;i++)
        {
           f=a[i];
        }
       printf("Case %d: %d\n",j,f);
       j++;
  }
      return 0;

}
