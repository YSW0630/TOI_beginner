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
  vector<Lucky_seven> yes7, no7;
  int n, Max_value = INT_MIN, Min_value = INT_MAX, id = 0;
  while (cin >> n && n != 0) {
    if (n % 7 == 0) {
      yes7.push_back({n, n % 70});
    } else {
      no7.push_back({n, n % 77});
    }
  }
  if (yes7.empty()) {
    for (int i = 0; i < no7.size(); ++i) {
      if (no7[i].after_rem < Min_value) {
        Min_value = no7[i].after_rem;
        id = i;
      }
    }
    cout << no7[id].original << '\n';
  } else {
    for (int i = 0; i < yes7.size(); ++i) {
      if (yes7[i].after_rem > Max_value) {
        Max_value = yes7[i].after_rem;
        id = i;
      }
    }
    cout << yes7[id].original << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
