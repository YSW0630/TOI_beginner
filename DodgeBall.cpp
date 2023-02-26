#pragma G++ optimize("O3,unroll-loops")
#pragma G++ target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, r, v, n, p, s, catch_right, catch_left;
  scanf("%d %d %d %d", &x, &r, &v, &n);
  catch_right = x + r;
  catch_left = x - r;
  while (n--) {
    scanf("%d %d", &p, &s);
    if (p >= catch_left && p <= catch_right) {
      if (s > v) {
        if (p < x)
          x += 15;
        else if (p > x)
          x -= 15;
        else
          x -= 15;
      } else {
        x = p;
      }
      catch_right = x + r;
      catch_left = x - r;
    }
  }
  printf("%d\n", x);
  return 0;
}
