#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <iostream>
#include <map>
#include <string>
#define ll long long
#define pii pair<int, int>
using namespace std;
int ft[150], sec[150], ans[300];

void Solver() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; ++i)
    cin >> ans[i];
  while (m--) {
    for (int j = 0; j < n / 2; ++j) {
      ft[j] = ans[j];
    }
    for (int j = n / 2, id = 0; j < n; ++j, id++) {
      sec[id] = ans[j];
    }
    int idx = 0;
    for (int i = 0; i < n; i += 2) {
      ans[i] = ft[idx];
      ans[i + 1] = sec[idx];
      idx++;
    }
  }
  for (int i = 0; i < n; ++i) {
    cout << ans[i] << ' ';
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
