#include <stdio.h>

int main() {
    int r, c;
    int arr[10][10], sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum += arr[i][j];

    printf("Sum = %d\n", sum);
    return 0;
}
