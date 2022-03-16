#include <stdio.h>

int main(void)
{
  printf("Hello fuckers\n");
  printf("\"");
  printf("\tHello fuckers\n");
  printf("\\\n");
  int x = 4;
  printf("int :- %d\n", 4);
  printf("x : %d\n", x);
  printf("series (x+1) :- %d, %d, %d \n", x, x+1, x+2);
  printf("aka series\n");
  float y = 5.3543;
  printf("aks float : %10.2f\n", y);
  double xxx = 5.3543;
  printf("double:- %.3lf\n", xxx);
  char d[]= "hello there motherfucker\n";
  printf("%s", d);
}
