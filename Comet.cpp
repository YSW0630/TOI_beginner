#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int mxn = 1e5;

void solve() {
  int a, b;
  cin >> a >> b;
  if (b % a != 0)
    cout << b / a + 1;
  else
    cout << b / a;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
