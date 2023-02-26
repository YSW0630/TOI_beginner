#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int mxn = 1e5;

void solve() {
  int n, s, m, total, num, ans[25];
  cin >> n >> s;
  for (int i = 0; i < n; ++i)
    cin >> ans[i];
  cin >> m;
  for (int i = 0; i < m; ++i) {
    total = n * s;
    for (int j = 0; j < n; ++j) {
      cin >> num;
      if (num != ans[j])
        total -= s;
    }
    cout << total << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
