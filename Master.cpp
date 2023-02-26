#include <iostream>
using namespace std;

void solve() {
  int n, s, cp, iv, id, max = 0;
  cin >> n >> s;
  s /= 1000;
  for (int i = 1; i <= n; ++i) {
    cin >> cp >> iv;
    if (iv >= 0 && iv <= 29)
      iv = 10;
    else if (iv >= 30 && iv <= 39)
      iv = 50;
    else if (iv >= 40 && iv <= 45)
      iv = 100;
    for (int j = 0; j < s; ++j)
      cp += iv;
    if (cp > max) {
      id = i;
      max = cp;
    }
  }
  cout << id << " " << max << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
