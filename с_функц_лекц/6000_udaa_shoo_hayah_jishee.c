#include <stdio.h>
#include <stdlib.h>
 
int main() {
   int frequency1 = 0; /* 1 буулгах хаялтын тоо хадгалах хувьсагч */
   int frequency2 = 0; /* 2 буулгах тоо */
   int frequency3 = 0; /* 3 буулгах тоо */
   int frequency4 = 0; /* 4 буулгах тоо */
   int frequency5 = 0; /* 5 буулгах тоо */
   int frequency6 = 0; /* 6 буулгах тоо */
 
   int roll; /* 1-6000 удаа давтах тоолуур хувьсагч */
   int face; /* 1 хаялтын утга хадгалах хувьсагч*/
 
   /* 6000 удаа давтах */
   for ( roll = 1; roll <= 6000; roll++ ) {
      face = 1 + rand() % 6; /* 1-с 6 хооронд санамсаргүй тоо үүсгэх */
 
      /* таарах утгыг сонгож, буултын тоог нэмэгдүүлнэ */
      switch ( face ) { 
     	case 1: /* 1 буусан гэж үзвэл*/
        	++frequency1;
        	break;
 	    case 2: /* 2 */
        	++frequency2;
        	break;
        case 3: /* 3 */
            ++frequency3;
            break;         
        case 4: /* 4 */
            ++frequency4;
            break;         
        case 5: /* 5 */
            ++frequency5;
            break;         
        case 6: /* 6 */
            ++frequency6;
            break;
      } /* switch төгсгөл*/ 
   } /* for төгсгөл*/
 /* үр дүнг хүснэгт хэлбэрээр харуулах */
   printf( "%s%13s\n", "Face", "Frequency" );
   printf( "   1%13d\n", frequency1 );
   printf( "   2%13d\n", frequency2 );
   printf( "   3%13d\n", frequency3 );
   printf( "   4%13d\n", frequency4 );
   printf( "   5%13d\n", frequency5 );
   printf( "   6%13d\n", frequency6 );
   
   return 0; 
}
