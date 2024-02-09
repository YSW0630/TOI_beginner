#pragma GCC optimize("Ofast,unroll-all-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <cstring>
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
constexpr int mxn = 1e5 + 5;
constexpr int d4[4][2] = {{0, -1}, {-1, 0}, {1, 0}, {0, 1}};
constexpr int d8[8][2] = {{-1, -1}, {0, -1}, {1, -1}, {-1, 0},
                          {1, 0},   {-1, 1}, {0, 1},  {1, 1}};
/******************************************************************************/

char board[21][21];

void sol() {
  MEM(board, 'x');
  char c;
  string s;
  int n, m, x, y; cin >> n >> m;
  bool ok = 1;
  while (m-- && ok) {
    cin >> c >> s >> x >> y; 
    if (c == 'V') { // vertical
      if (y+s.size()-1 < n) {
        for (int i = y; i < y+s.size(); ++i) {
          if (board[i][x] != 'x' && board[i][x] != s[i-y]) {
            cout << "No" << '\n';
            ok = 0;
            break;
          } else board[i][x] = s[i-y]; 
        } 
      } else {
        cout << "No" << '\n';
        ok = 0;
        break;
      }
    } else {        // horizontal
      if (x+s.size()-1 < n) {
        for (int i = x; i < x+s.size(); ++i) {
          if (board[y][i] != 'x' && board[y][i] != s[i-x]) {
            cout << "No" << '\n';
            ok = 0;
            break;
          } else board[y][i] = s[i-x];
        } 
      } else {
        cout << "No" << '\n';
        ok = 0;
        break;
      }
    }
  }
  if (ok) cout << "Yes" << '\n';
} 

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
