#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int value,inputsize;
    vector<int>myvector;
    cin>>inputsize;
    if(myvector.empty())
        cout<<"Vector is empty. "<<endl;
    cout<<"Size before value insert: "<<myvector.size()<<endl;
    for(int i=0; i<inputsize; i++)
    {
        cin>>value;
        myvector.push_back(value);

    }
    if(!myvector.empty())
        cout<<"vector is not empty. "<<endl;
    cout<<"Size after value insert :"<<myvector.size()<<endl;

    for(int i=0; i<myvector.size(); i++)
    {

        cout<<myvector[i]<<' ';

    }
    cout<<endl;
    sort(myvector.begin(),myvector.end());
    for(int i=0; i<myvector.size(); i++)
    {
        cout<<myvector[i]<<' ';
    }
    cout<<endl;

    return 0;
}
