#include <stdio.h>
int main() {
    int a = 10;
    int b = 20;
    if (a < b)
        printf("Smaller number: %d\n", a);
    else if (b < a)
        printf("Smaller number: %d\n", b);
        else
        printf("Both numbers are equal: %d\n", a);
    return 0;
}
