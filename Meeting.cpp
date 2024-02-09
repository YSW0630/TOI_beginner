#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

struct Time {
  int s, e;
};

void sol() {
  vector<Time> a, b;
  int n, m, d, S, E;
  cin >> n >> m;
  a.reserve(n);
  b.reserve(m);
  for (int i = 0, s, e; i < n; ++i) {
    cin >> s >> e;
    a.push_back({s, e});
  }
  for (int i = 0, s, e; i < m; ++i) {
    cin >> s >> e;
    b.push_back({s, e});
  }
  cin >> d;
  bool ok = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (b[j].s < a[i].e) {
        S = b[j].s < a[i].s ? a[i].s : b[j].s;
        E = b[j].e > a[i].e ? a[i].e : b[j].e;
        if (S + d <= E) {
          cout << S << ' ' << S + d << '\n';
          ok = 1;
          goto stop;
        }
      }
    }
  }
stop:;
  if (!ok)
    cout << -1 << '\n';
}

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
