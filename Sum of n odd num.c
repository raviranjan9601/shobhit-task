
//sum of n odd numbers using scanf

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter how many odd numbers to sum: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}
