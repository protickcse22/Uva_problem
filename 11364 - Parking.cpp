#include<bits/stdc++.h>
using namespace std;
int arr[100];
int main()
{
    int t, n, i, j, k, temp = 0, c;
    cin >> t;
    for ( i = 0; i < t; i++ )
    {
        cin >> n;
        for ( j = 0; j < n; j++ )
        {
            cin >> arr[j];
        }
        for ( j = 0; j < n - 1; j++ )
        {
            for ( k = 0; k < n - 1; k++ )
            {
                if ( arr[k + 1] < arr[k] )
                {
                    temp = arr[k + 1];
                    arr[k + 1] = arr[k];
                    arr[k] = temp;
                }
            }
        }
        c = 0;
        for ( j = 0; j < n - 1; j++ )
        {
            c = c + ( arr[j + 1] - arr[j] );

        }
        cout << ( c * 2 ) << endl;

    }

    return 0;
}
