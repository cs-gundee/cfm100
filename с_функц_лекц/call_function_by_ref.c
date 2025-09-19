#include <stdio.h>

void addFive(int *x) {
    *x = *x + 5;  // хаягаар очиж утгыг өөрчилнө
    printf("*x = %d\n", *x);
}

int main() {
    int a = 10;
    addFive(&a);  	// хаягийг дамжуулж байна
    printf("a = %d\n", a);  // a өөрчлөгдөнө
    return 0;
}
