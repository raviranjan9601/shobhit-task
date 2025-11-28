#include <stdio.h>

int main() {
    int product1, product2, product3;
    int product;

    printf("Enter 1st product numbers:\n");
    scanf("%d", &product1);
    
    printf("Enter 2nd product numbers:\n");
    scanf("%d", &product2);
     
    printf("Enter 3rd product numbers:\n");
    scanf("%d", &product3);

    product = product1 * product2 * product3;

    printf("Product of the three numbers = %d\n", product);

    return 0;
}
