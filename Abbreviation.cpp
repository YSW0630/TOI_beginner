#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define int ll
using namespace std;

void Solver() {
  vector<string> vol;
  string s, tmp;
  getline(cin, s);
  stringstream ss(s);
  while (getline(ss, tmp, ' ')) {
    string cap;
    for (int i = 0; i < tmp.size(); ++i) {
      if (i != 0)
        cap += tolower(tmp[i]);
      else
        cap += toupper(tmp[0]);
    }
    tmp = cap;
    vol.emplace_back(tmp);
  }
  for (int i = 0; i < vol.size(); ++i) {
    if (vol[i] == "For")
      cout << 4;
    else if (vol[i] == "To")
      cout << 2;
    else if (vol[i] == "And")
      cout << 'n';
    else if (vol[i] == "You")
      cout << 'u';
    else
      cout << vol[i][0];
  }
  cout << '\n';
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
