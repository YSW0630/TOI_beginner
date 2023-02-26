#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define int ll
using namespace std;

void Solver() {
  int m, a, ti;
  cin >> m >> a;
  while (m--) {
    cin >> ti;
    if (a <= ti) {
      break;
    } else {
      a += ti;
    }
  }
  cout << a << '\n';
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
