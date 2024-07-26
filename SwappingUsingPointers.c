#include <stdio.h>

int  main() {
    int num1, num2, temp;

    //Initializing Pointers.
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    //Input from user.
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("\nEnter second number:");
    scanf("%d", &num2);

    printf("\nBefore Swapping");
    printf("\nFirst number = %d, Second number = %d", num1, num2);

    //Swapping
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\nAfter Swapping");
    printf("\nFirst number = %d, Second number = %d", num1, num2);
    return 0;
}