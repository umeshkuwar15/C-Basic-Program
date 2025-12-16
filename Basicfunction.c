#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int result = add(10, 20);
    printf("Result = %d\n", result);
    return 0;
}

