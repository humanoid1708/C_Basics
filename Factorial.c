#include <stdio.h>

int main() {
    int num;
    int fac = 1;
    printf("Enter the number:");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
       fac = fac*i;
    }
    printf("The factorial of the number is %d", fac); 
    
    return 0;
}