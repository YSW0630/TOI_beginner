#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

void Solver() {
  vector<int> over;
  int n, si, di, sum = 0;
  cin >> n;
  while (n--) {
    cin >> si >> di;
    if (di > 100) {
      over.emplace_back(si);
      sum += (di - 100) * 5;
    }
  }
  sort(over.begin(), over.end());
  for (int i : over)
    cout << i << ' ';
  cout << '\n';
  cout << sum << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
