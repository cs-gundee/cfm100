#include <stdio.h>

void addFive(int x) {
    x = x + 5;  // x-ийг өөрчилж байна
    printf("x = %d\n", x);
}

int main() {
    int a = 10;
    addFive(a);  // утгаар дамжуулж байна
    printf("a = %d\n", a);  // a өөрчлөгдөхгүй
    return 0;
}
