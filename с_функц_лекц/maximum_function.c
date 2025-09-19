#include <stdio.h>
 
int maximum( int x, int y, int z ); /* функцийн загвар*/
 
int main() {
   int number1; /* нэг дэх тоо */
   int number2; /* хоёр дахь тоо */
   int number3; /* гурав дахь тоо */
 
   printf( "Enter three integers: " );
   scanf( "%d%d%d", &number1, &number2, &number3 );
   
   /* number1, number2, number3 нь maximum функц дуудлагын аргументууд*/
   printf( "Maximum is: %d\n", maximum( number1, number2, number3 ) );
 
   return 0; 
}

/* maximum функцийн тодорхойлолт */
/* x, y, z нь параметрүүд */
int maximum( int x, int y, int z )
{
   int max = x;     /* x хамгийн их гэж үзье */
 
   if ( y > max ) { /* хэрэв y нь max-аас их бол y-г max-д онооно */
      max = y;
   } /* if-н төгсгөл */
 
   if ( z > max ) { /* хэрэв z нь max-аас их бол z-г max-д онооно */
      max = z;
   } /* if-н төгсгөл */
 
   return max;      /* max нь хамгийн их утга */
 }
