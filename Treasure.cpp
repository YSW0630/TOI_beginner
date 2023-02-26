#include <climits>
#include <iostream>

using namespace std;
int arr[100][100];

int main() {
  int flag = 0;
  int mem_x, mem_y;
  int min = INT_MAX;
  int max = INT_MIN;
  // input
  int n = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      int num = 0;
      cin >> num;
      arr[i][j] = num;
    }
  }
  // traverse
  for (int y = 0; y < n; ++y) {
    for (int x = 0; x < n; ++x) {
      if (arr[y][x] >= max) {
        mem_x = x;
        max = arr[y][x];
      }
    }
    for (int stright = 0; stright < n; ++stright) {
      if (arr[stright][mem_x] < min) {
        mem_y = stright;
        min = arr[stright][mem_x];
      }
    }
    if (max == min) {
      flag = 1;
      break;
    }
    max = INT_MIN;
    min = INT_MAX;
  }
  if (flag == 1) {
    cout << mem_y << " " << mem_x << endl;
  } else if (flag == 0) {
    cout << "NO" << endl;
  }
  return 0;
}
