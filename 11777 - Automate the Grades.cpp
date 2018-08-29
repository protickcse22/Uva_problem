#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, a, b, c, d, e, f, g, sum, x, arr[3];
    cin >> n;
    for(int i = 0; i < n; i++)
    {

        cin >> a >> b >> c >> d >> e >> f >> g;
        {
            arr[0] = e;
            arr[1] = f;
            arr[2] = g;
            sort(arr, arr + 3);
            x = (arr[1] + arr[2]) / 2;

            sum = a + b + c + d + x;
            if(sum >= 90)
                cout<<"Case "<<i+1<<": A"<<endl;
            else if(sum >= 80 && sum < 90)
                cout<<"Case "<<i+1<<": B"<<endl;
            else if(sum >= 70 && sum < 80)
                cout<<"Case "<<i+1<<": C"<<endl;
            else if(sum >= 60 && sum < 70)
                cout<<"Case "<<i+1<<": D"<<endl;
            else if(sum < 60)
                cout<<"Case "<<i+1<<": F"<<endl;


        }

    }

    return 0;
}
