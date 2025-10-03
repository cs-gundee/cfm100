/* Ex_55 roman numeral conversion with array of pointers */
#include <stdio.h>
 
int main( void ) {
  int decimal_number = 101, a = 0, b = 0;
  const char *x[11] = {"", "x", "xx", "xxx", "xl", "l", "lx", "lxx", 
  "lxxx", "xc", "c"};
  const char *y[10] = {"", "i", "ii", "iii", "iv", "v", "vi", "vii", 
  "viii", "ix"};
  
  while ((decimal_number > 100) || (decimal_number < 0)) {
    printf("Enter the decimal numbers in the range 1 to 100:\n");
    scanf("%d", &decimal_number);
  }
  a = decimal_number/10;
  b = decimal_number%10;
  printf("The equivalent roman is %s%s\n", x[a], y[b]);
} /* end main */ 

