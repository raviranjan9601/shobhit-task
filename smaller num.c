#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    if (a < b) {
        printf("%d is smaller than %d.\n", a, b);
    } 
    else if (b < a) {
        printf("%d is smaller than %d.\n", b, a);
    }
    else {
        printf("Both values are equal.\n");
    }

    return 0;
}
