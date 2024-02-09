#pragma GCC optimize("Ofast,unroll-all-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <iostream>
#include <string>
#include <string_view>
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

const string ans = "AHIMOTUVWXY";

void sol() {
  bool ok = 1;
  string s; cin >> s;
  int len = s.length();
  if (len == 1) {
    if (ans.find(s) != string::npos) cout << "Yes" << '\n';
    else cout << "No" << '\n';
  } else {
    for (int i = 0; i < len/2; ++i) {
      if (s[i] != s[len-i-1] || (ans.find(s[i]) == string::npos) || (ans.find(s[len-i-1]) == string::npos)) {
        ok = 0; 
        break;
      }
    }
    if (ok) {
      if (len%2) {
        if ((ans.find(s[len/2]) != string::npos)) cout << "Yes" << '\n';
        else cout << "No" << '\n';
      } else cout << "Yes" << '\n';
    } else cout << "No" << '\n';
  }
} 

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
