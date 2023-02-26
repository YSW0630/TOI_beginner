#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void Solver() {
  int n, m, d;
  cin >> n >> m >> d;
  if (d < n && d < m)
    cout << "NO" << '\n';
  else if (!(d % n) || !(d % m))
    cout << "YES" << '\n';
  else {
    bool ok = 0;
    if (n < m)
      swap(n, m);
    for (int i = 0; i <= d / n; ++i) {
      d -= n;
      if (d > 0 && !(d % m)) {
        cout << "YES" << '\n';
        ok = 1;
      }
    }
    if (ok == 0)
      cout << "NO" << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
