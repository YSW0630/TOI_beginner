#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define maxe max_element

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

std::map<int, pair<string, int>> combo = {{1, {"Medium Wac", 4}},
                                          {2, {"WChicken Nugget", 8}},
                                          {3, {"Geez Burger", 7}},
                                          {4, {"ButtMilk Crispy Chicken", 6}},
                                          {5, {"Plastic Toy", 3}}};
std::map<int, pair<string, int>> single = {{1, {"German Fries", 2}},
                                           {2, {"Durian Slices", 3}},
                                           {3, {"WcFurry", 5}},
                                           {4, {"Chocolate Sunday", 7}}};

void solve() {
  int kind, num, total = 0;
  while (cin >> kind, kind != 0) {
    cin >> num;
    if (kind == 1) {
      cout << combo[num].first << ' ' << combo[num].second << '\n';
      total += combo[num].second;
    } else if (kind == 2) {
      cout << single[num].first << ' ' << single[num].second << '\n';
      total += single[num].second;
    }
  }
  cout << "Total: " << total << '\n';
}

int main() {
  fastio solve();
  return 0;
}
