// ascii.c - print ascii table
#include <stdio.h>

int main() {
  printf("dec\thex\tchar\n");
  for (int i = 0; i <= 127; i++) {
    printf("%3d\t%2x\t%c\n", i, i, i);
  }
  return 0;
}
