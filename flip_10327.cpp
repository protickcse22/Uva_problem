#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,i,j,array[1000];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>array[i];
        }
     int counter=0;
     for(i=0;i<n-1;i++)

       {
           for(j=0;j<n-1;j++)
           {
               if(array[j+1]<array[j])
               {
                   temp=array[j];
                   array[j]=array[j+1];
                   array[j+1]=temp;
                   counter++;
               }
           }
       }

cout<<"Minimum exchange operations : " <<counter<<endl;
    }
   return 0;
}
