#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void sol() {
  int now = 1;
  map<char, int> m;
  string s;
  cin >> s;
  for (int i = s.size() - 1; i >= 0; --i) {
    if (m.find(s[i]) == m.end()) {
      m[s[i]] = now;
      now++;
    }
  }
  for (map<char, int>::iterator it = m.begin(); it != m.end(); ++it)
    cout << now - it->second;
  cout << '\n';
}

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
