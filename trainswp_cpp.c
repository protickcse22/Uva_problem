#include<bits/stdc++.h>
using namespace std;
int array[1000];
int main()
{
   int n,a,b,temp;
   cin>>n;
   for(int i=0;i<n;i++)
    {
       cin>>a;
       for(int j=0;j<a;j++)
        {
            cin>>array[i];
        }
        int counter=0;
        for(int i=0;i<a-1;i++)
          {
              for(int j=0;j<a-1;j++)
              {
                 if(array[j+1]<array[j])
                 {
                     temp=array[j+1];
                     array[j+1]=array[j];
                     array[j]=temp;
                     count++;
                 }
              }
          }

          cout<<"Optimal train swapping takes "<<count+1<<" swaps."<<endl;


    }


   return 0;
}
