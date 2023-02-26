#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  int tmp, biggest = -1;
  stringstream ss;
  string s;
  cin >> s;
  map<int, int> num_table;
  map<int, int>::iterator it;
  vector<int> vec;
  for (int i = 0; i < s.length(); ++i) {
    ss << s[i];
    ss >> tmp;
    num_table[tmp]++;
    ss.clear();
    ss.str("");
  }
  for (it = num_table.begin(); it != num_table.end(); ++it) {
    if ((it->second) > biggest)
      biggest = (it->second);
  }
  for (int i = biggest; i > 0; --i) {
    for (it = num_table.begin(); it != num_table.end(); ++it) {
      if (it->second == i)
        vec.push_back(it->first);
    }
    if (vec.size() == 1)
      cout << vec[0] << ' ';
    else if (vec.size() > 1) {
      sort(vec.begin(), vec.end());
      for (int i = 0; i < vec.size(); ++i)
        cout << vec[i] << ' ';
    }
    vec.clear();
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
