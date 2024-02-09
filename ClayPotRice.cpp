#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol() {
  int t, g, w, e, b; cin >> t >> g >> w >> e >> b;   
  if (g+w+e+b <= t) cout << g+w+e+b << '\n';
  else cout << -1 << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  sol();
  return 0;
}
