#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  float v;
  int n, g, a, h, w;
  cin >> n;
  while (n--) {
    cin >> g >> a >> h >> w;
    v = (g == 1 ? ((13.7 * w) + (5.0 * h) - (6.8 * a) + 66)
                : ((9.6 * w) + (1.8 * h) - (4.7 * a) + 655));
    cout << fixed << setprecision(2) << v << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
