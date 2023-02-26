#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <iostream>
#define ll long long
#define pii pair<int, int>
using namespace std;

bool flag_changer(bool f) {
  if (f == 1)
    return 0;
  else
    return 1;
}

void Solver() {
  int n, m, x, aw_id = 0, tu_id = 0, tu_arr[10005],
               aw_arr[10005]; // 陣列要設比原題大不少 (原本的max:)
  cin >> n;
  bool flag = 0;
  for (int i = 0; i < 2 * n + 1; ++i) {
    // tu = 1, aw = 0
    cin >> x;
    while (x--) {
      if (flag == 0)
        aw_arr[aw_id] = 1;
      else
        aw_arr[aw_id] = 2;
      aw_id++;
    }
    flag = flag_changer(flag);
  }
  cin >> m;
  for (int i = 0; i < 2 * m - 1; ++i) {
    cin >> x;
    while (x--) {
      if (flag == 0)
        tu_arr[tu_id] = 1;
      else
        tu_arr[tu_id] = 2;
      tu_id++;
    }
    flag = flag_changer(flag);
  }
  // solve
  int ct = 0;
  bool ok = 0;
  for (int i = 0; i < aw_id - tu_id + 1; ++i) {
    for (int j = 0; j < tu_id + 1; ++j) {
      if (aw_arr[i + j] + tu_arr[j] > 3)
        break;
      else
        ct++;
    }
    if (ct == tu_id + 1) {
      ok = 1;
      cout << "YES" << '\n';
      break;
    }
    ct = 0;
  }
  if (ok == 0)
    cout << "NO" << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
