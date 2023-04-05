#pragma G++ optimize("O3,unroll-loops")
#pragma G++ target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
// #define int long long
#define ll long long
#define pii pair<int, int>
using namespace std;

// constexpr int d4[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
// constexpr int d8[8][2] = {{-1, 1}, {0, 1},   {1, 1},  {-1, 0},{1, 0},  {-1,
// -1}, {0, -1}, {1, -1}};

void sol() {
  bool ok = 1;
  short s, e, b, k, cnt = 0;
  cin >> s >> e >> b >> k;
  while (cnt != k) {
    if (s > e) {
      cout << -1 << '\n';
      ok = 0;
      break;
    }
    string str = to_string(s);
    if (s % b == 0 || str.find(char(b + '0')) != str.npos)
      cnt++;
    s++;
  }
  if (ok == 1)
    cout << s - 1 << '\n';
}

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
