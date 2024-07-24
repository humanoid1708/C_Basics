#include <stdio.h>

void swap(int *a, int *b);

int  main() {
    int num1, num2, temp;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    printf("\nBefore Swapping");
    printf("\nFirst number = %d, Second number = %d", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter Swapping");
    printf("\nFirst Number = %d, Second number = %d \n", num1, num2);
    return 0;
}


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
