
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
    char str[1000];
    int cnt = 0, n, a;
    while(scanf("%s", str) == 1)
    {

        int ln = strlen(str);
        if(ln == 1 && str[0] == '#') break;

        if(strcmp(str, "HELLO") == 0) cout << "Case " << cnt + 1 << ": ENGLISH" << endl;
        else if(strcmp(str, "HOLA") == 0) cout << "Case " << cnt + 1 << ": SPANISH" << endl;
        else if(strcmp(str, "HALLO") == 0) cout << "Case " << cnt + 1 << ": GERMAN" << endl;
        else if(strcmp(str, "BONJOUR") == 0) cout << "Case " << cnt + 1 << ": FRENCH" << endl;
        else if(strcmp(str, "CIAO") == 0) cout << "Case " << cnt + 1 << ": ITALIAN" << endl;
        else if(strcmp(str, "ZDRAVSTVUJTE") == 0) cout << "Case " << cnt + 1 << ": RUSSIAN" << endl;
        else cout << "Case " << cnt + 1 << ": UNKNOWN" << endl;

        cnt++;


    }
    return 0;
}



