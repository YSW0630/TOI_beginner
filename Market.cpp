
#pragma G++ optimize("O3,unroll-loops")
#pragma G++ target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <algorithm>
#include <cctype>
#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;

struct goods {
  int sum, q, rest = 0;
};

void sol() {
  unordered_map<char, goods>
      mkt; // type: first char second pii <alpha sum, alpha quantity>
  vector<int> ans;
  string s, t;
  cin >> s >> t;
  for (int i = 0; i < s.length(); ++i) {
    mkt[tolower(s[i])].sum += t[i] - '0';
    mkt[tolower(s[i])].q++;
  }
  for (auto &i : mkt) {
    if (i.second.sum % i.second.q != 0)
      i.second.rest += i.second.sum % i.second.q;
    i.second.sum /= i.second.q;
  }
  for (int i = s.length() - 1; i >= 0; --i) {
    if (mkt[tolower(s[i])].rest != 0) {
      ans.push_back(mkt[tolower(s[i])].sum+1);
      mkt[tolower(s[i])].rest--;
    } else
      ans.push_back(mkt[tolower(s[i])].sum);
  }
  for (int i = ans.size()-1; i >= 0; --i)
    cout << ans[i]; 
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  sol();
  return 0;
}
