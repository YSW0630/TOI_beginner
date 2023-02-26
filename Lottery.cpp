#include <bits/stdc++.h>
#define pii pair<int, int>
#define ll long long
#define ld long double
using namespace std;

void solve() {
  int n, sum = 0, Larr[3], yarr[5], money[5];
  bool found3 = 0;
  for (int i = 0; i < 3; ++i) {
    cin >> n;
    Larr[i] = n;
  }
  for (int i = 0; i < 5; ++i) {
    cin >> n;
    yarr[i] = n;
  }
  for (int i = 0; i < 5; ++i) {
    cin >> n;
    money[i] = n;
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; ++j) {
      if (Larr[i] == yarr[j])
        sum += money[j];
    }
  }
  for (int i = 0; i < 5; ++i) {
    if (yarr[i] == Larr[2]) {
      sum = sum - money[i] >= 0 ? sum - money[i] : 0;
      found3 = 1;
    }
  }
  if (found3 == 0)
    cout << 2 * sum << '\n';
  else
    cout << sum << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
