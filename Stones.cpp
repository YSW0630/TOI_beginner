#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

int main() {
  int n, rocks_arr[105], min_rock, max_rock, average_rock = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> rocks_arr[i];
    average_rock += rocks_arr[i];
  }
  average_rock /= n;
  max_rock = *max_element(rocks_arr, rocks_arr + n);
  min_rock = *min_element(rocks_arr, rocks_arr + n);
  min_rock += max_rock - average_rock;
  max_rock -= max_rock - average_rock;
  *min_element(rocks_arr, rocks_arr + n) = min_rock;
  *max_element(rocks_arr, rocks_arr + n) = max_rock;
  for (int i = 0; i < n; ++i)
    cout << rocks_arr[i] << ' ';
}
