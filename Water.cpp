#pragma G++ optimize("O3,unroll-loops")
#pragma G++ target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
// #define int long long
#define ll long long
#define pii pair<int, int>
using namespace std;

// constexpr short d4[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
// constexpr short d8[8][2] = {{-1, 1}, {0, 1},   {1, 1},  {-1, 0},
// {1, 0},  {-1, -1}, {0, -1}, {1, -1}};

void sol() {
  bool ok = 1;
  int n, w, now;
  cin >> n >> w;
  now = w;
  for (int i = 1; i <= n; ++i) {
    int m, x;
    cin >> m;
    while (m--) {
      cin >> x;
      now -= x;
    }
    if (now < 0) {
      cout << i << '\n';
      ok = 0;
      break;
    }
    now += w;
  }
  if (ok == 1)
    cout << -1 << '\n';
}

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
