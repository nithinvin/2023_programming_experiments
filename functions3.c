#include <stdio.h>

int sum(int k);

int main() {
  int result = sum(5);
  printf("%d\n", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    printf("I'm inside sum function: k = %d\n", k);
    return k + sum(k - 1);
  } else {
    printf("k = %d. So, I'm returning 0\n", k);
    return 0;
  }
}
