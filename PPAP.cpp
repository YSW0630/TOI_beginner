#include <iostream>
#include <string>
using namespace std;

void solve() {
  bool flag = 0;
  int n, r = 4;
  cin >> n;
  string arr[4] = {"Pen", "Pineapple", "Apple", "Pineapple pen"};
  if (n <= 4)
    cout << arr[n - 1] << "\n";
  else {
    while (1) {
      if (n - r > 0) {
        n -= r;
        r += 4;
      } else if (n - r == 0) {
        flag = 1;
        break;
      } else
        break;
    }
    if (flag == 1)
      cout << "Pineapple pen"
           << "\n";
    else {
      r = (r) / 4;
      if (n % r == 0)
        cout << arr[(n - 1) / r] << "\n";
      else
        cout << arr[n / r] << "\n";
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
