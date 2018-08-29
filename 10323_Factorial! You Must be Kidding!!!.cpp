#include<iostream>
using namespace std;
int main()
{
    long long n, sum;
    while(cin >> n)
    {
        if(n <= 0)
        {
            if(n % 2 == 0)
                cout << "Underflow!" << endl;
            else
                cout << "Overflow!" << endl;

        }
        else if(n > 13)
        {
            cout << "Overflow!" << endl;
        }
        else
        {
            sum = 1;
            for(int i = 1; i <= n; i++)
            {
                sum *= i;
            }
            if(sum < 10000)
            {
                cout << "Underflow!" << endl;
            }
            else
                cout << sum << endl;
        }

    }


    return 0;
}
