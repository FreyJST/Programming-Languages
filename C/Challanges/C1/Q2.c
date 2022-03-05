#include <stdio.h>
int main()
{
  char* a = "COding";
  char* b = (++a) + 1 + 1;
  printf("%c", *b);
}
