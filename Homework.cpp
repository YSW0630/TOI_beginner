#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve() {
  int R, A;
  cin >> R >> A;
  if (R == A || (R - A) > A) {
    if (R == A) {
      A -= 3;
      if (R - A > A)
        cout << A << '+' << (R - A) << '=' << R << "\n";
      else
        cout << R - A << '+' << A << '=' << R << "\n";
    } else
      cout << A << '+' << (R - A) << '=' << R << "\n";
  } else
    cout << (R - A) << '+' << A << '=' << R << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
