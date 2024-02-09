#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
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
#define lowbit(x) x &(-x)
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
  vector<pii> v;
  int n, m; cin >> n >> m;
  v.reserve(m);
  for (int i = 1, x; i <= n && m; ++i) {
    cin >> x;
    if (x) {
      v.emplace_back(make_pair(x,i)); 
      m--;
    }
  }
  sort(all(v));
  for (const pii &i : v) {
    cout << i.second << ' ';
  }
  cout << '\n';
}

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
