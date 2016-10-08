// wscount.c - count blanks, tabs and newlines
#include <stdio.h>

int main() {
  int c, nb, nt, nl;
  while ((c = getchar()) != EOF) {
    if (c == ' ') ++nb;
    if (c == '\t') ++nt;
    if (c == '\n') ++nl;
  }
  printf("blanks: %d, tabs: %d, newlines: %d\n", nb, nt, nl);
  return 0;
}
