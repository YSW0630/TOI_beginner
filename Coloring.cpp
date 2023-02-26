#include <bits/stdc++.h>
#define pii pair<int, int>
#define ll long long
using namespace std;

void solve() {
  bool flag = 0;
  int m, n, arr[101][101] = {0}, element, one_counter = 0;
  cin >> m >> n;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> element;
      arr[i][j] = element;
    }

    one_counter = std::count(&arr[i][0], &arr[i][n], 1);

    for (int j = 0; j < n; ++j) {
      if (arr[i][j] == 1) {
        one_counter--;
        if (flag == 0)
          flag = 1;
        else
          flag = 0;
        cout << 1 << ' ';
      } else if (flag == 1 && one_counter > 0) {
        cout << 1 << ' ';
      } else
        cout << 0 << ' ';
    }
    cout << "\n";
    flag = 0;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
