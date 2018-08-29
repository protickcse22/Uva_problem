#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dc,mc,yc,db,mb,yb,t,y;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d/%d/%d",&dc,&mc,&yc);
        scanf("%d/%d/%d",&db,&mb,&yb);

        if(dc<db)
        {

            mc--;
        }
            if(mc<mb)
            {
                yc--;
            }
        y=yc-yb;
        if(y<0)
        {
            cout<<"Case #"<<i+1<<": Invalid birth date"<<endl;
        }
        else if(y>130)
        {
            cout<<"Case #"<<i+1<<": Check birth date"<<endl;
        }
        else
            cout<<"Case #"<<i+1<<": "<<y<<endl;
    }

    return 0;
}
