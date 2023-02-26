#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  int n, m, r, sum = 0, arr[10005];
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> r;
    arr[i] = r;
  }
  for (int i = 1; i <= n; ++i) {
    if (i % arr[n - 1] == 1)
      sum += arr[i - 1];
  }
  m = sum % n;
  if (m != 0)
    cout << m << ' ' << arr[m - 1] << "\n";
  else
    cout << n << ' ' << arr[n - 1] << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
