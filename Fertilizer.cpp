#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
const int mxn = 1e9;
using namespace std;

void solve() {
  int s, e, a, day = 1;
  cin >> s >> e >> a;
  while (a != 0) {
    if (day % 10 == 1 && day > 10)
      a--;
    else if (day % 3 == 1 && day % 10 != 0 && day != 1) {
      s += s / 3;
    } else if (day != 1 && day % 10 != 0) {
      s += s / 10;
    }
    if (s >= e)
      break;
    day++;
  }
  if (a > 0) {
    cout << day << '\n';
  } else
    cout << "unsalable" << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
