#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <iostream>
#include <map>
#include <string>
#define ll long long
#define pii pair<int, int>
using namespace std;
void Solver() {
  map<int, int> file;
  int n, tmp;
  string s;
  cin >> n;
  while (n--) {
    cin >> s;
    s = s.substr(3, 2);
    tmp = stoi(s);
    file[tmp]++;
  }
  for (map<int, int>::iterator it = file.begin(); it != file.end(); ++it)
    cout << it->first << ' ' << it->second << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  Solver();
  return 0;
}
