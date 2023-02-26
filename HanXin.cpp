#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

void solve() {
  int a1, b1, a2, b2, a3, b3, i = 1;
  while (cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3) {
    while (!(i % a1 == b1 && i % a2 == b2 && i % a3 == b3)) {
      ++i;
    }
    cout << i << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
