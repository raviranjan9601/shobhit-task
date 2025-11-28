#include <stdio.h>

int main() {
    int num, rev = 0, temp, r;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        r = temp % 10;
        rev = rev * 10 + r;
        temp /= 10;
    }

    if (rev == num)
        printf("%d is a Palindrome.\n", num);
    else
        printf("%d is not a Palindrome.\n", num);

    return 0;
}
