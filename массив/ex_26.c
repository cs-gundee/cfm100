/* Ex_26 */
#include <stdio.h>
 
int main() {
   /* n массивыг утгатай эхлүүлэх */
   int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
   int i; /* тоолуур хувьсагч */
   
   printf( "%s%13s\n", "Element", "Value" );
   
   /* массивын элементүүдийн хэвлэх */
   for ( i = 0; i < 10; i++ ) {
      printf( "%7d%13d\n", i, n[ i ] );
   }
 
   return 0; 
}
