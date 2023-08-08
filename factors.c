#include <stdio.h>

int main() {
  int integer , i;

  printf("Enter an integer: ");
  scanf("%d", &integer);

  printf("Factors of %d are:\n", integer);

  for ( i = 1; i <= integer; i++) {
    if (integer % i == 0) {
      printf("%d\n", i);
    }
  }

}
