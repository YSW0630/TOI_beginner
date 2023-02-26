#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  int n, num, ct = 0, land[30] = {0};
  cin >> n;
  bool flag = 0;
  int i = 1;
  land[0] = -1;
  while (i <= n) {
    cin >> num;
    if (num == 1)
      flag = 1;
    if (flag == 1) {
      land[i] = num;
      i++;
    } else
      n--;
  }
  while (land[n] != 1) {
    n--;
  }
  land[n + 1] = -1;
  for (int i = 1; i <= n; ++i) {
    if (land[i] == 0 && land[i - 1] != 9 && land[i + 1] != 9)
      ct++;
  }
  cout << ct << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
