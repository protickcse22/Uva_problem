#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[110], n, a, b;
    while ( cin >> n )
    {
        if ( n == 0 ) break;
        //for ( int i = 0; i <= 110; i++ ) arr[i] = 0;
        memset ( arr, 0, sizeof arr );

        for ( int j = 0; j < n; j++ )
        {
            cin >> a;
            arr[a]++;
        }
        int cnt=0;
        for ( int k = 0; k < 101; k++ ){
            for (int l = 0; l < arr[k]; l++ ){
               cnt++;
                if(cnt==n)
                cout<<k;
                else
                cout << k<<" ";

            }
        }
           cout<<endl;
    }
    return 0;
}
