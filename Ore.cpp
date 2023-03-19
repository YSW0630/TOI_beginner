#pragma G++ optimize("O3,unroll-loops")
#pragma G++ target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int mxn = 1e9 + 5;
int lt, rt, ore[505];

void LR_init(int a, int n, int idx) {
  if (idx - a < 0) {
    lt = idx;
    rt += a - idx;
    if (idx + rt > n)
      rt = n - idx;
  }
  if (idx + a > n) {
    rt = n - idx - 1;
    lt += idx + a - n + 1;
    if (idx - lt < 0)
      lt = idx;
  }
}

void sol() {
  int n, a, ans = 0, no = 0, mx = INT_MIN, mx_idx;
  memset(ore, 0, 505 * sizeof(ore[0]));
  cin >> n >> a;
  a /= 2;
  lt = rt = a;
  for (int i = 0; i < n; ++i) {
    cin >> ore[i];
    if (ore[i] > mx) {
      mx = ore[i];
      mx_idx = i;
    }
  }
  ans = mx;
  // solve
  LR_init(a, n, mx_idx);
  int now = mx_idx;
  while (lt--) {
    now--;
    ans += ore[now];
    ore[now] = 0;
  }
  now = mx_idx;
  while (rt--) {
    now++;
    ans += ore[now];
    ore[now] = 0;
  }
  ore[mx_idx] = 0;
  for (int i = 0; i < n; ++i) {
    if (ore[i] != 0)
      no += ore[i];
  }
  cout << ans << ' ' << no << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  sol();
  return 0;
}
