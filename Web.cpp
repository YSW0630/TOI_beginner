#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  int x, y, sum = 0;
  map<int, int> login;
  while (cin >> x >> y && (x != -1 && y != -1)) {
    if (x == 1) {
      login[y]++;
    } else {
      login.erase(y);
    }
  }
  for (map<int, int>::iterator it = login.begin(); it != login.end(); ++it) {
    sum += it->second;
  }
  cout << sum << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
