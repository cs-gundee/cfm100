#include <stdio.h>

// Функцийн зарлалт
int add(int a, int b) {
    return a + b;   // Нийлбэр буцаана
}

int main() {
    int x = 5, y = 10, sum;

    sum = add(x, y); // Функц дуудах
    printf(“Niilber = %d\n", sum);

    return 0;
}
