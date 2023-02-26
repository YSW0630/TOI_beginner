#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
struct password {
  char w;
  int t;
} pw[26];

bool operator<(password a, password b) {
  if (a.t == b.t) {
    return a.w < b.w;
  } else {
    return a.t > b.t;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  string s;
  cin >> s;
  for (char c : s) {
    pw[c - 65].w = c;
    pw[c - 65].t++;
  }
  sort(pw, pw + 26);
  for (int i = 0; i < 26; ++i) {
    if (pw[i].t == 0)
      break;
    else
      cout << pw[i].w;
  }
  cout << endl;
}
