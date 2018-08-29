#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;

const int N = 42;

int a[N];
double f[N][N], nf[N][N];

int main() {
  int n, k;
  while(scanf("%d %d", &n, &k)==2)
  {
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      f[i][j] = (a[i] > a[j]);
    }
  }
  int segs = n * (n + 1) / 2;
  for (int step = 1; step <= k; step++) {
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        nf[i][j] = 0.0;
        nf[i][j] += f[i][j] * 1.0 * (((i + 1) * i / 2) + ((j - i) * (j - i - 1) / 2) + ((n - j) * (n - j - 1) / 2));
        for (int sum = 0; sum <= 2 * (n - 1); sum++) {
          // ll + rr == sum
          // ll <= i
          // j <= rr  =>  j <= sum - ll  =>  ll <= sum - j
          // ll <= sum - ll  =>  2 * ll <= sum
          // rr < n  =>  sum - ll < n  =>  ll > sum - n
          int from = max(sum - n + 1, 0);
          int to = min(i, sum - j);
          if (from <= to) {
            nf[i][j] += (1.0 - f[sum - j][sum - i]) * (to - from + 1);
          }
        }
        for (int sum = 0; sum <= 2 * (n - 1); sum++) {
          // ll + rr == sum
          // ll <= i
          // i <= rr  =>  ll <= sum - i
          // rr < j  =>  sum - ll < j  =>  ll > sum - j
          // 2 * ll <= sum
          int from = max(sum - n + 1, max(sum - j + 1, 0));
          int to = min(i, sum - i);
          if (from <= to) {
            nf[i][j] += f[sum - i][j] * (to - from + 1);
          }
        }
        for (int sum = 0; sum <= 2 * (n - 1); sum++) {
          // ll + rr == sum
          // ll > i
          // ll <= j
          // j <= rr  =>  ll <= sum - j
          // 2 * ll <= sum
          int from = max(sum - n + 1, i + 1);
          int to = min(j, sum - j);
          if (from <= to) {
            nf[i][j] += f[i][sum - j] * (to - from + 1);
          }
        }
        nf[i][j] /= segs;
/*        for (int ll = 0; ll < n; ll++) {
          for (int rr = ll; rr < n; rr++) {
            int ni = i, nj = j;
            if (ll <= i && i <= rr) ni = ll + rr - i;
            if (ll <= j && j <= rr) nj = ll + rr - j;
            if (ni < nj) {
              nf[i][j] += f[ni][nj] / segs;
            } else {
              nf[i][j] += (1.0 - f[nj][ni]) / segs;
            }
          }
        }*/
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        f[i][j] = nf[i][j];
      }
    }
  }
  double ans = 0.0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      ans += f[i][j];
    }
  }
  printf("%.17f\n", ans);
  }
  return 0;
}
