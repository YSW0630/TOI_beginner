#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

void Solver() {
  int n, t, mt[35];
  cin >> n;
  mt[0] = 999999;
  for (int i = 1; i <= n; ++i) {
    cin >> mt[i];
  }
  mt[n + 1] = 999999;
  cin >> t;
  if (mt[t + 1] < mt[t - 1]) {
    t++;
    while (mt[t + 1] <= mt[t])
      t++;
  } else {
    t--;
    while (mt[t - 1] <= mt[t])
      t--;
  }
  cout << t << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
