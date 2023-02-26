#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void Solver() {
  int n, teacher[205], kid[205];
  cin >> n;
  for (int i = 0; i < n; ++i)
    cin >> teacher[i];
  for (int i = 0; i < n; ++i)
    cin >> kid[i];
  // solve
  for (int i = 0; i < n; ++i) {
    int min_dis = 999;
    for (int j = 0; j < n; ++j) {
      if (teacher[i] == kid[j] && abs(i - j) < min_dis)
        min_dis = abs(j - i);
    }
    if (min_dis == 999)
      cout << -1 << ' ';
    else
      cout << min_dis << ' ';
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  // while (1)
  Solver();
  return 0;
}
