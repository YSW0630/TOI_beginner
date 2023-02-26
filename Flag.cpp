#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void Solver() {
  int r, c, stu_mtx[100][100];
  cin >> r >> c;
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      cin >> stu_mtx[i][j];
    }
  }
  // solve
  int failed_stu = 0;
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      int now = stu_mtx[i][j], now_failed = 0, around = 9;
      for (int m = i - 1; m <= i + 1; ++m) {
        for (int n = j - 1; n <= j + 1; ++n) {
          if (m >= 0 && m < r && n >= 0 && n < c && !(m == i && n == j)) {
            if (stu_mtx[m][n] != now) {
              now_failed++;
            }
          } else {
            around--;
          }
        }
      }
      if (around - now_failed == 0)
        failed_stu++;
    }
  }
  cout << failed_stu << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
