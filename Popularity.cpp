#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <memory.h>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int d4[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int d8[8][2] = {{-1, 1}, {0, 1},   {1, 1},  {-1, 0},
                {1, 0},  {-1, -1}, {0, -1}, {1, -1}};

void Solver() {
  int r, c, mtx[10][10], new_mtx[10][10];
  cin >> r >> c;
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      cin >> mtx[i][j];
    }
  }
  // solve
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      if (mtx[i][j] == 0) {
        int ct = 0, sum = 0;
        for (int m = 0; m < 4; ++m) {
          int x = j + d4[m][0];
          int y = i + d4[m][1];
          if (x >= 0 && x < c && y >= 0 && y < r && mtx[y][x] != 0) {
            ct++;
            sum += mtx[y][x];
          }
        }
        if (ct == 0) {
          new_mtx[i][j] = 0;
        } else {
          new_mtx[i][j] = sum / ct;
        }
      } else {
        new_mtx[i][j] = mtx[i][j];
      }
    }
  }
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      cout << new_mtx[i][j] << ' ';
    }
    cout << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
