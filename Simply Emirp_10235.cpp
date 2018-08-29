
/*****************************************************************
 *                                    *
 *          protick kumer dey                                   *
 *          JU-CSE-22
            perseus_cilix                                            *
 *                                                   *
 *****************************************************************/

#include<algorithm>
#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<deque>
#include<climits>
#include<complex>

#define S scanf
#define p  printf

#define LL long long int
#define ULL unsigned long long int
#define D double
#define pi acos(-1)
#define Max(a,b)    (a>b?a:b)
#define Min(a,b)    (a<b?a:b)
#define _Max(a,b,c) Max(a,Max(b,c))
#define _Min(a,b,c) Min(a,Min(b,c))
#define SQR(n)      (n*n)
#define NL         printf("\n");
#define fl(i,a,b) for(int i=a;i<=b;i++)
#define rfl(i,a,b) for(int i=b;i>=a;i--)
#define sfl(i,n) for(int i=0;i<n;i++)
#define rsfl(i,n) for(int i=n-1;i>=0;i--)
#define MEM(array,value) memset(array,value,sizeof(array));

using namespace std;
bool isprime(int n)
{
    int x = sqrt(n);
    for(int i = 2; i <= x; i++)
    {
        if(n % i == 0) return false;


    }
    return true;

}

int inrevrs(int n)
{
    int arr[1000], a, b, c, d;
    int i = 0;
    while(n > 0)
    {
        arr[i++] = n % 10;
        n = n / 10;

    }
    int sum = 0;
    b = 1;
    for(int j = i - 1; j >= 0; j--)
    {
        sum += arr[j] * b;
        b *= 10;

    }

    return sum;
}


int main()
{

    int n, a, b, c, d;
    while(cin >> n)
    {
        if(n <= 9)
        {
            if(isprime(n))  cout << n << " is prime." << endl;

            else cout << n << " is not prime." << endl;

        }
        else
        {

            a = inrevrs(n);
            if(isprime(n))
            {
                if(isprime(a) && a != n) cout << n << " is emirp." << endl;

                else    cout << n << " is prime." << endl;

            }

            else cout << n << " is not prime." << endl;

        }
    }

        return 0;
    }



