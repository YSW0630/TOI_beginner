#include <algorithm>
#include <iostream>
#include <string>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  int t, water_arr[105], sun_arr[105], r, l, day = 0, now_water = 0,
                                             now_sun = 0;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    cin >> water_arr[i];
  }
  for (int i = 0; i < t; ++i) {
    cin >> sun_arr[i];
  }
  cin >> r >> l;
  // solve
  bool ok = 0;
  for (int i = 0; i < t; ++i) {
    day++;
    now_water += water_arr[i];
    now_sun += sun_arr[i];
    if (now_water >= r && now_sun >= l) {
      cout << day + 1 << '\n';
      ok = 1;
      break;
    }
  }
  if (ok == 0) {
    cout << -1 << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
