#include <bits/stdc++.h>
using namespace std;

int main() {
  bool ok = 0;
  string s, tmp;
  cin >> s;
  for (char i : s) {
    if (i == '+') {
      int len = tmp.length();
      if (len != 0) {
        for (int i = len - 1; i >= 0; --i) {
          cout << tmp[i];
        }
        ok = 0;
        tmp.clear();
      } else {
        ok = 0;
      }
    } else if (i == '-') {
      int len = tmp.length();
      if (len != 0) {
        for (int i = len - 1; i >= 0; --i) {
          cout << tmp[i];
        }
        tmp.clear();
      }
      ok = 1;
    } else {
      if (ok == 1) {
        tmp += i;
      } else {
        cout << i;
      }
    }
  }
  if (tmp.length() != 0) {
    for (int i = tmp.length() - 1; i >= 0; --i) {
      cout << tmp[i];
    }
  }
  return 0;
}
