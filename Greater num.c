#include <stdio.h>
int main() {
    int a,b;
    printf("enter number frist:");
    scanf("%d",&a);
    printf("enter number second:");
    scanf("%d",&b);
        if (a > b)
        printf("frist num is grater then second num: %d\n", a);
    else if (b > a)
        printf("second num greater then frist num: %d\n", b);
        else
        printf("frist num and second num both are equal");
    return 0;
}
