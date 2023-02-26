#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void Solver() {
  string s, ans;
  cin >> s >> ans;
  for (int i = 0; i < ans.length(); ++i) {
    bool ok = 0;
    for (int j = 0; j < s.length(); ++j) {
      if (s[j] == ans[i]) {
        cout << j + 1 << ' ';
        s[j] = ' ';
        ok = 1;
        break;
      }
    }
    if (ok == 0)
      cout << 'X' << ' ';
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
