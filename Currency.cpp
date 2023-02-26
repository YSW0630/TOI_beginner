#include <bits/stdc++.h>
using namespace std;

void solve() {
  map<char, double> money_table = {
      {'T', 1.0}, {'U', 30.9}, {'J', 0.28}, {'E', 34.5}};
  double n, m;
  char type;
  cin >> n >> m >> type;
  double res =
      ((n / money_table[type]) - m >= 0 ? ((n / money_table[type]) - m) : -1);
  if (res == -1)
    cout << "No Money"
         << "\n";
  else if (res != -1 && res < 0.05)
    cout << type << " 0.00"
         << "\n";
  else
    cout << fixed << setprecision(2) << type << " " << res << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
