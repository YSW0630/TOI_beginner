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
  bool ok = 1;
  int n, x; cin >> n;
  vector<int> v(n);
  for (int &i : v) cin >> i;
  while (cin >> x, x) {
    if (v[x-1] == 99) {
      cout << "Wrong" << '\n';
      ok = 0;
      break;
    }
    v[x-1] = 99;
  }
  if (ok) {
    if (find(v.begin(), v.end(), -1) == v.end()) cout << "Townsfolk" << '\n';
    else cout << "Werewolves" << '\n';
  }
}

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
