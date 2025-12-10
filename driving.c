#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are allow for a driving .\n");
    } else {
        printf("You are not allow for a driving license.\n");
    }

    return 0;
}
