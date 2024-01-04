#include <stdio.h>
#include <string.h>

int main(void) {
  char name[100]; 
  printf("What's your name? ");
  scanf("%s", name);
  printf("Hello, %s\n", name);
  return 0;
}
