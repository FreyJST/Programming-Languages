#include <stdio.h>

int main()
{
  // var will be anything 
  //                     --> space is allocated 
  int var = 10;
  int x,y,z;
  x = 4;
  y = 6;
  z = 3;
 
  float hmm = 64.352353;

  double hmmm = 64.352353;

  char c = 'U';

  // mapping 
  //
  // what is 123 
  char o = 123;
  printf("var :- %d\n", var);
  printf("x:- %d, y:- %d, z:- %d\n",x,y,z);
  printf("hmm is :- %f\n", hmm);
  printf("hmmm is :- %lf\n", hmmm);
  printf("char :- %c\n", c);
  printf("what's the mapping of U :- %d\n", c);
  printf("this is :- %c\n", o);
  return 0;

}

