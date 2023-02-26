#include <bits/stdc++.h>

using namespace std;

struct Night_Market {
  int point;
  bool state;
  int timer;
  bool is_hitted;
} arr[9];

void solve() {
  bool flag;
  int n, hit, flag_count = 0, total = 0;
  for (int i = 1; i < 10; ++i) {
    arr[i - 1].point = i;
    arr[i - 1].state = 1;
    arr[i - 1].timer = 12;
    arr[i - 1].is_hitted = 0;
  }
  cin >> n;
  while (n--) {
    for (int i = 0; i < 9; ++i) {
      if (arr[i].timer == 0) {
        arr[i].state = 1;
        arr[i].timer = 12;
      }
    }
    cin >> hit;
    if ((hit != -1) && (arr[hit - 1].state == 1) &&
        (arr[hit - 1].is_hitted == 0)) {
      total += hit;
      arr[hit - 1].is_hitted = 1;
      arr[hit - 1].state = 0;
    }
    for (int i = 0; i < 9; ++i) {
      if (arr[i].state == 0) {
        arr[i].timer--;
      }
    }
    for (int i = 0; i < 9; ++i) {
      if (arr[i].state == 1) {
        flag = 0;
        break;
      } else
        flag_count++;
    }
    if (flag_count == 9) {
      flag = 1;
      break;
    }
    flag_count = 0;
  }
  if (flag == 1)
    cout << "perfect"
         << "\n";
  else
    cout << total << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
