
//Sum of n Natural Numbers without using scanf

#include <stdio.h>
int main() {
    int n = 10;
    int i, sum = 0;
    for(i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
