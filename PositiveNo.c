#include <stdio.h>

int main() {
    int num = 10;
    
     printf("Enter a number: ");
    scanf("%d", &num);


    if (num < 10) {
        printf("Positive number\n");
    } else if (num < 0) {
        printf("Negative number\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}

