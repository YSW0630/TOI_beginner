#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int k, w, s, e, ans = 0, m_start = 185;
  scanf("%d %d %d %d", &k, &w, &s, &e);
  if (k <= 2)
    ans += 20;
  else
    ans += 20 + 5 * (k - 2);
  if (w >= 2)
    ans += 5 * (w / 2);
  if (e > 18) {
    s = s < 18 ? 18 : s;
    for (int i = 18; i < s; ++i)
      m_start += 10;
    for (int i = s; i < e; ++i) {
      ans += m_start;
      m_start += 10;
    }
  }
  printf("%d\n", ans);
  return 0;
}
