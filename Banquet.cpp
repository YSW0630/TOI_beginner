#include <bits/stdc++.h>

using namespace std;

bool check(char w) { return (w > 64 && w < 91); }
char arr[200][100];

void solve() {
  string s, new_s;
  int t;
  cin >> t;
  memset(arr, '0', sizeof(char));
  for (int i = 0; i < t; ++i) {
    cin >> s;
    for (int j = 0; j < s.size(); ++j)
      arr[i][j] = s[j];
  }
  for (int i = 0; i < 100; ++i) {
    for (int j = 0; j < t; ++j) {
      if (check(arr[j][i]) == 1)
        new_s += arr[j][i];
    }
  }
  cout << new_s << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
