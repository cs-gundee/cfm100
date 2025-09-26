/* Ex_28 Массивын элементүүдийн нийлбэрийг тооцоолох */
#include <stdio.h>
#define SIZE 12
 
int main(){
   /* жагсаалтаар массивын бүх элементийг идэвхжүүлэх */
   int a[ SIZE ] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
   int i; /* тоолуур хувьсагч */        
   int total = 0; /* нийлбэр хадгалах хувьсагч */
   
   /* массивын элементүүдийн нийлбэр олох */
   for ( i = 0; i < SIZE; i++ ) {
      total += a[ i ];
   }
 
   printf( "Total of array element values is %d\n", total );
   
   return 0; 
 }
