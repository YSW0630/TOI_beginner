#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  int n, h, m, t;
  cin >> n;
  pair<string, string> arr[n];
  cin >> h >> m;
  for (int i = 0; i < n; ++i) {
    cin >> t;
    if (m + t >= 60) {
      h += (m + t) / 60;
      m = (m + t) % 60;
      if (h >= 24)
        h -= 24;
    } else {
      m += t;
    }
    if (h < 10 || m < 10) {
      if (h < 10)
        arr[i].first = "0" + to_string(h);
      if (m < 10)
        arr[i].second = "0" + to_string(m);
    }
    if (h >= 10 || m >= 10) {
      if (h >= 10)
        arr[i].first = to_string(h);
      if (m >= 10)
        arr[i].second = to_string(m);
    }
  }
  while (cin >> n && n != 0) {
    cout << arr[n - 1].first << ':' << arr[n - 1].second << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
