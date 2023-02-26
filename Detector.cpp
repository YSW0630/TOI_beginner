#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <iostream>
#define ll long long
using namespace std;

void Solver() {
  int detected = 0;
  int undetected = 0;
  int r, c, mtx[20][20];
  cin >> r >> c;
  // read in
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      cin >> mtx[i][j];
    }
  }
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      switch (mtx[i][j]) {
      case 0:
        break;
      case 1:
        break;
      default:
        for (int m = i - 1; m <= i + 1; ++m) {
          for (int n = j - 1; n <= j + 1; ++n) {
            if (m >= 0 && m < r && n >= 0 && n < c && !(m == i && n == j)) {
              if (mtx[m][n] >= 5) {
                mtx[m][n] = 6;
                mtx[i][j] = 6;
              }
            }
          }
        }
        if (mtx[i][j] == 5) {
          for (int m = i - 1; m <= i + 1; ++m) {
            for (int n = j - 1; n <= j + 1; ++n) {
              if (m >= 0 && m < r && n >= 0 && n < c) {
                if (mtx[m][n] == 1) {
                  detected++;
                  mtx[m][n] = 0;
                }
              }
            }
          }
        }
        break;
      }
    }
  }
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      if (mtx[i][j] == 1) {
        undetected++;
      }
    }
  }
  cout << detected << ' ' << undetected << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
