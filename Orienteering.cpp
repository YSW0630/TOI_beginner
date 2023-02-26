#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
const int mxn = 1e9;
using namespace std;

int main() {
  std::set<char> iter;
  std::set<char>::iterator it, END;
  std::map<char, pii> table;
  int w, h, r = 0, ct = 0;
  char c;
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin >> w >> h;
  cin >> ct;
  for (int i = 0; i < w; ++i) {
    for (int j = 0; j < h; ++j) {
      cin >> c;
      if (c > 96 && c < 123) {
        r++;
        iter.insert(c);
        table[c] = {i, j};
      }
    }
  }
  END = iter.begin();
  for (int i = 0; i < ct; ++i)
    END++;
  if (r < ct)
    cout << "Mission fail." << '\n';
  else {
    for (it = iter.begin(); it != END; ++it)
      cout << table[*it].first << ' ' << table[*it].second << '\n';
  }
  return 0;
}
