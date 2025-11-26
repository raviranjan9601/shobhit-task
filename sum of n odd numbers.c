
//sum of n odd numbers without using scanf

#include <stdio.h>
int main() {
    int n = 5;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}
