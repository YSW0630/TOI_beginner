#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void Solver() {
  int x, t, idx = 0, arr[30], tmr_plus[30];
  memset(tmr_plus, 0, 30 * sizeof(int));
  while (cin >> x, x != 0) {
    arr[idx] = x;
    idx++;
  }
  cin >> t;
  while (t--) {
    for (int i = 0; i < idx; ++i) {
      if (i == 0) {
        if (arr[i] > arr[i + 1])
          tmr_plus[i + 1] += arr[i] * 0.1;
      } else if (i == idx - 1) {
        if (arr[i] > arr[i - 1])
          tmr_plus[i - 1] += arr[i] * 0.1;
      } else {
        if (arr[i - 1] < arr[i])
          tmr_plus[i - 1] += arr[i] * 0.05;
        if (arr[i + 1] < arr[i])
          tmr_plus[i + 1] += arr[i] * 0.05;
      }
    }
    for (int i = 0; i < idx; ++i) {
      if (tmr_plus[i] != 0) {
        arr[i] += tmr_plus[i];
        tmr_plus[i] = 0;
      }
    }
  }
  for (int i = 0; i < idx; ++i)
    cout << arr[i] << ' ';
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
