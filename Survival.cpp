#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
struct amount {
  int H;
  int W;
  int ans;
} table[2005];

void Solver() {
  int n, h, w, tmp = INT_MAX, id = 0;
  cin >> n;
  for (int i = 0; i < n; ++i)
    cin >> table[i].H;
  for (int i = 0; i < n; ++i)
    cin >> table[i].W;
  for (int i = 0; i < n; ++i) {
    table[i].ans = table[i].H * table[i].W;
    if (table[i].ans < tmp) {
      tmp = table[i].ans;
      id = i;
    }
  }
  cout << table[id].H << ' ' << table[id].W << '\n';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
