#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  int n, a, b;
  cin >> n;
  a = n;
  b = n;
  if (n < 1000)
    cout << n << ' ' << 0 << '\n';
  else if (n >= 1000 && n < 2000)
    cout << n - 100 << ' ' << 1 << '\n';
  else {
    int tmp;
    tmp = a;
    while (tmp >= 2000) {
      a -= 200;
      tmp -= 2000;
    }
    tmp = b;
    while (tmp >= 1000) {
      b -= 100;
      tmp -= 1000;
    }
    if (a < b || a == b)
      cout << a << ' ' << 0 << '\n';
    else if (a > b)
      cout << b << ' ' << 1 << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
