#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define pii pair<int, int>
#include <bits/stdc++.h>
using namespace std;

int arr[1000][100];
void sol() {
  int n, m, x, mem, up_num = INT_MIN, lo_num = INT_MIN, best = -1, worst = -1;
  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> arr[i][j];
    }
  } 
  //solve
  for (int i = 0; i < n; ++i) {
    int sum_up = 0, sum_lo = 0;
    for (int j = 0; j < m; ++j) {
      if (j == 0) {
        mem = arr[i][0];
        continue;
      }
      else if (arr[i][j] > mem)
        sum_up += arr[i][j] - mem; 
      else if (arr[i][j] < mem)
        sum_lo += mem - arr[i][j];
      mem = arr[i][j];
    }
    best = sum_up > up_num ? up_num = sum_up, best = i+1 : best;
    worst = sum_lo > lo_num ? lo_num = sum_lo, worst = i + 1 : worst;
  }
  cout << best << '\n' << worst << '\n';
}

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
