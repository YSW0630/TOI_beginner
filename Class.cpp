#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define pii pair<int, int>
#include <bits/stdc++.h>
using namespace std;

void sol() {
  vector<int> chi, mth;
  int sc[1005];
  int n; cin >> n;
  for (int i = 1; i <= n; ++i) {
    cin >> sc[i];
  }
  for (int i = 1, x; i <= n; ++i) {
    cin >> x;
    if (x > sc[i])
      mth.emplace_back(i);
    else
      chi.emplace_back(i);
  }
  if (chi.empty())
    cout << -1 << '\n';
  else {
    for (const int &i : chi) cout << i << ' ';
    cout << '\n';
  }
  if (mth.empty())
    cout << -1 << '\n';
  else {
    for (const int &i : mth) cout << i << ' ';
    cout << '\n';
  }
}

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
