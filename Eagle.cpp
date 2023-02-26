#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  // init
  queue<int> que;
  int n, e, q, qi, arr[2005];
  cin >> n;
  for (int i = 0; i < n; ++i)
    cin >> arr[i];
  cin >> e >> q;
  for (int i = 0; i < q; ++i) {
    cin >> qi;
    que.push(qi);
  }
  // start
  while (!que.empty()) {
    *find(arr, arr + n, que.front()) = e;
    e = que.front();
    que.pop();
  }
  for (int i = 0; i < n; ++i)
    cout << arr[i] << ' ';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
