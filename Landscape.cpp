#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int mxn = 1e9;

// LandScape
void Solver() {
  int n, m, building[1005], max_r = -1, max_l = -1, ans = 0;
  cin >> n >> m;
  // input
  for (int i = 0; i < n; ++i)
    cin >> building[i];

  int self_h = building[m - 1];

  // look right
  for (int i = m; i < n; ++i) {
    if (building[i] > self_h && building[i] > max_r) {
      max_r = building[i];
      ans++;
    }
  }

  // look left
  for (int i = m - 2; i > -1; --i) {
    if (building[i] > self_h && building[i] > max_l) {
      max_l = building[i];
      ans++;
    }
  }

  cout << ans << '\n';
}

int main() {
  static int arr[100];
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  // while (1)
  Solver();
  return 0;
}
