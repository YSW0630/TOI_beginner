#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

bool cmp(vector<char> vec) {
  for (int i = 0; i < vec.size() - 3; ++i) {
    if (vec[i] == 'L' || vec[i] == 'l') {
      if (vec[i + 1] == 'o') {
        if (vec[i + 2] == 'v') {
          if (vec[i + 3] == 'e') {
            return true;
          }
        }
      }
    }
  }
  return false;
}

void solve() {
  vector<char> v;
  char input;
  int ct = 0;
  while (cin >> input) {
    if (isalpha(input))
      v.push_back(input);
  }
  while (1) {
    if (cmp(v) == false) {
      ct++;
      for (int i = 0; i < v.size(); ++i) {
        if (v[i] == 90)
          v[i] = 65;
        else if (v[i] == 122)
          v[i] = 97;
        else
          v[i]++;
      }
    } else
      break;
  }
  cout << ct;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
