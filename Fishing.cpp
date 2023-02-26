// ranking number 1 with cpp !
#pragma G++ optimize("O3,unroll-loops")
#pragma G++ target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void Solver() {
  int a, b, x, y, n, Min = INT_MAX, min_a = 0, min_b = 0;
  scanf("%d %d %d", &x, &y, &n);
  while (n--) {
    scanf("%d %d", &a, &b);
    if (pow(abs(a - x), 2) + pow(abs(b - y), 2) < Min) {
      min_a = a;
      min_b = b;
      Min = pow(abs(a - x), 2) + pow(abs(b - y), 2);
    }
  }
  printf("%d %d\n", min_a, min_b);
}

int main() {
  Solver();
  return 0;
}
