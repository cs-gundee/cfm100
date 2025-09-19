#include <stdio.h>
 
long fibonacci( long n ); /* function prototype */
 
/* function main begins program execution */
int main(){
   long result; /* fibonacci value */
   long number; /* number input by user */
 
   /* obtain integer from user */
   printf( "Enter an integer: " );
   scanf( "%ld", &number );
 
   /* calculate fibonacci value for number input by user */
   result = fibonacci( number );
 
   /* display result */
   printf( "Fibonacci( %ld ) = %ld\n", number, result );
   
   return 0; /* indicates successful termination */ 
} /* end main */
long fibonacci( long n )
{
   /* base case */
   if ( n == 0 || n == 1 ) {
      return n;
   } /* end if */
   else { /* recursive step */ 
      return fibonacci( n - 1 ) + fibonacci( n - 2 );
   } /* end else */
   
} /* end function fibonacci */
