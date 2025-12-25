#include <stdio.h>


int x = 5;
int square(int n);

int main() {
    int result;
    result = square(x);
    printf("Square of %d is %d\n", x, result);
    return 0;
}


int square(int n) {
    return n * n;
}

