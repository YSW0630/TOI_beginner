#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>

void solve() {
  string s[] = {"morning", "afternoon", "night", "early morning"};
  float m, a, n, e, idx, ans = 0;
  float sum_m = 0, sum_a = 0, sum_n = 0, sum_e = 0;
  for (int i = 1; i <= 7; ++i) {
    cin >> m >> a >> n >> e;
    if ((m + a + n + e) > ans) {
      ans = m + a + n + e;
      idx = i;
    }
    sum_m += m;
    sum_a += a;
    sum_n += n;
    sum_e += e;
  }
  cout << idx << "\n";
  ans = max({sum_m, sum_a, sum_n, sum_e});
  if (ans == sum_m)
    cout << s[0];
  else if (ans == sum_a)
    cout << s[1];
  else if (ans == sum_n)
    cout << s[2];
  else
    cout << s[3];
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
