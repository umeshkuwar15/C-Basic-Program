#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(10, 30);
    printf("Sum = %d", sum);
    return 0;
}
