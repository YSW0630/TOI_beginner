#include <bits/stdc++.h>
using namespace std;

void solve() {
  int m, n, ct = 0, sum_m = 0, sum_n = 0;
  cin >> m >> n;
  if (m <= n)
    cout << "No"
         << "\n";
  else {
    for (int i = 0; i < m; ++i) {
      cin >> ct;
      sum_m += ct;
    }
    ct = 0;
    for (int i = 0; i < n; ++i) {
      cin >> ct;
      sum_n += ct;
    }
    cout << ((sum_m > sum_n) ? "Yes" : "No");
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
