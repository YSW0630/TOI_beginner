#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
char mtx[76][76];

int d8[8][2] = {{-1, -1}, {0, -1}, {1, -1}, {-1, 0},
                {1, 0},   {-1, 1}, {0, 1},  {1, 1}};

void Solver() {
  // input
  int r, c, x, y, xp, yp;
  char tmp;
  cin >> r >> c;
  string s;
  for (int i = 1; i <= r; ++i) {
    for (int j = 1; j <= c; ++j) {
      cin >> tmp;
      tmp = tolower(tmp);
      mtx[i][j] = tmp;
    }
  }
  cin >> s;
  for (int i = 0; i < s.size(); ++i) {
    s[i] = tolower(s[i]);
  }
  // solve
  int st[2] = {-1, -1}, ed[2] = {-1, -1};
  bool ok;
  for (int i = 1; i <= r; ++i) {
    for (int j = 1; j <= c; ++j) {
      for (int m = 0; m < 8; ++m) {
        ok = 1;
        x = j;
        y = i;
        xp = d8[m][0];
        yp = d8[m][1];
        for (int n = 0; n < s.length(); ++n) {
          if (x > 0 && x <= c && y > 0 && y <= r) {
            if (s[n] != mtx[y][x]) {
              ok = 0;
              break;
            }
          } else {
            ok = 0;
            break;
          }
          if (n != s.length() - 1) {
            x += xp;
            y += yp;
          }
        }
        if (ok == 1) {
          st[0] = i;
          st[1] = j;
          ed[0] = y;
          ed[1] = x;
          break;
        }
      }
      if (ok == 1)
        break;
    }
    if (ok == 1)
      break;
  }
  if (st[0] == -1 && st[1] == -1)
    cout << "NO" << '\n';
  else {
    cout << st[0] << ' ' << st[1] << '\n';
    cout << ed[0] << ' ' << ed[1] << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
