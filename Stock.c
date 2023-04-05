#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <stdio.h>
int main() {
  int t, s, p, now, sum = 0;
  scanf("%d %d %d", &t, &s, &p);
  now = t;
  while (s > 0) {
    if (now >= t * 0.8) {
      sum += p * 0.5;
    } else if (now >= t * 0.6) {
      sum += p * 0.6;
    } else if (now >= t * 0.4) {
      sum += p * 0.8;
    } else if (now >= t * 0.2) {
      sum += p * 0.9;
    } else
      break;
    s--;
    now--;
  }
  printf("%d\n", sum);
  return 0;
}
