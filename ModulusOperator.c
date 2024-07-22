#include<stdio.h>

int main() {
    /* 1)The Modulus operator '%', returns the remainder.
       2)It returns negavtive value only when the numerator is negative.
       3)It works only with integer values and is invalid to use float or
         double values with it.
    */      
    printf("If both numerator and denominator are positive then remainder is %d", 6%4);
    printf("\nIf numerator is negative and denominator is positive then remainder is %d", -6%4);
    printf("\nIf numerator is positive and denominator is negative then remainder is %d", 6%-4);
    printf("\nIf both numerator and denominator are negative then remainder is %d", -6%-4);
    return 0;
}