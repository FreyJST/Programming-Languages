#include <stdio.h>

int main()
{
/*
   * and operator 
   * x          y       x && y
   * True      True     True
   * True      False    False
   * False     True     False
   * False     False    False 
   *
*/

/*
 *  or operator 
 *
 *  X         Y         X || Y
 *  True      True      True
 *  True      False     True 
 *  False     True      True
 *  False     False     False
 *
 */

/*
 *
 * not operator 
 *
 * x            !x
 * True         False
 * False        True 
 */

int age = 18;
int money = 5000;

if (age >= 18 && money == 5000)
  printf("yeah you can go into sex club\n");
else 
  printf("FUck off");
return 0;
}

