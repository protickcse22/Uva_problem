#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, n, counter, i;
    while(cin >> a >> b)
    {
        if(a == 0 && b == 0)break;
        else
        {

            counter = 0;
            for(i = a; i <= b; i++)
            {
                long long   int j = sqrt(i);
                if(j * j == i)

                    counter++;
            }
            cout << counter << endl;
        }
    }

    return 0;
}
