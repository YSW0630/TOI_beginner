// by snail

#include <bits/stdc++.h>
using namespace std;

int main() {
  bool x = false;
  string s, t;
  cin >> s;
  for (auto ch : s + '+') {
    if (ch != '+' && ch != '-')
      t += ch;
    else {
      if (x) {
        reverse(t.begin(), t.end());
      }
      x = (ch == '-');
      cout << t;
      t = "";
    }
  }
  cout << endl;
}
