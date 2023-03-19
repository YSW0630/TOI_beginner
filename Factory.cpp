#pragma G++ optimize("O3,unroll-loops")
#pragma G++ target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) { return a.first > b.first; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  vector<pair<int, int>> vec;
  int n, h, fac = 0;
  cin >> n;
  while (n--) {
    int a, p;
    cin >> a >> p;
    vec.push_back(make_pair(a, p));
  }
  sort(vec.begin(), vec.end(), cmp);
  cin >> h;
  for (pair<int, int> p : vec) {
    if (h > 0) {
      h -= p.second;
      fac++;
    } else
      break;
  }
  cout << fac << '\n';
  return 0;
}
