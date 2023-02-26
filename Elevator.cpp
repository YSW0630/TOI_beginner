#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void Solver() {
  int n, x, y, ans = 0;
  cin >> n >> x;
  ans += 3 * (x - 1);
  n--;
  while (n--) {
    cin >> y;
    if (x > y) {
      ans += 2 * abs(x - y);
    } else if (x < y) {
      ans += 3 * abs(x - y);
    }
    x = y;
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
