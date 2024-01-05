#include <stdio.h>

// Function declarations
int get_size(void);
void print_grid(int n);

int main(void) {
  // Get size of grid
  int n = get_size();

  // Print the grid
  print_grid(n);
  return 0;
}

int get_size(void) {
  int n;
  do {
    printf("Enter size: ");
    scanf("%d",&n);
  } while (n < 1);
  return n;
}

void print_grid(int size) {
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
      printf("#");
    }
    printf("\n");
  }
}
