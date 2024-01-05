#include <stdio.h>

long get_long(const char *prompt);

int main(void) {
  long x = get_long("Enter X: ");
  long y = get_long("Enter Y: ");

  double z = (double) x / (double) y;
  printf("%.20f\n", z);
  return 0;
}

long get_long(const char *prompt) {
  long n;
  printf("%s", prompt);
  scanf("%li", &n);
  return n;
}

