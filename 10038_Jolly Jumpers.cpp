
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
int main()
{
    LL n, arr[10000], a, b, i, j, arr1[10000],l;
   // bool flag;
    while(cin >> n)
    {
        //flag = 0;
       // if(n == 1)
          //  flag = 1;
        sfl(i, n)
        {
            cin >> arr[i];


        }
        j = 0;
        for(LL k = 0; k < n - 1; k++)
        {
            arr1[j++] = abs(arr[k] - arr[k + 1]);

        }
        sort(arr1, arr1 + j);
        LL sum = 0;
        for(l = 1; l <=j; l++)
        {
            if(arr1[l-1] == l)
            {
               // flag = 1;
                sum++;
            }
           // else
              //  flag = 0;

        }

       if(sum==j)
        cout<<"Jolly"<<endl;



        //cout << sum1 <<" "<<sum << endl;

        else
            cout<<"Not jolly"<<endl;

        //else cout<<"Not jolly"<<endl;


    }

    return 0;
}



