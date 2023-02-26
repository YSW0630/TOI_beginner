#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  vector<int> ans;
  int n, biggest = -1, tmp = 0, count = 0, idx = 1, id;
  string p;
  cin >> n >> p;
  for (int i = p.size() - 1; i >= 0; --i) {
    if (count == n) {
      count = 0;
      ans.emplace_back(tmp);
      tmp = 0;
    }
    if (count != n) {
      tmp += p[i] - '0';
      ++count;
    }
  }
  if (tmp != 0)
    ans.emplace_back(tmp);
  biggest = *max_element(ans.begin(), ans.end());
  for (std::vector<int>::iterator it = ans.begin(); it != ans.end(); ++it) {
    if (*it == biggest)
      id = idx;
    idx++;
  }
  cout << id << ' ' << biggest << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
