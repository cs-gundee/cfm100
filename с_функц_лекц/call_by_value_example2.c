#include <stdlib.h>
#include <stdio.h>
 
int main( void )
{
   int i;         /* тоолуур хувьсагч */
   unsigned seed; /* санамсаргүй тоо гарган авахад ашиглах*/
   
   printf( "Enter seed: " );
   scanf( "%u", &seed ); /* nsigned төрөлтэй бол %u */
 
   srand( seed ); /* санамсаргүй тоо эхлүүлэх*/
   
   /* 10 удаа давтах */
   for ( i = 1; i <= 10; i++ ) {
   	/* 1-с 6 хооронд санамсаргүй тоо сонгоод хэвлэх */
      	printf( "%10d", 1 + ( rand() % 6 ) );

/* 5-д хуваагдах бол шинэ мөрөөс эхлүүлэх */
      if ( i % 5 == 0 ) {
         printf( "\n" );
      } 
 
   } 
   return 0; 
} 
