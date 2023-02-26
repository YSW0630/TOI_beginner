#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
struct Shop {
  int val, id;
} goods[35];
int Start, End, Min, Max;
vector<int> tmp;

void tmp_change() {
  pair<vector<int>::iterator, vector<int>::iterator> result =
      minmax_element(tmp.begin(), tmp.end());
  for (int j = Start; j < End; ++j) {
    if (goods[j].val == *result.first)
      Min = j;
    if (goods[j].val == *result.second)
      Max = j;
  }
  swap(goods[Min].id, goods[Max].id);
  for (int j = Start; j < End; ++j) {
    cout << goods[j].id << ' ';
  }
  cout << -1 << ' ';
  tmp.clear();
}

void Solver() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> goods[i].val;
  }
  for (int i = 0; i < n; ++i) {
    cin >> goods[i].id;
  }
  // solve
  bool wall_flag = 0, Start_flag = 1;
  for (int i = 0; i < n; ++i) {
    if (goods[i].id != -1 && wall_flag == 0) {
      cout << goods[i].id << ' ';
    } else if (goods[i].id == -1 && wall_flag == 0) {
      cout << goods[i].id << ' ';
      wall_flag = 1;
    } else if (goods[i].id != -1 && wall_flag == 1) {
      tmp.emplace_back(goods[i].val);
      if (Start_flag == 1) {
        Start = i;
        Start_flag = 0;
      }
    } else if (goods[i].id == -1 && wall_flag == 1 && tmp.empty()) {
      cout << -1 << ' ';
    } else {
      End = i;
      tmp_change();
      Start_flag = 1;
    }
  }
  if (!tmp.empty()) {
    for (int i = Start; i < n; ++i) {
      cout << goods[i].id << ' ';
    }
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
