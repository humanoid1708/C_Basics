#include<stdio.h>

int main() {
    int arr[4] = {1, 2, 3, 4};
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[3];
    //Increment Operator in pointers.
    for(int i = 0; i <= 3; i++) {
        printf("%d\n", *ptr1);
        ptr1++;
    }
    printf("\n");
    //Decrement Operator in pointers.
    for(int i = 3; i >= 0; i--) {
        printf("%d\n", *ptr2);
        ptr2--;
    }
    return 0;
}