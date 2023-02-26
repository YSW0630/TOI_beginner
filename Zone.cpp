#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

struct Lucky_seven {
  int original, after_rem;
};

bool flag_changer(bool f) {
  if (f == 1)
    return 0;
  else
    return 1;
}

void Swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void Solver() {
  string s;
  int h, m, t, a;
  cin >> h >> m >> s >> t;
  a = (h * 60 + m) + 90 * t;
  if (a > 2160)
    a -= 2160;
  else if (a < 0)
    a += 2160;
  h = a / 60;
  m = a % 60;
  if (m < 10)
    cout << h << ':' << '0' << m << ':' << s << '\n';
  else
    cout << h << ':' << m << ':' << s << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
