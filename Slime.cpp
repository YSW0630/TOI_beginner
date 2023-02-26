// by 閃電a

#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  int a, b;

  cin >> a >> b;

  int sum = a + b;

  int day = log((a + b) / a) / log(2);

  cout << day;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
