#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n, a, b, c;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if((a + b) > c && (b + c) > a && (c + a) > b)
        {
            if((a == b) &&(b== c) &&(c==a))
            {
                cout << "Case " << i + 1 << ": Equilateral" << endl;
            }
            else if(((a == b) || (b == c) || (c == a)))
            {
                cout << "Case " << i + 1 << ": Isosceles" << endl;
            }
            else if((a != b) &&(b!=c) &&(a!= c))
            {
                cout << "Case " << i + 1 << ": Scalene" << endl;
            }
        }


        else
            cout << "Case " << i + 1 << ": Invalid" << endl;
    }


    return 0;
}
