#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

void solve() {
  map<int, int>::reverse_iterator rit;
  map<int, int>::iterator it;
  map<int, int> mmap;
  bool flag = 0;
  int n, p, c;
  for (int i = 0; i < 2; ++i) {
    cin >> n;
    while (n--) {
      cin >> p >> c;
      mmap[p] += c;
    }
  }
  for (it = mmap.begin(); it != mmap.end(); ++it) {
    if (it->second != 0)
      flag = 1;
  }
  if (flag == 1) {
    for (rit = mmap.rbegin(); rit != mmap.rend(); ++rit) {
      if (rit->second != 0)
        cout << rit->first << ":" << rit->second << "\n";
    }
  } else
    cout << "NULL!"
         << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
