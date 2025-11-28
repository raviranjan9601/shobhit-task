#include <stdio.h>

int main() {
    int n, num, min;

    printf("Enter number of inputs: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &min);

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num < min)
            min = num;
    }

    printf("Minimum = %d\n", min);
    return 0;
}

