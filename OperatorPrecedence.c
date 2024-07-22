#include<stdio.h>

int main() {
    /*The operator precedence is not BODMAS, rather it is,
                        *, /, %   first
                           | 
                         +, -     second
                           |
                           =      last
    */
   int a = 4*3/8*2; // it is equal to 2 and not 3
   int b = (((4*3)/8)*2); 
   printf("%d\n", a);
   printf("%d\n", b);
   /*For same level of operators the precedence is left to right*/
   return 0;
}