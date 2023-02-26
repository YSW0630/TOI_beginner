#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  bool flag = 0;
  int n, m, k, t = 0;
  cin >> n >> m >> k;
  while (n >= 0) {
    if (k == 1 && n - 55 < 0)
      break;
    else if (k == 0 && n - 32 < 0)
      break;
    flag = 1;
    cout << t << ": ";
    if (k == 0) {
      n -= 32;
      cout << "Wayne eats an Apple pie, ";
      k = 1;
    } else if (k == 1) {
      n -= 55;
      cout << "Wayne drinks a Corn soup, ";
      k = 0;
    }
    if (n == 0)
      cout << "and now he doesn't have money."
           << "\n";
    else if (n == 1)
      cout << "and now he has 1 dollar."
           << "\n";
    else
      cout << "and now he has " << n << " dollars."
           << "\n";
    t += m;
  }
  if (flag == 0)
    cout << "Wayne can't eat and drink."
         << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
