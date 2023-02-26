#include <bits/stdc++.h>
#define pii pair<int, int>
#define ll long long
using namespace std;
int arr[100][100] = {0};

void solve() {
  int r, c, n;
  cin >> r >> c >> n;

  int move_right = n / 2;
  int move_down = (n - 1) / 2;

  int num = 1;

  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      arr[(i + move_down) % r][(j + move_right) % c] = num;
      num++;
    }
  }

  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      cout << arr[i][j] << ' ';
    }
    cout << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
