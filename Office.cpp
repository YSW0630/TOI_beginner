#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <set>
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
constexpr int mxn = 1e5+1;
constexpr int d4[4][2] = {{0, -1}, {-1, 0}, {1, 0}, {0, 1}};
constexpr int d8[8][2] = {{-1, -1}, {0, -1}, {1, -1}, {-1, 0},
                          {1, 0},   {-1, 1}, {0, 1},  {1, 1}};
/******************************************************************************/

int arr[mxn];
void sol() {
  int k, idx, cnt, tmp, ans = 0; cin >> k;
  for (int i = 1; i <= k; ++i) cin >> arr[i];
  for (int i = 1; i <= k; ++i) {
    cnt = 0;
    idx = i;
    while (arr[idx]) {
      tmp = idx;
      idx = arr[idx]; 
      arr[tmp] = 0;
      cnt++;
    } 
    ans = max(ans, cnt);
  }
  cout << ans << '\n';
}

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
