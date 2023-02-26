#include <iostream>
#include <vector>
using namespace std;

void solve() {
  int n, a, b, c;
  vector<int> v;
  bool flag = 0;
  cin >> n;
  while (n--) {
    cin >> a >> b >> c;
    for (int i = a + 1; i < b; ++i) {
      if (i % c != 0) {
        flag = 1;
        v.push_back(i);
      }
    }
    if (flag == 0)
      cout << "No free parking spaces."
           << "\n";
    else {
      for (int i : v)
        cout << i << " ";
      cout << "\n";
    }
    flag = 0;
    v.clear();
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
