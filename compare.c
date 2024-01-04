#include <stdio.h>

int main(void)
{
  int x;
  printf("Enter X: ");
  scanf("%d", &x);
  int y; 
  printf("Enter Y: ");
  scanf("%d", &y);

  if (x < y) {
    printf("X is less than Y\n");
  } else if (x > y) {
    printf("X is greater than Y\n");
  } else {
    printf("X is equal to Y\n");
  }



  return 0;
}
