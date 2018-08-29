#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, arr[100], a, b, cnt = 0, aver;
    while(cin >> n)
    {
        if(n == 0) break;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        a = 0;
        for(int j = 0; j < n; j++)
        {
            a = a + arr[j];
        }
        aver = a / n;
        int x, sum = 0;
        for(int l = 0; l < n; l++)
        {
            if(aver > arr[l])
            {
                x = aver - arr[l];
                sum += x;
            }
        }
        cout << "Set #" << cnt + 1 << "\n" << "The minimum number of moves is " << sum << ".\n" << endl;
        cnt++;

    }

    return 0;
}
