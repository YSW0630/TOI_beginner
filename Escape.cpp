#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

string s;
char mtx[105][105];
char way[] = {'R', 'D', 'L', 'U'};
int r, c, x = 0, y = 0, nw = 0;

void move(char dir, int step) {
  int len = -1;
  switch (dir) {
  case 'R':
    len = x + step >= c ? c - 1 : x + step;
    while (x <= len) {
      mtx[y][x] = '*';
      x++;
    }
    x--;
    break;
  case 'L':
    len = x - step < 0 ? 0 : x - step;
    while (len <= x) {
      mtx[y][x] = '*';
      x--;
    }
    x++;
    break;
  case 'U':
    len = y - step < 0 ? 0 : y - step;
    while (len <= y) {
      mtx[y][x] = '*';
      y--;
    }
    y++;
    break;
  case 'D':
    len = y + step >= r ? r - 1 : y + step;
    while (y <= len) {
      mtx[y][x] = '*';
      y++;
    }
    y--;
    break;
  default:
    break;
  }
}

void sol() {
  memset(mtx, '.', sizeof(mtx));
  cin >> r >> c >> s;
  for (const char &C : s) {
    short n = C - '0';
    move(way[nw % 4], n);
    nw++;
  }
  // Print
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      cout << mtx[i][j];
    }
    cout << '\n';
  }
}

signed main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
