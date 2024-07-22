#include<stdio.h>

int main() {
    /*Carefully observe the format specifiers and
      decimal point in the oepration.*/    
    //Case 1: When a<b
    printf("%d\n", 5/9);
    printf("%f\n", 5/9);
    printf("%f\n", 5.0/9);
    printf("%f\n", 5/9.0);
    printf("%f\n", 5.0/9.0);

    //Case 2: When a>b
    printf("%d\n", 11/7);
    printf("%f\n", 11/7);
    printf("%f\n", 11.0/7);
    printf("%f\n", 11/7.0);
    printf("%f\n", 11.0/7.0);
    /*The decimal value is not rounded off, rather it is just
    cut off from the output when the result is in integer form.*/
    return 0;
}