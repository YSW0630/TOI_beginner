#pragma GCC optimize("Ofast,unroll-all-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pqueue priority_queue
#define pb push_back
#define eb emplace_back
#define ep emplace
#define F first
#define S second
#define put(x) cout << x << '\n'
#define all(v) v.begin(), v.end()
#define MEM(x, n) memset(x, n, sizeof(x));
#define lowbit(x) x & (-x)
#define SZ(v) ((int)v.size())
using namespace std;
constexpr int Inf = 0x7f7f7f7f;
constexpr int Mod = 1e6 + 3;
constexpr int mxn = 1e9 + 7;
constexpr int d4[4][2] = {{0, -1}, {-1, 0}, {1, 0}, {0, 1}};
constexpr int d8[8][2] = {{-1, -1}, {0, -1}, {1, -1}, {-1, 0},
                          {1, 0},   {-1, 1}, {0, 1},  {1, 1}};
/******************************************************************************/

void sol() {
  int a, b, c, x, at = 0, bt = 0, ct = 0; cin >> a >> b >> c;
  for (int i = 0; i < a; ++i) {
    cin >> x;
    at += x*3;
  }
  at += (a-1)*2;
  for (int i = 0; i < b; ++i) {
    cin >> x;
    bt += x*3;
  }
  bt += (b-1)*2;
  for (int i = 0; i < c; ++i) {
    cin >> x;
    ct += x*3;
  }
  ct += (c-1)*2;
  if (min({at,bt,ct}) == at) {
    cout << 1 << ' ' << at << '\n';
  } else if (min({at,bt,ct}) == bt) {
    cout << 2 << ' ' << bt << '\n';
  } else {
    cout << 3 << ' ' << ct << '\n';
  }
}

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
